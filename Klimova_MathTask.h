#ifndef _KLIMOVA_MATHTASK_H_
#define _KLIMOVA_MATHTASK_H_


#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <numeric>
#include <limits>
#include <cmath>
#include <ctime>
using namespace std;


bool UserInput (const string& input)
{
    if (input.empty()){
        return false;
    }

    try {
        int number = stoi(input);
    }
    catch (...) 
    {return false;}

    return true;
}

void EnterDigit(int& varLink, const string& label) {
    string raw_input;

    cout << label << " = ";
    getline(cin, raw_input);

    while (!UserInput(raw_input) || stoi(raw_input) < 1) {
        cout << "Некорректный ввод. Повторите.\n";
        cout << label << " = ";
        getline(cin, raw_input);
    }

    varLink = stoi(raw_input);
}

int Area(int length, int width){
    return length * width; 
}


#endif