#ifndef VARIETY_EXTRACT_H
#define VARIETY_EXTRACT_H
#include <QIcon>
#include <QWidget>

namespace Ui {
class variety_extract;
}

class variety_extract : public QWidget
{
    Q_OBJECT

public:
    explicit variety_extract(QWidget *parent = nullptr);
    ~variety_extract();

private:
    Ui::variety_extract *ui;
};

#endif // VARIETY_EXTRACT_H
