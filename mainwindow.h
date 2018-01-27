/*
Coder   : emarti Murat Özdemir
Date    : Jan 21,2018
Comment : Using static methods for callbacks in FLTK & C++ Works
*/

#ifndef MAINWINDOW_H_INCLUDED
#define MAINWINDOW_H_INCLUDED

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>

class MainWindow : public Fl_Window
{
public:
    MainWindow();
    ~MainWindow();
private:
    void InitializeComponents();
    Fl_Button *bt;
    // button event
    static void st_buttonevent(Fl_Widget *w,void *data);
    inline void buttonevent(Fl_Widget *w);
};

#endif // MAINWINDOW_H_INCLUDED
