#ifndef _DB_H_
#define _DB_H_

#include <iostream>
#include<vector.h>
//#include "../AppClasses/Customer/Customer.h"
#include "../AppClasses/Account/Account.h"
#include "../AppClasses/Login/Login.h"
#include "../AppClasses/Customer/Customer.h"
#include "../AppClasses/Transaction/Transaction.h"
#include "../GlobalDefs/ErrorLog.h"
using namespace std;
class DB
{
    static string m_dbUserName;
    static string m_dbPassword ;
    static bool m_DbConnected;

public:
	ErrorLog Log;
    static int deleteAccountInDb(string);
    static int dbConnect();
    static void dbCloseConnection();
    static void initialize_DB_Connection(string&, string&);
    static int insertCustomer(Customer);
    static int dbExecDML_Stmt(string);
    static int dbCheckLogin(Login,int&);
    //static int viewCustomer(Customer&, Account&);
    static int viewCustomer(Customer& , vector<Account> &acc_list);
    static int viewCustomer(Customer& ,Account&);
    static int deleteCustomer(Customer);
    static int openAccountInDb(Account& acc_obj,char,char);
    static int withdraw(Transaction &); 
    static int checkBalance(string , float&); 
    static int updateBalance(string,float); 
    static int checkStatus(string,string&);
    static int updateTransactionTable(Transaction);
    static int updateCustomerMobileNumber(string&,string&);
    static int updateCustomerAddress(string& ,string&);
    static int updateCustomerPincode(string& ,string&);
    static int checkAccno(long int&);
    static int checkCustomer(long int&);
    static int deposit(Transaction &);
    static int fetchAllCustomer(vector<Customer> &customer_list,vector<Account> &acc_list);
    static int openFdInDb(Account& fb_obj,Customer&);
    static int fetchAllTransactionDetails(vector<Transaction> &,string);
    static int checkAccount(string);
    static int withdrawFdInDbBefore(Account &fd_obj);
    static int checkMaturityDate(Account& fd_obj);
    static int withdrawFdInDb(Account &fd_obj);
    static int checkFdId(string);
    static int availLocker(Account&);
    static int fetchAllTransactionForInterest(string,vector<string>& ,vector<float>&);
    static int getAccountInterest(string ,float& ,float& ,float& );
    static int fetchAllAccount(vector<string>&,string);
    static int viewAllLockerInDb(vector<string>&, vector<string>&);
    static int generateMisInDb(int&,int&,int&,float&,int&,float&,int&,float&,int&,float&,float&,float&,int&);
    static int viewFd(Account&,Customer&);
     static int viewAllFd(vector<Account>& fd_list, vector<Customer>& cust_list);
};

#endif

