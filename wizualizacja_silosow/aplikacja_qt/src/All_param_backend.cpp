#include "All_param_backend.hpp"


All_param_backend::All_param_backend(std::array<int,5> &_silos_1, std::array<int,5> &_silos_2, Ui::Main_window &_ui): QObject(), silos_1(_silos_1), silos_2(_silos_2), ui(_ui){

}

/**
 * @brief Stot for update all parameters on  silos in All param tab
 * 
 */

void All_param_backend::set_all_param(){
    this->ui.all_param_silos_1->data_refresh(silos_1[0],silos_1[1],silos_1[2],silos_1[3],silos_1[4]);
    this->ui.all_param_silos_2->data_refresh(silos_2[0],silos_2[1],silos_2[2],silos_2[3],silos_2[4]);
}




/**
 * @brief Slot for update text information about fullfilment of  silos in  All param tab
 * 
 */

void All_param_backend::set_all_param_fullfilmnet_text(){
    this->ui.volume_info_al_1->setText(QString::number(silos_1[0]) + " %");
    this->ui.volume_info_al_2->setText(QString::number(silos_2[0]) + " %");
 }


/**
 * @brief Destroy the All_param_backend::All_param_backend object
 * 
 */

All_param_backend::~All_param_backend(){}