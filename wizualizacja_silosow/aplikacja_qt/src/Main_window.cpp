#include "Main_window.hpp"
 /**
 * @brief Construct a new Main_window object
 * 
 * @param parent parent widget
 * @param data data recived form serial port
 */

Main_window::Main_window(QWidget *parent,Data *_data): data(_data), Ui::Main_window(), QWidget(parent){
    this->setupUi(this); // nadanie Ui dla głownego okna aplikacji


    this->state_of_alarms = new State_of_alarms; // utworzenie instancji klasy State_of_alarms odpowiedzialnej za przechowywanie inforamcji o alarmach 

    this->temp_alarms_settings_1 = new Alarms_window(nullptr,state_of_alarms,SILO_1,"Alarmy temperatury - silos 1"); // utowrzenie okienka do ustawiania alarmów temperatury w zakładce TEMP dla silosu pierwszego
    this->temp_alarms_settings_2 = new Alarms_window(nullptr,state_of_alarms,SILO_2,"Alarmy temperatury - silos 2"); // utowrzenie okienka do ustawiania alarmów temperatury w zakładce TEMP dla silosu drugiego 
    this->all_param_backend = new All_param_backend(this->silos_1,this->silos_2,dynamic_cast<Ui::Main_window&>(*this),this->state_of_alarms);
    this->temp_backend = new Temp_backend(this->silos_1,this->silos_2,dynamic_cast<Ui::Main_window&>(*this),this->state_of_alarms);
    this->hum_backend = new Hum_backend(this->silos_1,this->silos_2,dynamic_cast<Ui::Main_window&>(*this),this->state_of_alarms);
    
    
    
    
    this->timer.setInterval(100); // timer napędzający odświerzanie aplkacji co 100 ms 
    this->connect(&timer,&QTimer::timeout,this,&Main_window::silos_data_update); // aktualizowanie danych odebranych z serial portu

    this->connect(&timer,&QTimer::timeout,this->all_param_backend,&All_param_backend::set_all_param); // ustawia dane do wyśietlania na pierwszej zakladce Wszystkie parametry
    this->connect(&timer,&QTimer::timeout,this->all_param_backend,&All_param_backend::set_all_param_fullfilmnet_text); // ustawia dane o wypelnieniu do tekstowego wyświetlania w zakladce Wszystkie parametry
    this->connect(&timer,&QTimer::timeout,this->all_param_backend,&All_param_backend::set_info_alarms_silos); // ustawia tekstowe alarmy w widgetach pod silosem 1 w zakladce Wszystkie parametry i Temp
    this->connect(&timer,&QTimer::timeout,this->temp_backend,&Temp_backend::set_info_alarms_silos); // ustawia tekstowe alarmy w widgetach pod silosem 2 w zakladce Wszystkie parametry i Temp
    this->connect(&timer,&QTimer::timeout,this->temp_backend,&Temp_backend::set_temp_silos); // ustawia dane do teskstowego zapreazentowania w zakładce Temp i ustawia dane potrzebne do rysowania gradientu.
    this->connect(&timer,&QTimer::timeout,this->hum_backend,&Hum_backend::set_info_alarms_silos); // ustawia tekstowe alarmy w widgetach pod silosem 2 w zakladce Wszystkie parametry i Temp
    this->connect(&timer,&QTimer::timeout,this->hum_backend,&Hum_backend::set_hum_silos); // ustawia dane do teskstowego zapreazentowania w zakładce Temp i ustawia dane potrzebne do rysowania gradientu.

    this->connect(this->temp_alarms_settings_button_silos_1,&QPushButton::clicked,this->temp_alarms_settings_1,&Alarms_window::show); // uruchamia okienko do ustawiania alarmów temperatury w silos 1 po wicsięcicu guzika
    this->connect(this->temp_alarms_settings_button_silos_2,&QPushButton::clicked,this->temp_alarms_settings_2,&Alarms_window::show); // uruchamia okienko do ustawiania alarmów temperatury w silos 2 po wicsięcicu guzika
    this->timer.start(); // uruchamia timer nadający "rytm" apliakcji
   
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









/**
 * @brief Slot for setting temperature alarm information in the temperature tab and all parameters. sets text information and the alarm icon. Silo No.1 
 * 
 */
void Main_window::set_info_alarms_temp_silos_1(){

    this->temp_silos_1->set_state_of_alarms(state_of_alarms->get_temp_alarm_silos_1(),state_of_alarms->get_critical_temp_alarm_silos_1());

    if(silos_1[1] < state_of_alarms->get_temp_alarm_silos_1()){
        this->temp_info_alarms_temp_1->setText("Temperatury w normie");
        this->temp_ico_temp_1->setPixmap(QPixmap(":/ok.png"));
        this->temp_info_alarms_al_1->setText("Temperatury w normie");
        this->temp_ico_al_1->setPixmap(QPixmap(":/ok.png"));
    }
    if(silos_1[1] > state_of_alarms->get_temp_alarm_silos_1()){
        this->temp_info_alarms_temp_1->setText("Przekroczono wartość ostrzegawczą");
        this->temp_ico_temp_1->setPixmap(QPixmap(":/ikona_warning.png"));
        this->temp_info_alarms_al_1->setText("Przekroczono wartość ostrzegawczą");
        this->temp_ico_al_1->setPixmap(QPixmap(":/ikona_warning.png"));
    }
     if(silos_1[1] > state_of_alarms->get_critical_temp_alarm_silos_1()){
        this->temp_info_alarms_temp_1->setText("Przekroczono wartość krytyczną");
        this->temp_ico_temp_1->setPixmap(QPixmap(":/ikona_stop.png"));
        this->temp_info_alarms_al_1->setText("Przekroczono wartość krytyczną");
        this->temp_ico_al_1->setPixmap(QPixmap(":/ikona_stop.png"));
    }
}

/**
 * @brief Slot for setting temperature alarm information in the temperature tab and all parameters. sets text information and the alarm icon. Silo No.2 
 * 
 */
void Main_window::set_info_alarms_temp_silos_2(){

    this->temp_silos_2->set_state_of_alarms(state_of_alarms->get_temp_alarm_silos_2(),state_of_alarms->get_critical_temp_alarm_silos_2());

    if(silos_2[1] < state_of_alarms->get_temp_alarm_silos_2()){
        this->temp_info_alarms_temp_2->setText("Temperatury w normie");
        this->temp_ico_temp_2->setPixmap(QPixmap(":/ok.png"));
        this->temp_info_alarms_al_2->setText("Temperatury w normie");
        this->temp_ico_al_2->setPixmap(QPixmap(":/ok.png"));
    }
    if(silos_2[1] > state_of_alarms->get_temp_alarm_silos_2()){
        this->temp_info_alarms_temp_2->setText("Przekroczono wartość ostrzegawczą");
        this->temp_ico_temp_2->setPixmap(QPixmap(":/ikona_warning.png"));
        this->temp_info_alarms_al_2->setText("Przekroczono wartość ostrzegawczą");
        this->temp_ico_al_2->setPixmap(QPixmap(":/ikona_warning.png"));
    }
     if(silos_2[1] > state_of_alarms->get_critical_temp_alarm_silos_2()){
        this->temp_info_alarms_temp_2->setText("Przekroczono wartość krytyczną");
        this->temp_ico_temp_2->setPixmap(QPixmap(":/ikona_stop.png"));
        this->temp_info_alarms_al_2->setText("Przekroczono wartość krytyczną");
        this->temp_ico_al_2->setPixmap(QPixmap(":/ikona_stop.png"));
    }
}











/**
 * @brief Destroy the Main_window::Main_window object
 * 
 */
Main_window::~Main_window(){
    delete this->state_of_alarms;
    delete this->temp_alarms_settings_1;
    delete this->temp_alarms_settings_2;
    delete this->all_param_backend;
    delete this->temp_backend;
}
