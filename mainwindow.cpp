/*
Coder   : emarti Murat Özdemir
Date    : Jan 21,2018
Comment : Using static methods for callbacks in FLTK & C++ Works
*/

#include "mainwindow.h"

MainWindow::MainWindow() : Fl_Window(10,10,640,480,"FLTK Demo with class")
{
    InitializeComponents();
}

MainWindow::~MainWindow()
{
}

void MainWindow::InitializeComponents()
{
    bt = new Fl_Button(10,10,180,25,"Change Window Title");
    bt->callback(st_buttonevent, this);
}

void MainWindow::st_buttonevent(Fl_Widget *w,void *data)
{
    ((MainWindow*)data)->buttonevent(w);
}

inline void MainWindow::buttonevent(Fl_Widget *w)
{
    this->label("Window title is changed!");
}
