#include "State_of_alarms.hpp"

/**
 * @brief Construct a new State_of_alarms::State_of_alarms object
 * 
 */

State_of_alarms::State_of_alarms()
    : temp_alarm_silos_1(0), temp_alarm_silos_2(0),
      critical_temp_alarm_silos_1(0), critical_temp_alarm_silos_2(0),
      hum_alarm_silos_1(0), hum_alarm_silos_2(0),
      critical_hum_alarm_silos_1(0), critical_hum_alarm_silos_2(0),
      fulfillment_alarm_silos_1(0), fulfillment_alarm_silos_2(0),
      critical_fulfillment_alarm_silos_1(0), critical_fulfillment_alarm_silos_2(0), QObject() {
}


int State_of_alarms::get_temp_alarm_silos_1() const { return temp_alarm_silos_1; }
int State_of_alarms::get_temp_alarm_silos_2() const { return temp_alarm_silos_2; }
int State_of_alarms::get_critical_temp_alarm_silos_1() const { return critical_temp_alarm_silos_1; }
int State_of_alarms::get_critical_temp_alarm_silos_2() const { return critical_temp_alarm_silos_2; }

int State_of_alarms::get_hum_alarm_silos_1() const { return hum_alarm_silos_1; }
int State_of_alarms::get_hum_alarm_silos_2() const { return hum_alarm_silos_2; }
int State_of_alarms::get_critical_hum_alarm_silos_1() const { return critical_hum_alarm_silos_1; }
int State_of_alarms::get_critical_hum_alarm_silos_2() const { return critical_hum_alarm_silos_2; }

int State_of_alarms::get_fulfillment_alarm_silos_1() const { return fulfillment_alarm_silos_1; }
int State_of_alarms::get_fulfillment_alarm_silos_2() const { return fulfillment_alarm_silos_2; }
int State_of_alarms::get_critical_fulfillment_alarm_silos_1() const { return critical_fulfillment_alarm_silos_1; }
int State_of_alarms::get_critical_fulfillment_alarm_silos_2() const { return critical_fulfillment_alarm_silos_2; }


void State_of_alarms::set_temp_alarm_silos_1(int temp_alarm_silos_1) { this->temp_alarm_silos_1 = temp_alarm_silos_1; }
void State_of_alarms::set_temp_alarm_silos_2(int temp_alarm_silos_2) { this->temp_alarm_silos_2 = temp_alarm_silos_2; }
void State_of_alarms::set_critical_temp_alarm_silos_1(int critical_temp_alarm_silos_1) { this->critical_temp_alarm_silos_1 = critical_temp_alarm_silos_1; }
void State_of_alarms::set_critical_temp_alarm_silos_2(int critical_temp_alarm_silos_2) { this->critical_temp_alarm_silos_2 = critical_temp_alarm_silos_2; }

void State_of_alarms::set_hum_alarm_silos_1(int hum_alarm_silos_1) { this->hum_alarm_silos_1 = hum_alarm_silos_1; }
void State_of_alarms::set_hum_alarm_silos_2(int hum_alarm_silos_2) { this->hum_alarm_silos_2 = hum_alarm_silos_2; }
void State_of_alarms::set_critical_hum_alarm_silos_1(int critical_hum_alarm_silos_1) { this->critical_hum_alarm_silos_1 = critical_hum_alarm_silos_1; }
void State_of_alarms::set_critical_hum_alarm_silos_2(int critical_hum_alarm_silos_2) { this->critical_hum_alarm_silos_2 = critical_hum_alarm_silos_2; }

void State_of_alarms::set_fulfillment_alarm_silos_1(int fulfillment_alarm_silos_1) { this->fulfillment_alarm_silos_1 = fulfillment_alarm_silos_1; }
void State_of_alarms::set_fulfillment_alarm_silos_2(int fulfillment_alarm_silos_2) { this->fulfillment_alarm_silos_2 = fulfillment_alarm_silos_2; }
void State_of_alarms::set_critical_fulfillment_alarm_silos_1(int critical_fulfillment_alarm_silos_1) { this->critical_fulfillment_alarm_silos_1 = critical_fulfillment_alarm_silos_1; }
void State_of_alarms::set_critical_fulfillment_alarm_silos_2(int critical_fulfillment_alarm_silos_2) { this->critical_fulfillment_alarm_silos_2 = critical_fulfillment_alarm_silos_2; }

State_of_alarms::~State_of_alarms(){;};