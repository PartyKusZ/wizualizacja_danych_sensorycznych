#pragma once

#include <QObject>
#include <QString>
#include <array>
#include "ui_Main_window.h"

/**
 * @brief 
 * 
 */
class All_param_backend: public QObject{

    Q_OBJECT

    private:
    const std::array<int,5> &silos_1; //!< store data for silo 1
    const std::array<int,5> &silos_2; //!< store data for silo 2
    Ui::Main_window &ui;

    public:

        All_param_backend(std::array<int,5> &_silos_1, std::array<int,5> &_silos_2,Ui::Main_window &_ui);
        ~All_param_backend();
        

    public slots:

    void set_all_param();
    void set_all_param_fullfilmnet_text();


};

