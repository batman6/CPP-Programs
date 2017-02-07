#include <iostream>
#include <fstream>
#include "cart.h"

using std::cout;
using std::endl;
cart::cart() {
}
cart::cart(string n,double p) {

    this->p_name = n;
    this->p_price = p;
}

cart::cart(const cart& orig) {
}

void cart::display() {
    cout << "Name: " << p_name << endl;
    cout << "Price: " << p_price << endl;
}

cart::~cart() {
}

void cart::displayCart(string username) {
    std::ifstream f;
    double price;
    string str;

    string fnam = username+"_cart.dat";
    f.open((char*)&fnam,std::ios::in);
    if(!f) {
        cout << "ERROR: Can't Open the File 2";
        return;
    }

    while(getline(f,str,'\n') && !f.eof()) {
        cout << "Name: " << str << endl;
        f >> price;
        cout << price << endl;
        getline(f,str,'\n');
    }



    f.close();

}

void cart_main(string uname) {
    cout << "CART: \n";
    cart c;
    c.displayCart(uname);
}

void cart::addToCart(string username,cart &c) {
    //Add the Product to Cart
    std::ofstream f;
    string fnam = username+"_cart.dat";
    f.open((char*)&fnam,std::ios::app);
    if(!f) {
        f.open((char*)&fnam,std::ios::out);
        if(!f) {
            cout << "ERROR: Can't Open the File";
            return;
        }
    }
    cout<<"Product Added";
    int size;
    size = sizeof(c);
    f << c.getName() << endl;
    f << c.getPrice() << endl;

    std::cout << "\n\n FILE CONTENT \n -- > ";

    f.close();
    c.displayCart(username);

}
