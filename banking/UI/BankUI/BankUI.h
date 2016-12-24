#ifndef _BANKUI_H_
#define _BANKUI_H_
#include<vector.h>
#include<iostream>
#include <string>
#include "../../AppClasses/Account/Account.h"
#include "../../AppClasses/Customer/Customer.h"
#include "../../AppClasses/Transaction/Transaction.h"
using namespace std;


class BankUI
{
public:
string string1;
static void displayCustomerField();
static void displayAllCustomer(Customer cust_obj,Account acc_obj);
static void displayAllTransaction(Transaction trans_obj);
static void displayMis(int,int,int,float ,int ,float,int ,float ,int,float,float,float,int);
static void displayAllLocker(vector<string> ,vector<string>);
static void displayAllFd(vector<Account>fd_list,vector<Customer>cust_list);
static void removeSpaces(string&);
};

#endif
