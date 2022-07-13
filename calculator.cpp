#include "calculator.h"

Calculator::Calculator(QWidget *parent)
    : QWidget(parent)
{
    connect(buttonGroup,SIGNAL(idClicked(int)),this,SLOT(inputVal(int)));

    label->setText("0");

    button0->setText("0");
    button1->setText("1");
    button2->setText("2");
    button3->setText("3");
    button4->setText("4");
    button5->setText("5");
    button6->setText("6");
    button7->setText("7");
    button8->setText("8");
    button9->setText("9");
    buttonAdd->setText("+");
    buttonMinus->setText("-");
    buttonDiv->setText("/");
    buttonMul->setText("*");
    buttonMod->setText("MOD");
    buttonDot->setText(".");
    buttonEquS->setText("=");
    buttonDelete->setText("C");

    buttonGroup->addButton(button0,0);
    buttonGroup->addButton(button1,1);
    buttonGroup->addButton(button2,2);
    buttonGroup->addButton(button3,3);
    buttonGroup->addButton(button4,4);
    buttonGroup->addButton(button5,5);
    buttonGroup->addButton(button6,6);
    buttonGroup->addButton(button7,7);
    buttonGroup->addButton(button8,8);
    buttonGroup->addButton(button9,9);
    buttonGroup->addButton(buttonAdd,10);
    buttonGroup->addButton(buttonMinus,11);
    buttonGroup->addButton(buttonDiv,12);
    buttonGroup->addButton(buttonMul,13);
    buttonGroup->addButton(buttonMod,14);
    buttonGroup->addButton(buttonDot,15);
    buttonGroup->addButton(buttonEquS,16);
    buttonGroup->addButton(buttonDelete,17);

    buttonAdd->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    buttonEquS->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    hLayout->addWidget(label);

    gridLayout->addWidget(buttonMod,0,0);
    gridLayout->addWidget(buttonDiv,0,1);
    gridLayout->addWidget(buttonMul,0,2);
    gridLayout->addWidget(buttonDelete,0,3);
    gridLayout->addWidget(buttonMinus,1,3);
    gridLayout->addWidget(button7,1,0);
    gridLayout->addWidget(button8,1,1);
    gridLayout->addWidget(button9,1,2);
    gridLayout->addWidget(buttonAdd,2,3);
    gridLayout->addWidget(button4,2,0);
    gridLayout->addWidget(button5,2,1);
    gridLayout->addWidget(button6,2,2);
    gridLayout->addWidget(button1,3,0);
    gridLayout->addWidget(button2,3,1);
    gridLayout->addWidget(button3,3,2);
    gridLayout->addWidget(buttonEquS,3,3,2,1);
    gridLayout->addWidget(button0,4,0,1,2);
    gridLayout->addWidget(buttonDot,4,2);

    vLayout->addLayout(hLayout);
    vLayout->addLayout(gridLayout);

}

void Calculator::inputVal(int id)
{
    if(id == 17)
    {
        expression.clear();
        label->setText("");

        return;
    }

    if(id > 9)
    {
        if(!expression.size())
            return;
        else if(expression[expression.size()-1] > '9' || expression[expression.size()-1] < '0')
            return;
    }

    switch (id) {

    case 0:
        if(expression.size() == 1 && expression[0] == '0')
            break;

        expression.push_back("0");
        expression1.clear();
        for(size_t i = 0 ; i < expression.size() ; i++)
        {
            expression1.push_back(expression[i]);
        }
        label->setText(expression1);
        break;

    case 1:
        expression.push_back("1");
        expression1.clear();
        for(size_t i = 0 ; i < expression.size() ; i++)
        {
            expression1.push_back(expression[i]);
        }
        label->setText(expression1);
        break;

    case 2:
        expression.push_back("2");
        expression1.clear();
        for(size_t i = 0 ; i < expression.size() ; i++)
        {
            expression1.push_back(expression[i]);
        }
        label->setText(expression1);
        break;

    case 3:        
        expression.push_back("3");
        expression1.clear();
        for(size_t i = 0 ; i < expression.size() ; i++)
        {
            expression1.push_back(expression[i]);
        }
        label->setText(expression1);
        break;

    case 4:
        expression.push_back("4");
        expression1.clear();
        for(size_t i = 0 ; i < expression.size() ; i++)
        {
            expression1.push_back(expression[i]);
        }
        label->setText(expression1);
        break;

    case 5:        
        expression.push_back("5");
        expression1.clear();
        for(size_t i = 0 ; i < expression.size() ; i++)
        {
            expression1.push_back(expression[i]);
        }
        label->setText(expression1);
        break;

    case 6:
        expression.push_back("6");
        expression1.clear();
        for(size_t i = 0 ; i < expression.size() ; i++)
        {
            expression1.push_back(expression[i]);
        }
        label->setText(expression1);
        break;

    case 7:
        expression.push_back("7");
        expression1.clear();
        for(size_t i = 0 ; i < expression.size() ; i++)
        {
            expression1.push_back(expression[i]);
        }
        label->setText(expression1);
        break;

    case 8:
        expression.push_back("8");
        expression1.clear();
        for(size_t i = 0 ; i < expression.size() ; i++)
        {
            expression1.push_back(expression[i]);
        }
        label->setText(expression1);
        break;

    case 9:
        expression.push_back("9");
        expression1.clear();
        for(size_t i = 0 ; i < expression.size() ; i++)
        {
            expression1.push_back(expression[i]);
        }
        label->setText(expression1);
        break;

    case 10:
        expression.push_back("+");
        expression1.clear();
        for(size_t i = 0 ; i < expression.size() ; i++)
        {
            expression1.push_back(expression[i]);
        }
        label->setText(expression1);
        break;

    case 11:
        expression.push_back("-");
        expression1.clear();
        for(size_t i = 0 ; i < expression.size() ; i++)
        {
            expression1.push_back(expression[i]);
        }
        label->setText(expression1);
        break;

    case 12:
        expression.push_back("/");
        expression1.clear();
        for(size_t i = 0 ; i < expression.size() ; i++)
        {
            expression1.push_back(expression[i]);
        }
        label->setText(expression1);
        break;

    case 13:
        expression.push_back("*");
        expression1.clear();
        for(size_t i = 0 ; i < expression.size() ; i++)
        {
            expression1.push_back(expression[i]);
        }
        label->setText(expression1);
        break;

    case 14:
        expression.push_back("MOD");
        expression1.clear();
        for(size_t i = 0 ; i < expression.size() ; i++)
        {
            expression1.push_back(expression[i]);
        }
        label->setText(expression1);
        break;

    case 15:
        expression.push_back(".");
        expression1.clear();
        for(size_t i = 0 ; i < expression.size() ; i++)
        {
            expression1.push_back(expression[i]);
        }
        label->setText(expression1);
        break;

    case 16:
        std::vector<QString> val = getValue(expression);
        label->setText(val[0]);
        break;
    }
}

std::vector<QString> Calculator::getValue(std::vector<QString>& str1)
{
    int valMod = 0;
    double valAll = 0;

    std::vector<QString> str;
    QString number;

    for(size_t i = 0 ; i < str1.size(); i++)
    {
        if(!(str1[i] == "MOD" || str1[i] == "+" || str1[i] == "-" || str1[i] == "*" || str1[i] == "/"))
        {
            number.push_back(str1[i]);
        }
        else
        {
            str.push_back(number);
            str.push_back(str1[i]);
            number.clear();
        }
    }
    str.push_back(number);
    number.clear();

    for(auto i = str.begin() ; i !=str.end() ; i++)
    {
        if(*i == "MOD")
        {
            valMod = (*(i-1)).toInt()%(*(i+1)).toInt();

            i = str.erase(i-1,i+2);
            str.insert(i,QString::number(valMod));
        }
    }
    for(auto i = str.begin() ; i != str.end() ; i++)
    {
        if(*i == "*")
        {
            valAll = ((*(i-1)).toDouble()) * ((*(i+1)).toDouble());

            i=str.erase(i-1,i+2);
            str.insert(i,QString::number(valAll));
        }   
        if(*i == "/")
        {
            valAll = ((*(i-1)).toDouble())/((*(i+1)).toDouble());
            i=str.erase(i-1,i+2);
            str.insert(i,QString::number(valAll));
        }
    }
    for(auto i = str.begin() ; i !=str.end() ; i++)
    {
        if(*i == "+")
        {
            valAll = (*(i-1)).toDouble()+(*(i+1)).toDouble();
            i = str.erase(i-1,i+2);
            str.insert(i,QString::number(valAll));
        }

        if(*i == "-")
        {
            valAll = (*(i-1)).toDouble()-(*(i+1)).toDouble();
            i = str.erase(i-1,i+2);
            str.insert(i,QString::number(valAll));
        }
    }
    return str;
}
Calculator::~Calculator()
{
    delete label ;
    delete button0;
    delete button1;
    delete button2;
    delete button3;
    delete button4;
    delete button5;
    delete button6;
    delete button7;
    delete button8;
    delete button9;
    delete buttonAdd;
    delete buttonMinus;
    delete buttonDiv;
    delete buttonMul;
    delete buttonMod;
    delete buttonDot;
    delete buttonEquS;
    delete buttonDelete;
    delete buttonGroup;
    delete gridLayout;
    delete vLayout;
    delete hLayout;
}

