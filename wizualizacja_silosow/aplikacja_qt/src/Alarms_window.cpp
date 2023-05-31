#include "Alarms_window.hpp" 


/**
 * @brief Construct a new Alarms_window::Alarms_window object
 * @details In the constructor, all signal connections and slots needed for the correct operation of the alarm setting window are set up 
 * 
 * @param parent parten of window
 * @param _state_of_alarms object storing information on the status of alarms
 * @param _silo_number specifies the slos to which the alarm setting window refers
 * @param _window_title stores exactly what you guessed
 */
Alarms_window::Alarms_window(QWidget *parent, State_of_alarms *_state_of_alarms, int _silo_number,QString _window_title): QWidget(parent), Ui::alarms_window(), state_of_alarms(_state_of_alarms),silo_number(_silo_number), window_title(_window_title){

    this->setupUi(this);
    this->setWindowTitle(window_title);

   
}



/**
 * @brief Destroy the Alarms_window::Alarms_window object
 * 
 */
 Alarms_window::~Alarms_window(){}