#include "BankUI.h"
#include "../../GlobalDefs/GlobalDefs.h"
#include "../../AppClasses/Account/Account.h"
#include "../../AppClasses/Customer/Customer.h"
#include "../../AppClasses/Transaction/Transaction.h"
#include <iomanip>


void BankUI::displayCustomerField()
{
cout<<"\tcustomer details"<<endl;
cout<<setw(20)<<""<<BOLDBLACK<<"ID"<<setw(20)<<"name"<<setw(20)<<"acc_no"<<setw(20)<<"acc_type"<<setw(20)<<"accoutbal"<<RESET<<endl;
}
void BankUI::displayAllCustomer(Customer cust_obj,Account acc_obj)
{
cout<<setw(20)<<BOLDBLUE<<cust_obj.getCustomerId()<<setw(40)<<cust_obj.getCustomerName()<<setw(40)<<acc_obj.getAccountNo()<<setw(20)<<acc_obj.getAccountType()<<setw(20)<<acc_obj.getAccountBalance()<<"\t"<<RESET<<endl;
}
  
void BankUI::displayAllTransaction(Transaction trans_obj)
{
cout<<setw(20)<<BOLDBLUE<<trans_obj.getTransactionId()<<setw(40)<<trans_obj.getTransactionType()<<setw(40)<<trans_obj.getAccountNo()<<setw(20)<<trans_obj.getAmount()<<setw(20)<<trans_obj.getTransactionDate()<<"\t"<<RESET<<endl;
}


