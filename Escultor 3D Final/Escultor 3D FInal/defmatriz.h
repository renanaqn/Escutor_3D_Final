#ifndef DEFMATRIZ_H
#define DEFMATRIZ_H

#include <QDialog>

namespace Ui {
class DefMatriz;
}

class DefMatriz : public QDialog{

public:
    explicit DefMatriz(QWidget *parent = nullptr);
    ~DefMatriz();
    int get_x();
    int get_y();
    int get_z();

private:
    Ui::DefMatriz *ui;
};

#endif // DEFMATRIZ_H
