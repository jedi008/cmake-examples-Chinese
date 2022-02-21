#include <iostream>
#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QDebug>
#include <thread>
#include <QTime>

#undef slots
#include<torch/script.h>
#include<torch/torch.h>
#include<torch/csrc/api/include/torch/utils.h>
#define slots Q_SLOTS


using namespace std;

int main(int argc, char *argv[])
{
   cout << "Hello Qt-CMake!" << endl;

   QApplication a(argc, argv);

   MainWindow mainWin;
   mainWin.show();


	torch::Tensor tensor = torch::rand({3,3});
    cout << tensor << endl;

   return a.exec();
}
