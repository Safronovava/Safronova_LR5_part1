#ifndef SAFRONOVA_MATHTASK_H
#define SAFRONOVA_MATHTASK_H
#include <string> 
#include <iostream>
using namespace std;
//функция контроля вводимых данных
bool UserInput(string input) {
//если строка пустая - ввод некорректен
if (input.empty()) return false;
//попытаться
try {
//преобразование введенного значения в тип
int number = stoi(input) ;
if (input.length() != to_string(number).length() || number < 0) {
    return false;
}
}
catch (...) //если возникла ошибка в блоке try
{ return false; } return true;
}

void EnterDigit(int& varLink, const string& label) {
    string raw_input;
    cout << label << " = ";
    getline(cin, raw_input);
    while (!UserInput(raw_input)) {
        cout << label << " = ";
        getline(cin, raw_input);
    }
    varLink = stoi(raw_input);

}

int CalcRectangleArea(int NumberA, int NumberB) {
    return NumberA * NumberB;

}

#endif