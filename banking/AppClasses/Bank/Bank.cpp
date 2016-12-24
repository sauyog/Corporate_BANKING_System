#include "Bank.h"
#include "../../Model/DB.h"
#include "../../GlobalDefs/GlobalDefs.h"
#include "../Customer/Customer.h"
#include "../Transaction/Transaction.h"


int Bank::fetchAllCustomer(vector<Customer> &customer_list,vector<Account> &acc_list)
{
if(DB::fetchAllCustomer(customer_list,acc_list)==FAILED)
{
cout<<"cannot fetch details from DB"<<endl;
return FAILED;
}
return SUCCESS;
}

int Bank::fetchAllTransaction(vector<Transaction> &trans_list,string accountno)
{

if(DB::fetchAllTransactionDetails(trans_list,accountno)==FAILED)
{
cout<<"cannot fetch details from DB"<<endl;
return FAILED;
}
return SUCCESS;
}
