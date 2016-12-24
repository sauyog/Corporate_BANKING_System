#ifndef _BANK_H_
#define _BANK_H_
#include "../Customer/Customer.h"
#include "../Account/Account.h"
#include "../Transaction/Transaction.h"

#include<vector.h>
#include<iostream>
using namespace std;

class Bank
{
public:
static int fetchAllCustomer(vector <Customer> &customer_list,vector <Account> &acc_list);
static int fetchAllTransaction(vector<Transaction>& ,string );
};

#endif


