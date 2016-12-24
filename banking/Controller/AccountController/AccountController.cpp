#include "AccountController.h"
//#include "../../AppClasses/Customer/Customer.h"
#include "../../GlobalDefs/GlobalDefs.h"
//#include "../../UI/CustomerUI/CustomerUI.h"
#include "../../AppClasses/Account/Account.h"
#include "../../GlobalDefs/ErrorLog.h"
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
   int type;
   bool cust=false;
 long int customerInt;

while(!cust)
  {
   if(AccountUI::getCustomerId(l_CustomerId) == FAILED)
   {
     //cout<<"\n\nInvalid Customer Details Provided";
     return FAILED;
   }
 
  istringstream(l_CustomerId) >> customerInt;

   if(DB::checkCustomer(customerInt)==FAILED)
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

   if(type==1)
        {       
                bool am=false;
                l_AccountType="saving";
        cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Minimum balance should be 1000 "<<RESET<<endl;

       while(!am)
      {
        if(AccountUI::getAccountBalance(l_AccountBalance) == FAILED)
         {
                 //cout<<"\n\nInvalid Customer Age Details Provided";
         return FAILED;
         }
         if(l_AccountBalance<1000)
         {
          cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Enter proper amount"<<RESET<<endl<<endl;
                 am=false;
         }
        else { am=true; }
      
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

   if(type==2)
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

   if(type==3)
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
	c='n';
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
	c='n';

        }

   if(type==4)
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
        string l_AccountNo2;
        float p_balance;
        char ch1,ch2;
        bool acc=false;
        string msg;
         bool acc1=false;
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


      if(DB::checkBalance(p_AccountNo,p_balance)==FAILED)
       {
        //cout<<"invalid account!"<<endl;
        return FAILED;
       }
       cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Your balance: "<<RESET<<BOLDBLUE<<p_balance<<RESET<<endl;
       

        AccountUI::getConfirmation("Do you want to transfer this amount to some other account??[y/n]: ",ch1);
        if(ch1=='N' or ch1=='n')
        {

       Transaction transObj(p_AccountNo,p_balance);


       if( DB :: withdraw(transObj)==FAILED)
        {
       // cout<<"cannot add details to database(controller)"<<endl;
        return FAILED;
        }
   AccountUI::displayMsg("withdraw successfully done ..Collect your cash.");
        }

   else
      {
         while(!acc1)
      {

        if( AccountUI ::getAccountNo(l_AccountNo2)==FAILED)
                {
                           return FAILED;
                }
       if(DB::checkStatus(l_AccountNo2,msg)==FAILED)
                {
                 //  cout<<"Invalid account number or inactive account number"<<endl<<endl;
                     AccountUI::displayMsg(msg);
                      acc1=false;
                }
              else{ acc1=true; }

      }
        AccountUI::getConfirmation("Do you actually want to transfer?[y/n]: ",ch2);
        if(ch2=='Y' or ch2=='y')
        {
       Transaction transObj1(p_AccountNo,p_balance);

       if( DB :: withdraw(transObj1)==FAILED)
        {
//        cout<<"cannot add details to database(controller)"<<endl;
        return FAILED;
        }
//      cout<<"amount="<<l_DepositAmount<<" successfully deducted from account no="<<l_AccountNo1<<endl;
        AccountUI::displayMsg("Amount successfully duducted from first account.");
       Transaction transObj2(l_AccountNo2,p_balance);

       if( DB :: deposit(transObj2)==FAILED)
        {
       // cout<<"cannot add details to database(controller)"<<endl;
        return FAILED;
        }
//      cout<<"amount="<<l_DepositAmount<<" successfully added to account no="<<l_AccountNo2<<endl;
        AccountUI::displayMsg("Amount successfully deposited to second account.");
         AccountUI::displayMsg("Amount transfered successfully!!!");
        }
     else
        {AccountUI::displayMsg("Transfer cancelled. Thankyou so much! Have a nice day.");}

    
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

       ErrorLog::openErrorLog("Entering into initiateWithdraw() function in account controller");


       string l_AccountNo;
       float l_WithdrawAmount;
       float c_Balance;
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
           AccountUI::displayMsg("Balance not sufficient to withdraw");
             return FAILED;
        }
      
             AccountUI::displayMsg("withdraw successfully done ...");
                if(DB::checkBalance(l_AccountNo,c_Balance)==FAILED)
                     {  return FAILED; }
               else
                    {
                     cout<<setw(30)<<""<<BOLDBLACK<<setw(30)<<"Your current balance is : "<<"Rs. "<<c_Balance<<RESET<<endl<<endl;
                    }
             
   
        }
	else
	{AccountUI::displayMsg("Withdraw cancelled. Thankyou so much! Have a nice day");}

       ErrorLog::openErrorLog("Exiting from initiateWithdraw() function in account controller");


return SUCCESS;
}

int AccountController::initiateDeposit()
{
       ErrorLog::openErrorLog("Entering into initiateDeposit() function in account controller");


       string l_AccountNo;
       float l_DepositAmount;
       float c_Balance;
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
                if(DB::checkBalance(l_AccountNo,c_Balance)==FAILED)
                     {  return FAILED; }
               else
                    {
                     cout<<setw(30)<<""<<BOLDBLACK<<setw(30)<<"Your current balance is : "<<"Rs. "<<c_Balance<<RESET<<endl<<endl;
                    }
       
        
	}
else
{AccountUI::displayMsg("Deposit cancelled. Thankyou so much! Have a nice day.");}

       ErrorLog::openErrorLog("Exiting from initiateWithdraw() function in account controller");


return SUCCESS;
}

int AccountController::initiateTransfer()
{


       ErrorLog::openErrorLog("Entering into initiateTransfer) function in account controller");


       string l_AccountNo1;
       string l_AccountNo2;
       float l_DepositAmount;
       float c_Balance1;
       float c_Balance2;
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
                if(DB::checkBalance(l_AccountNo1,c_Balance1)==FAILED)
                     {  return FAILED; }
               else
                    {
                     cout<<setw(30)<<""<<BOLDBLACK<<setw(30)<<"Current balance in account no." <<l_AccountNo1<<" : "<<"Rs. "<<c_Balance1<<RESET<<endl<<endl;
                    }




       Transaction transObj2(l_AccountNo2,l_DepositAmount);

       if( DB :: deposit(transObj2)==FAILED)
        {
       // cout<<"cannot add details to database(controller)"<<endl;
        return FAILED;
        }
//	cout<<"amount="<<l_DepositAmount<<" successfully added to account no="<<l_AccountNo2<<endl;
	AccountUI::displayMsg("Amount successfully deposited to second account.");
                if(DB::checkBalance(l_AccountNo2,c_Balance2)==FAILED)
                     {  return FAILED; }
               else
                    {
                     cout<<setw(30)<<""<<BOLDBLACK<<setw(30)<<"Current balance in account no." <<l_AccountNo2<<" : "<<"Rs. "<<c_Balance2<<RESET<<endl<<endl;
                    }




	 AccountUI::displayMsg("Amount transfered successfully!!!");
	}
else
{AccountUI::displayMsg("Transfer cancelled. Thankyou so much! Have a nice day.");}	

       ErrorLog::openErrorLog("Exiting from initiateTransfer() function in account controller");


return SUCCESS;
}

 

int AccountController::initiateOpenFd()
{
       ErrorLog::openErrorLog("Entering into initiateOpenFd() function in account controller");

string l_AccountNo;
float l_fdAmount;
float l_balance;
int l_fdDuration;
int l_lockerId;
string msg;
bool acc=false;
bool fd=false;
char ch;
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


 while(!fd)
{
if(AccountUI::getFdAmount(l_fdAmount)==FAILED)
      {
	return FAILED;
      }
   if(l_fdAmount<5000)
   {
          cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Ente amount greater than or equal to 5000"<<RESET<<endl<<endl;
                 fd=false;
   }
        else { fd=true; }
}
     




if(DB::checkBalance(l_AccountNo,l_balance)==FAILED)
	return FAILED;
if(l_balance>=l_fdAmount)
{
int type;
if(AccountUI::getFdDuration(type)==FAILED)
        return FAILED;

if(type==1) { l_fdDuration=3;}
if(type==2) { l_fdDuration=6;}
if(type==3) { l_fdDuration=9;}
if(type==4) { l_fdDuration=12;}
   
Account fd_acc(l_AccountNo,l_fdAmount,l_fdDuration);
Customer cust_obj;

 AccountUI::getConfirmation("Do you actually want to open fd??[y/n]: ",ch);
  if(ch=='Y' or ch=='y')
   {
      Transaction transObj1(l_AccountNo,l_fdAmount);
      if(DB::withdraw(transObj1)==FAILED)
          return FAILED;





       if(DB::openFdInDb(fd_acc,cust_obj)==FAILED)
     {
      AccountUI::displayMsg("cannot open fd in db");
           return FAILED;
     }
          AccountUI::displayMsg("Fd successfully opened..");
  }
  else 
    {
             {AccountUI::displayMsg("FD  cancelled. Thankyou so much! Have a nice day");}
                   return FAILED;
    }  

   if(l_fdAmount>=100000)
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
  if(AccountUI::displayNewFdDetails(fd_acc,cust_obj) == FAILED)
    // cout<<"cannot display account details"<<endl;
return SUCCESS;
}
else
{
AccountUI::displayMsg("not sufficient balance in the account to withdraw for FD..sorry..");

       ErrorLog::openErrorLog("Exiting into initiateOpenFd() function in account controller");


return FAILED;
}
}

int AccountController::initiateViewFd()
{
string l_fdid;
string l_accountNo;
string l_customerName;
float l_fdAmount;
int l_FdDuration;
string l_FdStartDate;
string l_FdEndDate;
int l_LockerId;


bool fd=false;
    while(!fd)
      {

        if( AccountUI ::getFdId(l_fdid)==FAILED)
                {
                           return FAILED;
                }
       if(DB::checkFdId(l_fdid)==FAILED)
                {
                 //  cout<<"Invalid account number or inactive account number"<<endl<<endl;
                     AccountUI::displayMsg("Invalid FDID...");
                      fd=false;
                }
              else{ fd=true; }

      }
Account fd_obj;
fd_obj.setFdId(l_fdid);
Customer cust_obj;
if(DB::viewFd(fd_obj,cust_obj)==FAILED)
	return FAILED;

AccountUI::displayMsg("Details of the FD are as follows:");
  if(AccountUI::displayNewFdDetails(fd_obj,cust_obj) == FAILED)
    // cout<<"cannot display account details"<<endl;
               return SUCCESS;

 }



int AccountController::initiateWithdrawFd()
{
string l_fdId;
bool fd=false;

    while(!fd)
      {

        if( AccountUI ::getFdId(l_fdId)==FAILED)
                {
                           return FAILED;
                }
       if(DB::checkFdId(l_fdId)==FAILED)
                {
                 //  cout<<"Invalid account number or inactive account number"<<endl<<endl;
                     AccountUI::displayMsg("Invalid FDID...");
                      fd=false;
                }
              else{ fd=true; }

      }




Account fd_obj;
fd_obj.setFdId(l_fdId);



if(DB::checkMaturityDate(fd_obj)==FAILED)
{
//cout<<"maturity failed!"<<endl;
//AccountUI::displayMsg("your maturity date= "+fd_obj.getFdEndDate());
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
