#include <iostream>
#include <fstream>
#include<stdlib.h>
#include "product_vars.h"
#include "cart.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

namespace product {
    int c;
    int t;
    int c2;

}
using product::c2;
using product::c;
using product::t;
void product::product_main(string username) {
    int t = 1;
    while(t) {
        cout << "\n\t\t PRODUCT MAIN \n";
        cout << "------------------------------------------------\n";
        cout << "\t1. Electronics \n";
        cout << "\t2. Clothes \n";
        cout << "\t3. Toys \n";
        cout << "\t4. Appliances \n";
        cout << "\t5. Books \n";
        cout << "\t0. Back \n";
        cout << "\t9. Exit \n";
        cout << "\n\t\t >> ";
        int c;
        cin >> c;

        if(c == 9) {
            cout << "\n#######   Thanks for Choosing Us!!!  ####### \n";
            exit(0);
        }else if(c == 0) {
            t = 0;
        }else if(c > 0 && c < 6) {
            product::displayProduct(c,username);
        }else {
            cout << " \t >>> INVALID ENTRY.. Try Again <<< \n";




        }
    }
}



void product::displayProduct(int c,string username) {
    switch(c) {
        case 1:
            product::displayElectric(username);
            break;
        case 2:
            product::displayClothes(username);
            break;
        case 3:
            product::displayToys(username);
            break;
        case 4:
            product::displayAppliances(username);
            break;
        case 5:
            product::displayBooks(username);
            break;
        default:
            cout << "ERROR (0x61ABF71)" << endl;

    }
}

using namespace product;

void product::displayElectric(string username) {
    Electronic p[5];

    //Enter Data
    p[0] = Electronic("Asus ROG GX700VO-GB012T",384000,"intel core i7 6820 HK",64,1024,"4K");
    p[1] = Electronic("MSI GT83VR",337990,"intel core i7 6820 HK",32,1024,"4K");
    p[2] = Electronic("Dell XPS 13",129990,"intel core i7 5500U",8,256,"1080p");
    p[3] = Electronic("Razor Blade",179485,"intel core i7 6700HQ",16,1024,"4K");
    p[4] = Electronic("Main Gear NOMAD 17",189000,"intel i7 6820 HK",32,1024,"1080p G-Sync");

    int i;
    for(i=0;i<5;i++) {
        p[i].display();
    }

    cout << "1. Enter Product ID to BUY: (0 to go Back)";

    int c;
    cin >> c;

    if(c != 0 && c<6) {
        c--;
        string name = p[c].getName();
        double price = p[c].getPrice();
        cart c(name,price);
        c.addToCart(username,c);
    }


}


void product::displayClothes(string uname) {
    Clothes c[5];

    c[0]= Clothes("Addidas","T-Shirt","L,XL,XXL",699);
    c[1]= Clothes("Denim","Joggers","L,XL,XXL",1499);
    c[2]= Clothes("Reebok","Hoddie","L,XL,XXL",3500);
    c[3]= Clothes("Levis","Jeans","L,XL,XXL",5999);
    c[4]= Clothes("Arrow","Shirts","L,XL,XXL",4999);

    int i;
    for(i=0;i<5;i++) {
        c[i].display();
    }
    cout << "1. Enter Product ID to BUY: (0 to go Back)";

    int ch;
    cin >> ch;

    if(ch != 0 && ch<6) {
        ch--;
        string name = c[ch].getName();
        double price = c[ch].getPrice();
        cart ca(name,price);
        ca.addToCart(uname,ca);
    }
}

void product::displayToys(string uname) {
    Toys t[5];

    t[0]= Toys("G-I Joe","Funskool",399);
    t[1]= Toys("Batman Action Figure","Funskool",1499);
    t[2]= Toys("Hotwheels","Funskool",500);
    t[3]= Toys("Transformer Action Figure","Funskool",999);
    t[4]= Toys("Action Man","Funskool",1499);

     int i;
    for(i=0;i<5;i++) {
        t[i].display();
    }

     cout << "1. Enter Product ID to BUY: (0 to go Back)";

    int c;
    cin >> c;

    if(c != 0 && c<6) {
        c--;
        string name = t[c].getName();
        double price = t[c].getPrice();
        cart c(name,price);
        c.addToCart(uname,c);
    }
}

void product::displayAppliances(string uname) {
    Appliances a[5];

    a[0]= Appliances("Fridge","LG",56999);
    a[1]= Appliances("Washing Machine","LG",21499);
    a[2]= Appliances("TV 42 inch UHD","LG",63500);
    a[3]= Appliances("AC","LG",45999);
    a[4]= Appliances("Home Theater","LG",24999);

    int i;
    for(i=0;i<5;i++) {
        a[i].display();
    }

    cout << "1. Enter Product ID to BUY: (0 to go Back)";

    int c;
    cin >> c;

    if(c != 0 && c<6) {
        c--;
        string name = a[c].getName();
        double price = a[c].getPrice();
        cart c(name,price);
        c.addToCart(uname,c);
    }
}

void product::displayBooks(string uname) {
    Books b[5];

    b[0]= Books("Let it Snow","John Green",699);
    b[1]= Books("Me Before You","Jojo Moyes",499);
    b[2]= Books("The Notebook","Nicolas Spark",500);
    b[3]= Books("Fault In our Stars","John Green",499);
    b[4]= Books("Paper Towns","John Green",299);

     int i;
    for(i=0;i<5;i++) {
        b[i].display();
    }

     cout << "1. Enter Product ID to BUY: (0 to go Back)";

    int c;
    cin >> c;

    if(c != 0 && c<6) {
        c--;
        string name = b[c].getName();
        double price = b[c].getPrice();
        cart c(name,price);
        c.addToCart(uname,c);
    }
}


