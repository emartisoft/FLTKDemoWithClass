/*
Coder   : emarti Murat Özdemir
Date    : Jan 21,2017
Comment : Using static methods for callbacks in FLTK & C++ Works
*/

#include "mainwindow.h"

int main()
{
    MainWindow *demoWindow = new MainWindow();
    demoWindow->end();
    demoWindow->show();
    return Fl::run();
}
