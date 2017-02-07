/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cart.h
 * Author: reezp
 *
 * Created on October 12, 2016, 12:05 PM
 */

#ifndef CART_H
#define CART_H

using std::string;

void cart_main(string);
class cart {
private:
    string p_name;
    double p_price;
public:
    cart();    
    cart(string n,double p);
    void displayCart(string);
    cart(const cart& orig);
    void display();
    virtual ~cart();
    static void addToCart(string username,cart &c);
    string getName() { return p_name; }
    double getPrice() { return p_price; }
};

#endif /* CART_H */

