#include <iostream>
#include <fstream>
#include <cstdlib>

#include "main_vars.h"
#include "login_vars.h"

using std::cout;
using std::endl;
using std::cin;
using std::ofstream;
using std::string;

ofstream fout;
string username,pass;
int main() {
    /* LOGIN / REGISTRATION SCREEN*/

    while(1) { /* while loop for Repeatedly Options */
        //Displaying Options
        cout << "\n\t\teShoppers"<<endl; //TODO: CHANGE APP NAME /* Replace with Application Name */
        cout << "-----------------------------------------------"<<endl;
        cout << "\t 1. Login" << endl;
        cout << "\t 2. Register" << endl;
        cout << "\t 0. Exit" << endl;
        cout << "\t\t >> ";

        //Execution of each options
        cin >> main_screen::choice;
        switch(main_screen::choice) {
            case 1:
                login::login_main();
                break;
            case 2:
                cout <<"Welcome to eShopping"<<endl;
                fout.open("register.dat",std::ios::app);
                cout<<"Enter Your Username: ";
                cin>>username;
                cout<<"Enter Your Password: ";
                cin>>pass;
                fout<<username<<"\n"<<pass<<endl;
                fout.close();
                break;
            case 0:
                cout << "\n#######   Thanks for Choosing Us!!!  ####### \n";
                exit(EXIT_SUCCESS);
                break;
            default:
                cout << " \t >>> INVALID ENTRY.. Try Again <<< \n";
                break;
        }
    } /*  While loop  */
    return 0;
} /* main function */
