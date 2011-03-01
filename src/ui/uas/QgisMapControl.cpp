#include "QgisMapControl.h"
#include "ui_QgisMapControl.h"

QgisMapControl::QgisMapControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QgisMapControl)
{
    ui->setupUi(this);
}

QgisMapControl::~QgisMapControl()
{
    delete ui;
}
