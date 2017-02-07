#include <iostream>
#include <fstream>
#include <iomanip>
#include "payment_vars.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;


void payment::payNow(string uname, double price) {
    char s[1000];
    cout  << "Enter Card Holder Name: ";
    cin.getline(s,1000);
    cout  << "Enter Card Number: ";
    cin.getline(s,1000);
    cout << "Name: ";
    cin.getline(s,1000);
    cout << "EXP Date (MM/YY): ";
    cin.getline(s,1000);
    cout << "CVV: ";
    cin.getline(s,1000);

    cout << "\n Processing...\n";
    cout << "\n PAYMENT SUCCESS FULL \n\nORDER PLACED \n";
}

void payment::payment_main(string uname) {
    std::ifstream f;
    double price;
    double total_price = 0;
    string str;
    string name = uname+"_cart.dat";
    f.open((char*)&name,std::ios::in);
    if(!f) {
        cout << "ERROR: Can't Open the File";
        return;
    }

    while(getline(f,str,'\n') && !f.eof()) {

        f >> price;
        total_price += price;
        getline(f,str,'\n');
    }




    int t = 1,c;
    while(t) {
        cout.flags(std::ios::fixed);
        cout << "PAY RS: ";
        cout.precision(2);
        cout << total_price << endl;
        cout << "-------------------------\n";
        cout << "1. Pay Now \n0. Back";
        cin >> c;
        switch(c) {
            case 1:
                payment::payNow(uname,total_price);
                t = 0;
                break;
            case 0:
                t = 0;
                break;
            default:
                cout << "INVALID OPTION \n";
                break;
        }
    }


    f.close();
}
