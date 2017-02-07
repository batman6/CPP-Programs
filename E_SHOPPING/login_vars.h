/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   login_vars.h
 * Author: reezp
 *
 * Created on October 12, 2016, 2:04 AM
 */

#ifndef LOGIN_VARS_H
#define LOGIN_VARS_H


// Login Variables
namespace login {
    void login_main();
    bool verifyLogin(std::string,std::string);
    void login_success(std::string);
}

#endif /* LOGIN_VARS_H */

