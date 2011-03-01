#ifndef QGISMAPCONTROL_H
#define QGISMAPCONTROL_H

#include <QWidget>

namespace Ui {
    class QgisMapControl;
}

class QgisMapControl : public QWidget
{
    Q_OBJECT

public:
    explicit QgisMapControl(QWidget *parent = 0);
    ~QgisMapControl();

private:
    Ui::QgisMapControl *ui;
};

#endif // QGISMAPCONTROL_H
