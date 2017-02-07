#include <iostream>
#include <cstdlib>
#include <fstream>

#include "login_vars.h"
#include "product_vars.h"
#include "cart.h"
#include "payment_vars.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

namespace login {
    
    std::string username;
    std::string password;
}


void login::login_main() {
    int t = 1;
    while(t) {
        cout << "\n\t\t  LOGIN"<< endl;
        cout << "----------------------------------" << endl;
        cout << "\t >>Username: ";
        cin >> login::username;
        cout << "\t >>Password: ";
        cin >> login::password;

        if(login::verifyLogin(username,password)) {
            // Login Success
            login::login_success(username);
            t = 0;
        }else {
            //Login Failure
            cout << "   >>> Login Failed... Try again <<<\n";
        }
    } /* While Loop */
}

bool login::verifyLogin(const string username,string password) { /* Verifying Login */
    //TODO: Make Function to verify username and password
    //NOTE: DONOT modify the username
    
    cout << "INITIAL: " << username<< " " << password << endl; 
    std::string s,p;
    std::ifstream f;
    f.open("register.dat",std::ios_base::in);
    while(!f.eof() && getline(f,s,'\n') && s != "") {
        
        getline(f,p,'\n');
        
            cout<< "NAME: " << s << " " << p <<  endl;
        if(s == username && p == password) {
            return true;
        }
    }
    
    return false;
}

void login::login_success(string username) {
    int t=1;
    while(t) {
        cout << "\n\t\t Hi!! " << login::username << endl;
        cout << "---------------------------------------------"<<endl;
        cout << "\t 1. Browse Product \n";
        cout << "\t 2. View Cart \n";
        cout << "\t 3. Payment \n";
        cout << "\t 0. Logout \n";
        cout << "\t 9. Exit \n";
        cout << "\t\t >> ";
        int choice;
        cin >> choice;
        switch(choice) {
            case 1:
                product::product_main(username);
                break;
            case 2:
                cart_main(username);
                break;
            case 3:
                payment::payment_main(username);
                break;
            case 0:
                cout << "\nLogging Out.. \n\n";
                t=0;
                break;
            case 9:
                cout << "\n#######   Thanks for Choosing Us!!!  ####### \n";
                exit(EXIT_SUCCESS);
                break;
            default:
                cout << " \t >>> INVALID ENTRY.. Try Again <<< \n";
                break;
        }

    }
}

