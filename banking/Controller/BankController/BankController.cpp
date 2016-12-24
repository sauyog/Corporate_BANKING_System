#include "BankController.h"
#include "../../AppClasses/Customer/Customer.h"
#include "../../AppClasses/Account/Account.h"
#include "../../GlobalDefs/GlobalDefs.h"
#include "../../AppClasses/Bank/Bank.h"
#include "../../UI/BankUI/BankUI.h"
#include "../../UI/AccountUI/AccountUI.h"
#include "../../GlobalDefs/ErrorLog.h"
#include <vector.h>
#include<iomanip>
#include<iostream>
#include<cmath>
#include "../../AppClasses/Transaction/Transaction.h"
#include "../../Model/DB.h"

int BankController::initiateViewAllCustomer()
{
  ErrorLog :: openErrorLog("Entering into initiate view Customer Controller");
vector <Customer> customer_list;
vector <Account> acc_list;
if(Bank::fetchAllCustomer(customer_list,acc_list)==FAILED)
{
cout<<"cannot fetch from db"<<endl;
return FAILED;
}
BankUI::displayCustomerField();
//cout<<customer_list[0].getCustomerId()<<"hello"<<endl;
//cout<<acc_list[0].getCustomerId()<<"hello"<<endl;
//cout<<"cust size="<<customer_list.size();
//cout<<"acc size="<<acc_list.size();
for(int i=0;i<customer_list.size();i++)
  {
//	for(int j=0;j<acc_list.size();j++)
//	{
//		if(customer_list[i].getCustomerId()==acc_list[j].getCustomerId())				
			BankUI::displayAllCustomer(customer_list[i],acc_list[i]);
//	}
   ErrorLog :: openErrorLog("Exiting into initiate view Customer Controller");
  }  
return SUCCESS;
}




int  BankController::initiateGenerateStatements()
        {
                vector<Transaction>trans_list;
                vector<string>str_obj;
                string p_AccountNo;
                bool acc=false;
		string msg;
        while(!acc)
      {

        if( AccountUI ::getAccountNo(p_AccountNo)==FAILED)
                {
                           return FAILED;
                }
       if(DB::checkStatus(p_AccountNo,msg)==FAILED)
                {
                 //  cout<<"Invalid account number or inactive account number"<<endl<<endl;
                     AccountUI::displayMsg(msg);
                      acc=false;
                }
              else{ acc=true; }

      }





                if(Bank::fetchAllTransaction(trans_list,p_AccountNo)==FAILED)
                        {
                        cout<<"cannot fetch from db"<<endl;
                        return FAILED;
                        }
               int d=trans_list.size();
              float array[d];
        for(int i=0;i<trans_list.size();i++)
        {
             BankUI::displayAllTransaction(trans_list[i]);
             array[i]=trans_list[i].getCurrentBalance();
             str_obj.push_back(trans_list[i].getTransactionDate());

        }
cout<<endl;
cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"you can collect your statement from banking/Report/"<<RESET<<endl;
/*

        int var;

        var=500;
        int highest= array[0];
        for (int check=0;check<=d;check++)
        {
        if (array[check]>highest) highest=array[check];
        }
        double col=(ceil(highest/d)*d);
        //cout<<col<<endl;
        for(int rows=col;rows>=var;)
        {
                cout<<setw(5)<<col<<"|";
                for(int cols=0;cols<=d;cols++)
                {
                        if(array[cols]>=rows)
                         cout<<"        "<<"\x1b[44m"<<setw(3)<<" "<<"\x1b[0m";
                        else
                        cout<<setw(10)<<"  ";
                }
                cout<<endl;
                rows=rows-var;
                col=col-var;
        }
        for(int cols=0;cols<=30;cols++)
        cout<<setfill('-')<<setw(5)<<"-";
        cout<<endl;
        cout<<setfill(' ')<<setw(5)<<"0"<<char(179);
        for(int cols=0;cols<d;cols++) cout<<setw(3)<<" "<<str_obj[cols];
        cout<<endl;
*/




        }



int BankController::initiateMIS()
{
int account,customer,locker,fd,saving,current,salary;
float f_saving,f_current,f_salary,f_fd,fdinterest;
float f_account;

         if(DB::generateMisInDb(customer,account,saving,f_saving,salary,f_salary,current,f_current,fd,f_fd,fdinterest,f_account,locker)==FAILED)
       {
          cout<<"cannot generate MIS report"<<endl<<endl;
	return FAILED;
       }
     
       BankUI::displayMis(customer,account,saving,f_saving,salary,f_salary,current,f_current,fd,f_fd,fdinterest,f_account,locker);
}

int BankController::initiateViewAllLocker( )
{
	vector<string> cust_list;
	vector<string> lock_list;
	if(DB:: viewAllLockerInDb(cust_list,lock_list)==FAILED)
	{
		cout<<"cannot view locker"<<endl;
		return FAILED;
	}
	 BankUI::displayAllLocker(cust_list,lock_list);
}

int BankController::initiateViewAllFd()
{
   vector<Account>fd_list;
   vector<Customer> cust_list;
   if(DB::viewAllFd( fd_list,cust_list)==FAILED)
	{
	cout<<"cannot view All fd"<<endl;
                return FAILED;
	}
         BankUI::displayAllFd( fd_list,cust_list);

}


