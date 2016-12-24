#ifndef _DB_H_
#define _DB_H_

#include <iostream>
using namespace std;
#include "../AppClasses/Login/Login.h"

class DB
{
    static string m_dbUserName;
    static string m_dbPassword ;
    static bool m_DbConnected;

public:
    static int dbConnect();
    static void dbCloseConnection();
    static void initialize_DB_Connection(string, string);
    static int dbExecDML_Stmt(string);
    static int dbCheckLogin(Login,int&);
    static int dbExecDML_Stmt1(string);
};

#endif

