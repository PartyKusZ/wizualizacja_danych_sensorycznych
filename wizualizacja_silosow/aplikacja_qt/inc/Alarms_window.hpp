#pragma once
#include <QWidget>
#include <QPushButton>
#include "State_of_alarms.hpp"
#include "ui_Alarms_window.h"
/**
 * @brief Class representing a window for setting alarm values in the alarms section
 * 
 */

class Alarms_window: public QWidget, protected Ui::alarms_window{
    
    Q_OBJECT

    protected:
        State_of_alarms *state_of_alarms;
        int silo_number;
        QString window_title;
    public: 

        Alarms_window(QWidget *parent, State_of_alarms *_state_of_alarms, int _silo_number,QString _window_title);
        virtual void set_up() = 0;
        virtual ~Alarms_window();

    public slots:
        virtual void set_alarms() = 0;
};