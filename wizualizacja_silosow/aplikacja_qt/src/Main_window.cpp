#include "Main_window.hpp"
 /**
 * @brief Construct a new Main_window object
 * 
 * @param parent parent widget
 * @param data data recived form serial port
 */

Main_window::Main_window(QWidget *parent,Data *_data): data(_data), Ui::Main_window(), QWidget(parent), database("test.db",silos_1,silos_2), translator(new QTranslator){   
    // translator->load(":en_2.qm");
    // qApp->installTranslator(translator);
    //this->retranslateUi(this);
    this->setupUi(this); // nadanie Ui dla głownego okna aplikacji

    this->state_of_alarms = new State_of_alarms; // utworzenie instancji klasy State_of_alarms odpowiedzialnej za przechowywanie inforamcji o alarmach 

    this->all_param_backend = new All_param_backend(this->silos_1,this->silos_2,dynamic_cast<Ui::Main_window&>(*this),this->state_of_alarms);
    this->temp_backend = new Temp_backend(this->silos_1,this->silos_2,dynamic_cast<Ui::Main_window&>(*this),this->state_of_alarms);
    this->hum_backend = new Hum_backend(this->silos_1,this->silos_2,dynamic_cast<Ui::Main_window&>(*this),this->state_of_alarms);
    this->vol_backend = new Vol_backend(this->silos_1,this->silos_2,dynamic_cast<Ui::Main_window&>(*this),this->state_of_alarms);
    this->historical_data = new Historical_data(dynamic_cast<Ui::Main_window&>(*this),database);
    
    
    this->timer.setInterval(100); // timer napędzający odświerzanie aplkacji co 100 ms 
    this->connect(&timer,&QTimer::timeout,this,&Main_window::silos_data_update); // aktualizowanie danych odebranych z serial portu

    this->connect(&timer,&QTimer::timeout,this->all_param_backend,&All_param_backend::set_all_param); // ustawia dane do wyśietlania na pierwszej zakladce Wszystkie parametry
    this->connect(&timer,&QTimer::timeout,this->all_param_backend,&All_param_backend::set_all_param_fullfilmnet_text); // ustawia dane o wypelnieniu do tekstowego wyświetlania w zakladce Wszystkie parametry
    this->connect(&timer,&QTimer::timeout,this->all_param_backend,&All_param_backend::set_info_alarms_silos); // ustawia tekstowe alarmy w widgetach pod silosem 1 w zakladce Wszystkie parametry i Temp
    this->connect(&timer,&QTimer::timeout,this->temp_backend,&Temp_backend::set_info_alarms_silos); // ustawia tekstowe alarmy w widgetach pod silosem 2 w zakladce Wszystkie parametry i Temp
    this->connect(&timer,&QTimer::timeout,this->temp_backend,&Temp_backend::set_temp_silos); // ustawia dane do teskstowego zapreazentowania w zakładce Temp i ustawia dane potrzebne do rysowania gradientu.
    this->connect(&timer,&QTimer::timeout,this->hum_backend,&Hum_backend::set_info_alarms_silos); // ustawia tekstowe alarmy w widgetach pod silosem 2 w zakladce Wszystkie parametry i Temp
    this->connect(&timer,&QTimer::timeout,this->hum_backend,&Hum_backend::set_hum_silos); // ustawia dane do teskstowego zapreazentowania w zakładce Temp i ustawia dane potrzebne do rysowania gradientu.
    this->connect(&timer,&QTimer::timeout,this->vol_backend,&Vol_backend::set_info_alarms_silos);
    this->connect(&timer,&QTimer::timeout,this->vol_backend,&Vol_backend::set_vol_silos);
    this->connect(this->radioButton_3,&QRadioButton::toggled,this,&Main_window::lang_pl);
    this->connect(this->radioButton_4,&QRadioButton::toggled,this,&Main_window::lang_en);

   
    this->timer.start(); // uruchamia timer nadający "rytm" apliakcji
      
    //  qApp->removeTranslator(translator);
    //  this->retranslateUi(this);
    

    
   
}   



/**
 * @brief Slots for actaulates the parameter values of silo 1 and silo 2 ( fulfilment, temperature, humidity) 
 * 
 */
void Main_window::silos_data_update(){
    auto silos = data->get_data_silos_1();
    for(int i = 0; i < silos.size(); i++){
        this->silos_1[i] = static_cast<int>(silos[i]);
    }
    silos = data->get_data_silos_2();
    for(int i = 0; i < silos.size(); i++){
        this->silos_2[i] = static_cast<int>(silos[i]);
    }
 
}

void Main_window::lang_pl(){
    qApp->removeTranslator(translator);
    this->historical_data->chart_title_translate(QString(tr("Wykres")));
    this->retranslateUi(this);
    this->hum_backend->alarms_window_1->lang_pl();
    this->hum_backend->alarms_window_2->lang_pl();
    this->vol_backend->alarms_window_1->lang_pl();
    this->vol_backend->alarms_window_2->lang_pl();
    this->temp_backend->alarms_window_1->lang_pl();
    this->temp_backend->alarms_window_2->lang_pl();
}
void Main_window::lang_en(){
    translator->load(":en_2.qm");
    qApp->installTranslator(translator);
    this->historical_data->chart_title_translate(QString(tr("Wykres")));
    this->retranslateUi(this);
    this->hum_backend->alarms_window_1->lang_en();
    this->hum_backend->alarms_window_2->lang_en();
    this->vol_backend->alarms_window_1->lang_en();
    this->vol_backend->alarms_window_2->lang_en();
    this->temp_backend->alarms_window_1->lang_en();
    this->temp_backend->alarms_window_2->lang_en();

}

/**
 * @brief Destroy the Main_window::Main_window object
 * 
 */
Main_window::~Main_window(){
    delete this->state_of_alarms;
    delete this->all_param_backend;
    delete this->temp_backend;
    delete this->vol_backend;
    delete this->translator;
}
