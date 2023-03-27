#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <list>
#include <admin_neuronas.h>
#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <algorithm>
#include <vector>
#include <cmath>
#include <neurona.h>
#include <QLineF>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow{
    Q_OBJECT
    public:
        QGraphicsScene grafica;
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();
        bool id_repetido(int id);
        void ordenamiento_burbuja_mejorada(list<Neurona>& objetos);
        struct Point{
          int x, y;
        };
        double distance(Point p1, Point p2);
        Point bruteForce(Point p, vector<Point>& points);
    private slots:
        void on_pushButton_clicked();
        void on_pushButton_2_clicked();
        void on_pushButton_3_clicked();
        void on_pushButton_4_clicked();
        void on_pushButton_5_clicked();
        void on_tabWidget_tabBarClicked(int index);
        void on_pushButton_6_clicked();
        void on_pushButton_7_clicked();
        void on_pushButton_8_clicked();
        void on_pushButton_9_clicked();
        void on_pushButton_10_clicked();
        void on_pushButton_11_clicked();
    private:
        Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
