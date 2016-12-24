#ifndef _LOGIN_H_
#define _LOGIN_H_

#include <iostream>
#include<string.h>

using namespace std;

class Login
{
    string m_UserName;
    string m_Password;
    public:
    Login();
    Login(string, string);
    void setUserName(string);
    void setPassword(string);
    string getUserName(void);
    string getPassword(void);
};

#endif
