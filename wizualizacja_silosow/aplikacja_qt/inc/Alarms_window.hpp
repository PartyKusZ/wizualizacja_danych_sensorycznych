#pragma once
#include <QWidget>
#include <QPushButton>
#include "State_of_alarms.hpp"
#include "ui_Alarms_window.h"
/**
 * @brief Class representing a window for setting alarm values in the alarms section
 * 
 */

class Alarms_window: public QWidget, private Ui::alarms_window{
    
    Q_OBJECT

    private:
        State_of_alarms *state_of_alarms;
        int silo_number;
        QString window_title;
    public: 

        Alarms_window(QWidget *parent, State_of_alarms *_state_of_alarms, int _silo_number,QString _window_title);
        ~Alarms_window();

    public slots:
        void set_alarms();
};