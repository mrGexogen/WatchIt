#include "helpwindow.h"
#include "ui_helpwindow.h"

HelpWindow::HelpWindow(QWidget *parent): QDialog(parent), ui(new Ui::Dialog) {
    ui->setupUi(this);
}

HelpWindow::~HelpWindow() {
    delete ui;
}
