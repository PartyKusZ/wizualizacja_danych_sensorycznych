#include <QWidget>
#include <QPushButton>
#include "State_of_alarms.hpp"
#include "ui_Temp_alarms.h"


class Temp_settings_window: public QWidget, private Ui::temp_alarms_window{
    
    Q_OBJECT

    private:
        State_of_alarms *state_of_alarms;
        int silo_number;
    public: 

        Temp_settings_window(QWidget *parent, State_of_alarms *_state_of_alarms, int _silo_number);
        ~Temp_settings_window();

    public slots:
        void set_alarms();
};