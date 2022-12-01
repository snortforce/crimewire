#include "crimewavemain.h"
#include "./ui_crimewavemain.h"

crimewaveMain::crimewaveMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::crimewaveMain)
{
    ui->setupUi(this);
}

crimewaveMain::~crimewaveMain()
{
    delete ui;
}

