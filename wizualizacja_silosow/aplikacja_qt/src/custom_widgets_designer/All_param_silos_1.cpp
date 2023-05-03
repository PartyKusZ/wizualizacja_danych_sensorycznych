#include "All_param_silos_1.hpp"

/**
* @brief Construct a new All_param_silos_1 object
* 
* @param parent parent widget
 */

All_param_silos_1::All_param_silos_1(QWidget *parent): QWidget(parent), All_param_draw() {
    
};



/**
 * @brief Drawing a silo
 * 
 * @param event 
 */

void All_param_silos_1::paintEvent(QPaintEvent *event){
    // QStyleOption opt;
    // opt.init(this);
    // QPainter p(this);
    // style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);


    QPainter painter(this);
    this->draw_outline(painter,this->size());
    this->draw_fulfilment(painter,this->size());
    this->draw_lines(painter,this->size());
    this->draw_temp_hum(painter);
 }

/**
 * @brief Slot for refresing data on na silos
 * 
 * @param _temp_1 
 * @param _temp_2 
 * @param _hum_1 
 * @param _hum_2 
 * @param _fulfilment 
 */

void All_param_silos_1::data_refresh(double _fulfilment,double _temp_1, double _temp_2, double _hum_1, double _hum_2){

    this->set_values(_fulfilment,QString::number(_temp_1  ),QString::number(_temp_2 ),QString::number(_hum_1 ),QString::number(_hum_2 ));
    this->update();

}




/**
 * @brief Destroy the All_param_silos_1::All_param_silos_1 object
 * 
 */
All_param_silos_1::~All_param_silos_1(){};
 