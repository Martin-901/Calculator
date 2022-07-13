#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QLabel>
#include <QString>
#include <QButtonGroup>
#include <vector>

class Calculator : public QWidget
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    QLabel* label = new QLabel(this);

    QPushButton* button0 = new QPushButton(this);
    QPushButton* button1 = new QPushButton(this);
    QPushButton* button2 = new QPushButton(this);
    QPushButton* button3 = new QPushButton(this);
    QPushButton* button4 = new QPushButton(this);
    QPushButton* button5 = new QPushButton(this);
    QPushButton* button6 = new QPushButton(this);
    QPushButton* button7 = new QPushButton(this);
    QPushButton* button8 = new QPushButton(this);
    QPushButton* button9 = new QPushButton(this);
    QPushButton* buttonAdd = new QPushButton(this);
    QPushButton* buttonMinus = new QPushButton(this);
    QPushButton* buttonDiv = new QPushButton(this);
    QPushButton* buttonMul = new QPushButton(this);
    QPushButton* buttonMod = new QPushButton(this);
    QPushButton* buttonDot = new QPushButton(this);
    QPushButton* buttonEquS = new QPushButton(this);
    QPushButton* buttonDelete = new QPushButton(this);

    QButtonGroup* buttonGroup = new QButtonGroup(this);

    QGridLayout* gridLayout = new QGridLayout;
    QVBoxLayout* vLayout = new QVBoxLayout(this);
    QHBoxLayout* hLayout = new QHBoxLayout;

private:
    QString expression1;
    std::vector<QString> expression;

public:
    std::vector<QString> getValue(std::vector<QString>&);

private slots:
    void inputVal(int);

};
#endif // CALCULATOR_H
