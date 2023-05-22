#include "Main_window.hpp"
 /**
 * @brief Construct a new Main_window object
 * 
 * @param parent parent widget
 * @param data data recived form serial port
 */

Main_window::Main_window(QWidget *parent,Data *_data): data(_data), Ui::Main_window(), QWidget(parent), database("test.db"){
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
 * @brief Destroy the Main_window::Main_window object
 * 
 */
Main_window::~Main_window(){
    delete this->state_of_alarms;
    delete this->all_param_backend;
    delete this->temp_backend;
    delete this->vol_backend;
}
