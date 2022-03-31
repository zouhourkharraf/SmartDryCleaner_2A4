#ifndef INTERFACE_AUTHENTIFICATION_H
#define INTERFACE_AUTHENTIFICATION_H

#include <QWidget>

namespace Ui {
class Interface_authentification;
}

class Interface_authentification : public QWidget
{
    Q_OBJECT

public:
    explicit Interface_authentification(QWidget *parent = nullptr);
    ~Interface_authentification();

private:
    Ui::Interface_authentification *ui;
};

#endif // INTERFACE_AUTHENTIFICATION_H
