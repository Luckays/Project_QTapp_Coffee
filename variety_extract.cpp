#include "variety_extract.h"
#include "ui_variety_extract.h"

variety_extract::variety_extract(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::variety_extract)
{
    ui->setupUi(this);
    setWindowTitle("Výpis Odrůdy");
    setWindowIcon(QIcon(":/img/mainIcon"));
}

variety_extract::~variety_extract()
{
    delete ui;
}
