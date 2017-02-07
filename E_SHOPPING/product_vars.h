

#ifndef PRODUCT_VARS_H
#define PRODUCT_VARS_H

using std::string;
using std::cout;
using std::cin;

namespace product {
    void product_main(string);
    void displayProduct(int,string);
    class Product;
    void displayElectric(string);
    void displayClothes(string);
    void displayToys(string);
    void displayAppliances(string);
    void displayBooks(string);
}

class product::Product {
protected:
    float price;
    public:
        Product(){
        }
        Product(int p){
            price=p;
        }
        int get_price() {
            return price;
        }
        void set_price(int p) {
            price = p;
        }
};

class Electronic: private product::Product {
    string name,processor,disp;
    int ram,storage;
public:
    Electronic(){
    }
    Electronic(string n,int price,string p,int r, int s, string d) : Product(price)
    {
        name = n;
        processor=p;
        ram=r;
        storage=s;
        disp=d;
    }

     void display() {
        cout <<name;
        cout << " ";
        cout <<processor;
        cout <<ram;
        cout <<"GB, ";
        cout <<storage;
        cout <<"GB, ";
        cout <<disp;

    }
     
     //ADDED
     string getName() {
         return name;
     }
     
     double getPrice() {
         return price;
     }
};

class Clothes: private product::Product {
    string type,company,sizes;
public:
    Clothes(){
    }
    Clothes(string c,string t,string s,int price) : Product(price)
    {
        type=t;
        company=c;
        sizes=s;
    }

    void display() {
        cout<<company;
        cout<<type;
        cout<<sizes;
    }
    
    //ADDED
     string getName() {
         return company;
     }
     
     double getPrice() {
         return price;
     }
};

class Appliances: private product::Product {
    string name,company;
public:
    Appliances(){
    }
    Appliances(string n,string c,int price) : Product (price)
    {
        name=n;
        company=c;
    }

    void display()
    {
        cout<<name<<" "<<company;
    }
    
    //ADDED
     string getName() {
         return name;
     }
     
     double getPrice() {
         return price;
     }
};

class Toys: private product::Product {
    string company,name;
public:
    Toys(){
    }
    Toys(string n,string c,int price) : Product (price){
        company=c;
        name=n;
    }

    void display(){
        cout<<name;
        cout<<company;
    }
    
    //ADDED
     string getName() {
         return name;
     }
     
     double getPrice() {
         return price;
     }
};

class Books: private product::Product {
    string name,author;
public:
    Books(){
    }
    Books(string n,string a,int price) : Product (price){
        name=n;
        author=a;
    }
    display(){
    cout<<name<<" by "<<author;
    }
    
    //ADDED
     string getName() {
         return name;
     }
     
     double getPrice() {
         return price;
     }
};


#endif /* PRODUCT_VARS_H */

