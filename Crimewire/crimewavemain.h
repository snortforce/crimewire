#ifndef CRIMEWAVEMAIN_H
#define CRIMEWAVEMAIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class crimewaveMain; }
QT_END_NAMESPACE

class crimewaveMain : public QMainWindow
{
    Q_OBJECT

public:
    crimewaveMain(QWidget *parent = nullptr);
    ~crimewaveMain();

private:
    Ui::crimewaveMain *ui;
};
#endif // CRIMEWAVEMAIN_H
