#pragma once
#include <QObject>
/**
 * @brief Class storing information about alarm levels
 * 
 */

class State_of_alarms: public QObject{
    Q_OBJECT
    private:
        int temp_alarm_silos_1;
        int temp_alarm_silos_2;
        int critical_temp_alarm_silos_1;
        int critical_temp_alarm_silos_2;

        int hum_alarm_silos_1;
        int hum_alarm_silos_2;
        int critical_hum_alarm_silos_1;
        int critical_hum_alarm_silos_2;

        int fulfillment_alarm_silos_1;
        int fulfillment_alarm_silos_2;
        int critical_fulfillment_alarm_silos_1;
        int critical_fulfillment_alarm_silos_2;
    public: 
        State_of_alarms();
        ~State_of_alarms();


        // Getters
        int get_temp_alarm_silos_1() const;
        int get_temp_alarm_silos_2() const;
        int get_critical_temp_alarm_silos_1() const;
        int get_critical_temp_alarm_silos_2() const;
    
        int get_hum_alarm_silos_1() const;
        int get_hum_alarm_silos_2() const;
        int get_critical_hum_alarm_silos_1() const;
        int get_critical_hum_alarm_silos_2() const;
    
        int get_fulfillment_alarm_silos_1() const;
        int get_fulfillment_alarm_silos_2() const;
        int get_critical_fulfillment_alarm_silos_1() const;
        int get_critical_fulfillment_alarm_silos_2() const;
    
    public slots:
        void set_temp_alarm_silos_1(int temp_alarm_silos_1);
        void set_temp_alarm_silos_2(int temp_alarm_silos_2);
        void set_critical_temp_alarm_silos_1(int critical_temp_alarm_silos_1);
        void set_critical_temp_alarm_silos_2(int critical_temp_alarm_silos_2);
    
        void set_hum_alarm_silos_1(int hum_alarm_silos_1);
        void set_hum_alarm_silos_2(int hum_alarm_silos_2);
        void set_critical_hum_alarm_silos_1(int critical_hum_alarm_silos_1);
        void set_critical_hum_alarm_silos_2(int critical_hum_alarm_silos_2);
    
        void set_fulfillment_alarm_silos_1(int fulfillment_alarm_silos_1);
        void set_fulfillment_alarm_silos_2(int fulfillment_alarm_silos_2);
        void set_critical_fulfillment_alarm_silos_1(int critical_fulfillment_alarm_silos_1);
        void set_critical_fulfillment_alarm_silos_2(int critical_fulfillment_alarm_silos_2);
    
    



};