#pragma once
#include <QWidget>
#include <QPainter>
#include "ui_Main_window.h"

/**
 * @brief Class representing the main window
 * 
 */


class Main_window : public QWidget, public Ui::Main_window{
    Q_OBJECT

    public:
        /**
         * @brief Construct a new Main_window object
         * 
         * @param parent parent widget
         */
        explicit Main_window(QWidget *parent = nullptr);
        ~Main_window();

};