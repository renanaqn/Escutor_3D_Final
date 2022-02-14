#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void Sair();
    void execTipo(bool);
signals:
    void txtTipo(QString);
private:
    Ui::MainWindow *ui;
    QString ultimaforma;
};

#endif // MAINWINDOW_H
