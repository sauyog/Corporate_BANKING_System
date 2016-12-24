#include "AccountController.h"
//#include "../../AppClasses/Customer/Customer.h"
#include "../../GlobalDefs/GlobalDefs.h"
//#include "../../UI/CustomerUI/CustomerUI.h"
#include "../../AppClasses/Account/Account.h"
#include "../../Model/DB.h"
#include "../../UI/AccountUI/AccountUI.h"
#include <string>
#include<sstream>
#include <iomanip>
int AccountController :: initiateOpenAccount()
{
   
   string l_CustomerId;
   string l_AccountType;
   float l_AccountBalance;
   string l_JoinName;
   char c,d;
   string type;
   bool cust=false;
   while(!cust)
  {
   if(AccountUI::getCustomerId(l_CustomerId) == FAILED)
   {
     //cout<<"\n\nInvalid Customer Details Provided";
     return FAILED;
   }

   if(DB::CheckCustomer(l_CustomerId)==FAILED)
  {
    cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Invalid Customer id...."<<RESET<<endl<<endl;
     cust=false;
  }
  else { cust=true; }

 }

   if(AccountUI::getAccountType(type) == FAILED)
   {
     //cout<<"\n\nInvalid Customer Age Details Provided"; 
     return FAILED;
   }

   if(type=="1")
	{
		l_AccountType="saving";
	cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Minimum balance should be 1000 "<<RESET<<endl;

        if(AccountUI::getAccountBalance(l_AccountBalance) == FAILED)
    	 {
    		 //cout<<"\n\nInvalid Customer Age Details Provided"; 
    	 return FAILED;
  	 }
        if(AccountUI::getJoinName(l_JoinName) == FAILED)
           {
             return FAILED;
           }
        if(AccountUI::getCredit(c) == FAILED)
             {
             return FAILED;
              }

        if(AccountUI::getDebit(d) == FAILED)
           {
             return FAILED;
           }


	}

   if(type=="2")
        { 
		l_AccountType="current";
        AccountUI::displayMsg("Minimum balance should be 10000!");
        if(AccountUI::getAccountBalance(l_AccountBalance) == FAILED)
         {
                 //cout<<"\n\nInvalid Customer Age Details Provided";
         return FAILED;
         }
        if(AccountUI::getJoinName(l_JoinName) == FAILED)
           {
             return FAILED;
           }
        if(AccountUI::getCredit(c) == FAILED)
             {
             return FAILED;
              }

        if(AccountUI::getDebit(d) == FAILED)
           {
             return FAILED;
           }

        }

   if(type=="3")
        {
		 l_AccountType="pensionar";

        AccountUI::displayMsg("zero bal allowed");
        if(AccountUI::getAccountBalance(l_AccountBalance) == FAILED)
         {
                 //cout<<"\n\nInvalid Customer Age Details Provided";
         return FAILED;
         }
        if(AccountUI::getDebit(d) == FAILED)
           {
             return FAILED;
           }
        }

   if(l_AccountType=="fd")
        {
        AccountUI::displayMsg("Minimum FD amount should be 5000");
        if(AccountUI::getAccountBalance(l_AccountBalance) == FAILED)
         {
                 //cout<<"\n\nInvalid Customer Age Details Provided";
         return FAILED;
         }
        if(AccountUI::getCredit(c) == FAILED)
             {
             return FAILED;
              }

        }


   if(type=="4")
        {
		 l_AccountType="salary";

        AccountUI::displayMsg("Zero balance allowed!");
        if(AccountUI::getAccountBalance(l_AccountBalance) == FAILED)
         {
                 //cout<<"\n\nInvalid Customer Age Details Provided";
         return FAILED;
         }
        if(AccountUI::getCredit(c) == FAILED)
             {
             return FAILED;
              }

        if(AccountUI::getDebit(d) == FAILED)
           {
             return FAILED;
           }

        }



  




  Account accountObj(l_CustomerId, l_AccountType,l_JoinName, l_AccountBalance); /*

   if (accountObj.addAccountDetails() == FAILED)
   {
     cout<<"Adding Customer Details Failed"<<endl;
     return FAILED;
   } */

 if( DB :: openAccountInDb(accountObj,c,d)==FAILED)
 	{
//	cout<<"cannot add details to database(controller)"<<endl;
	return FAILED;
	}

  // cout<<"Account Succesfully Open ..."<<endl;
    AccountUI::displayMsg("Account Succesfully Open ... ");

  if(AccountUI::displayNewAccountDetails(accountObj) == FAILED)
  //   cout<<"cannot display account details"<<endl;
   return SUCCESS;
}


int AccountController::initiateDeleteAccount()
{
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
	char ch;
	AccountUI::getConfirmation("Do you actually want to delete this account??[y/n]: ",ch);
	if(ch=='Y' or ch=='y')
	{
        if( DB :: deleteAccountInDb(p_AccountNo)==FAILED)
	{
        //cout<<"cannot add details to database(controller)"<<endl;
        return FAILED;
        } 
          AccountUI::displayMsg("Account successfully deleted...");
	}
	else
	{AccountUI::displayMsg("Delete account cancelled. Thankyou so much! have a nice day.");}
	return SUCCESS;
}



int AccountController::initiateWithdraw()
{
       string l_AccountNo;
       float l_WithdrawAmount;
	char ch;
       string l_source;
	string l_creditNo;
	string l_DebitNo;
        string msg;
       bool acc=false;
/*       if(AccountUI::displayWithdrawOptions(l_source) == FAILED)
       {
          return FAILED;
       }
	if(l_source=="bank")
	{
*/
         while(!acc)
      {

        if( AccountUI ::getAccountNo(l_AccountNo)==FAILED)
                {
                           return FAILED;
                }
       if(DB::checkStatus(l_AccountNo,msg)==FAILED)
                {
                 //  cout<<"Invalid account number or inactive account number"<<endl<<endl;
                     AccountUI::displayMsg(msg);
                      acc=false;
                }
              else{ acc=true; }

      }

       if(AccountUI::getAmount(l_WithdrawAmount) == FAILED)
        {
           return FAILED;
        }
        AccountUI::getConfirmation("Do you actually want to withdraw??[y/n]: ",ch);
        if(ch=='Y' or ch=='y')
	{

       Transaction transObj(l_AccountNo,l_WithdrawAmount);


       if( DB :: withdraw(transObj)==FAILED)
        {
       // cout<<"cannot add details to database(controller)"<<endl;
        return FAILED;
        }
      //  }
/*
        if(l_source=="credit")
	{
	if(AccoutUI::getCreditNo())
	}
		
*/
   AccountUI::displayMsg("withdraw successfully done ...");
        }
	else
	{AccountUI::displayMsg("Withdraw cancelled. Thankyou so much! Have a nice day");}
return SUCCESS;
}

int AccountController::initiateDeposit()
{
       string l_AccountNo;
       float l_DepositAmount;
       string msg;
	char ch;
       bool acc=false;

         while(!acc)
      {

        if( AccountUI ::getAccountNo(l_AccountNo)==FAILED)
                {
                           return FAILED;
                }
       if(DB::checkStatus(l_AccountNo,msg)==FAILED)
                {
                 //  cout<<"Invalid account number or inactive account number"<<endl<<endl;
                     AccountUI::displayMsg(msg);
                      acc=false;
                }
              else{ acc=true; }

      }

       if(AccountUI::getAmount(l_DepositAmount) == FAILED)
   {
     //cout<<"\n\nInvalid account Details Provided";
     return FAILED;
   }
        AccountUI::getConfirmation("Do you actually want to deposit??[y/n]: ",ch);
        if(ch=='Y' or ch=='y')
        {

       Transaction transObj(l_AccountNo,l_DepositAmount);


       if( DB :: deposit(transObj)==FAILED)
        {
       // cout<<"cannot add details to database(controller)"<<endl;
        return FAILED;
        }

   AccountUI::displayMsg("deposit Succesfully done ...");
	}
else
{AccountUI::displayMsg("Deposit cancelled. Thankyou so much! Have a nice day.");}
return SUCCESS;
}

int AccountController::initiateTransfer()
{
       string l_AccountNo1;
       string l_AccountNo2;
       float l_DepositAmount;
       bool acc=false;
	char ch;
       string msg;
       while(!acc)
      {
	if(AccountUI::getTransferAccountNo(l_AccountNo1,l_AccountNo2) == FAILED)
    	 return FAILED;
         
         if(DB::checkStatus(l_AccountNo1,msg)==FAILED)
                {
                 //  cout<<"Invalid account number or inactive account number"<<endl<<endl;
                     AccountUI::displayMsg(msg);
                      acc=false;
                }
              else{ acc=true; }
         
           if(DB::checkStatus(l_AccountNo2,msg)==FAILED)
                {
                 //  cout<<"Invalid account number or inactive account number"<<endl<<endl;
                     AccountUI::displayMsg(msg);
                      acc=false;
                }
              else{ acc=true; }
      }
       if(AccountUI::getAmount(l_DepositAmount) == FAILED)
	 return FAILED;
	
	AccountUI::getConfirmation("Do you actually want to transfer?[y/n]: ",ch);
	if(ch=='Y' or ch=='y')
	{
       Transaction transObj1(l_AccountNo1,l_DepositAmount);

       if( DB :: withdraw(transObj1)==FAILED)
        {
//        cout<<"cannot add details to database(controller)"<<endl;
        return FAILED;
        }
//	cout<<"amount="<<l_DepositAmount<<" successfully deducted from account no="<<l_AccountNo1<<endl;
	AccountUI::displayMsg("Amount successfully duducted from first account.");
       Transaction transObj2(l_AccountNo2,l_DepositAmount);

       if( DB :: deposit(transObj2)==FAILED)
        {
       // cout<<"cannot add details to database(controller)"<<endl;
        return FAILED;
        }
//	cout<<"amount="<<l_DepositAmount<<" successfully added to account no="<<l_AccountNo2<<endl;
	AccountUI::displayMsg("Amount successfully duducted from second account.");
	 AccountUI::displayMsg("Amount transfered successfully!!!");
	}
else
{AccountUI::displayMsg("Transfer cancelled. Thankyou so much! Have a nice day.");}	
return SUCCESS;
}

 

int AccountController::initiateOpenFd()
{
string l_AccountNo;
float l_fdAmount;
int l_fdDuration;
int l_lockerId;
string msg;
bool acc=false;
if(AccountUI::askForAccount()==FAILED)
   {
	if(AccountController::initiateOpenAccount()==FAILED)
//	cout<<"cannot open account"<<endl;
	return FAILED;
   }

    while(!acc)
      {

        if( AccountUI ::getAccountNo(l_AccountNo)==FAILED)
                {
                           return FAILED;
                }
       if(DB::checkStatus(l_AccountNo,msg)==FAILED)
                {
                 //  cout<<"Invalid account number or inactive account number"<<endl<<endl;
                     AccountUI::displayMsg(msg);
                      acc=false;
                }
              else{ acc=true; }

      }
     
   if(DB::checkAccount(l_AccountNo)==FAILED)
	return FAILED;

if(AccountUI::getFdAmount(l_fdAmount)==FAILED)
	return FAILED;

if(AccountUI::getFdDuration(l_fdDuration)==FAILED)
        return FAILED;

Account fd_acc(l_AccountNo,l_fdAmount,l_fdDuration);
if(DB::openFdInDb(fd_acc)==FAILED)
{
AccountUI::displayMsg("cannout open fd in db");
return FAILED;
}
AccountUI::displayMsg("Fd successfully opened..");

   if(l_fdAmount>100000)
  {
     if(AccountUI::askForLocker()==FAILED)
      {
       cout<<"its okay"<<endl;
        return FAILED;
      }

   if(DB::availLocker(fd_acc)==FAILED)
  {
  cout<<"locker not allocated"<<endl;
    return FAILED;
   }
  //display locker details
}
//display fd details
AccountUI::displayMsg("Details of the FD are as follows:");
  if(AccountUI::displayNewFdDetails(fd_acc) == FAILED)
    // cout<<"cannot display account details"<<endl;
return SUCCESS;
}



int AccountController::initiateWithdrawFd()
{
string l_fdId;
if(AccountUI::getFdId(l_fdId)==FAILED)
return FAILED;
Account fd_obj;
fd_obj.setFdId(l_fdId);

if(DB::checkFdId(l_fdId)==FAILED)
{
AccountUI::displayMsg("Invalid fdid!");
return FAILED;
}

if(DB::checkMaturityDate(fd_obj)==FAILED)
{
//cout<<"maturity failed!"<<endl;
AccountUI::displayMsg("your maturity date= "+fd_obj.getFdEndDate());
if(AccountUI::getFdWithdrawChoice(fd_obj)==FAILED)
	{
	AccountUI::displayMsg("fd withdraw cancelled!");
	return FAILED;
	}
if(DB::withdrawFdInDbBefore(fd_obj)==FAILED)
{
//cout<<"cannot withdraw fd in db!"<<endl;
return FAILED;
}
return SUCCESS;	
}
if(DB::withdrawFdInDb(fd_obj)==FAILED)
{
//cout<<"cannot withdraw fd in db!"<<endl;
return FAILED;
}
return SUCCESS;
}

int AccountController::initiateCalculateInterest()
{
vector<string> transDate_list;
vector<float> balobj;
vector<string> acc_list;
int intdays;
string date1,date2;
int d1,d2,j;
string days;
float sum=0;
float interest;
float fees;
float amb;
float balance;

if(DB::fetchAllAccount(acc_list,"saving")==FAILED)
{
//cout<<"cannot retrieve all accounts"<<endl;
return FAILED;
}
cout<<"accounts:"<<endl;
cout<<"no of accounts ="<<acc_list.size()<<endl;
for(int l=0;l<acc_list.size();l++)
cout<<acc_list[l]<<endl;

for(int i=0;i<acc_list.size();i++)
{
if(DB::fetchAllTransactionForInterest(acc_list[i],transDate_list,balobj)==FAILED)
{
AccountUI::displayMsg("no interest for this month for accno="+acc_list[i]);
continue;
}

sum=0;

for(int k=0;k<transDate_list.size();k++)
	{
		cout<<"date="<<transDate_list[k]<<"\t";
		cout<<"amount="<<balobj[k]<<endl;
	}
date1="00";
istringstream(date1) >> d1;
for(j=0;j<transDate_list.size();j++)
	{
		date2=transDate_list[j].substr(0,2);
		istringstream(date2) >> d2;
		intdays=d2-d1;
		//istringstream(days) >> intdays;
		sum=sum+(intdays*balobj[j]);
		d1=d2;
	}
date2="30";
istringstream(date2) >> d2;
intdays=d2-d1;
//istringstream(days) >> intdays;
cout<<"j="<<j<<endl;
cout<<"bal of j-1="<<balobj[j-1]<<endl;
sum=sum+(intdays*balobj[j-1]);
sum=sum/30.00;
if(DB::getAccountInterest("saving",interest,fees,amb)==FAILED)
{cout<<"cannot fetch interest for account!"<<endl;
	return FAILED;}
//cout<<"avgbal="<<sum;
if(sum>=amb)
{
balance=balobj[j-1]+(balobj[j-1]*interest/1200.00);
Transaction trans_obj(acc_list[i],(balobj[j-1]*interest/1200.00),"interest",balance);
if(DB::updateBalance(acc_list[i],balance)==FAILED)
        return FAILED;

if(DB::updateTransactionTable(trans_obj)==FAILED)
	return FAILED;
//return SUCCESS;
}
else
{
//cout<<"last transaction current bal="<<balobj[j-1];
balance=balobj[j-1]-fees;
Transaction trans_obj(acc_list[i],fees,"fees",balance);

if(DB::updateBalance(acc_list[i],balance)==FAILED)
        return FAILED;
if(DB::updateTransactionTable(trans_obj)==FAILED)
        return FAILED;

}
}
AccountUI::displayMsg("Calculate interest successfull");
return SUCCESS;
}


int AccountController::initiateCheckBalance()
{
       string l_AccountNo;
       float l_balance;
       string msg;
       bool acc=false;
     
        while(!acc)
      {

        if( AccountUI ::getAccountNo(l_AccountNo)==FAILED)
                {
                           return FAILED;
                }
       if(DB::checkStatus(l_AccountNo,msg)==FAILED)
                {
                 //  cout<<"Invalid account number or inactive account number"<<endl<<endl;
                     AccountUI::displayMsg(msg);
                      acc=false;
                }
              else{ acc=true; }

      }

     

      if(DB::checkBalance(l_AccountNo,l_balance)==FAILED)
	//cout<<"invalid account!"<<endl;
	return FAILED;

      if(AccountUI::displayBalance(l_balance)==FAILED)
	return FAILED;
return SUCCESS;
}
