#include "AccountController.h"
//#include "../../AppClasses/Customer/Customer.h"
#include "../../GlobalDefs/GlobalDefs.h"
//#include "../../UI/CustomerUI/CustomerUI.h"
#include "../../AppClasses/Account/Account.h"
#include "../../Model/DB.h"
#include "../../UI/AccountUI/AccountUI.h"
int AccountController :: initiateOpenAccount()
{
   
   string l_CustomerId;
   string l_AccountType;
   int l_AccountBalance;
   string l_JoinName;
   char c,d;
   
   if(AccountUI::getCustomerId(l_CustomerId) == FAILED)
   {
     //cout<<"\n\nInvalid Customer Details Provided";
     return FAILED;
   }

   if(AccountUI::getAccountType(l_AccountType) == FAILED)
   {
     //cout<<"\n\nInvalid Customer Age Details Provided"; 
     return FAILED;
   }

   if(l_AccountType=="saving")
	{
	cout<<"min bal should b 1000 for metro and 500 for non metro"<<endl;
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

   if(l_AccountType=="current")
        {
        cout<<"min bal should be 10000"<<endl;
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

   if(l_AccountType=="pensioner")
        {
        cout<<"zero bal allowed"<<endl;
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
        cout<<"min bal should be 5000"<<endl;
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


   if(l_AccountType=="salary")
        {
        cout<<"zero bal allowed"<<endl;
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
	cout<<"cannot add details to database(controller)"<<endl;
	return FAILED;
	}

   cout<<"Account Succesfully Open ..."<<endl;

  if(AccountUI::displayNewAccountDetails(accountObj) == FAILED)
     cout<<"cannot display account details"<<endl;
   return SUCCESS;
}


int AccountController::initiateDeleteAccount()
{
        string p_AccountNo;
        if( AccountUI ::getAccountNo(p_AccountNo)==FAILED)
        	{       
			
 			cout<<"customer not exixst";
 
 	                   return FAILED;
		}
        if( DB :: deleteAccountInDb(p_AccountNo)==FAILED)
	{
        cout<<"cannot add details to database(controller)"<<endl;
        return FAILED;
        } 
}



int AccountController::initiateWithdraw()
{
       string l_AccountNo;
       int l_WithdrawAmount;
       string l_source;
	string l_creditNo;
	string l_DebitNo;
/*       if(AccountUI::displayWithdrawOptions(l_source) == FAILED)
       {
          return FAILED;
       }
	if(l_source=="bank")
	{
*/
      if(AccountUI::getAccountNo(l_AccountNo) == FAILED)
       {
          return FAILED;
       }

       if(AccountUI::getAmount(l_WithdrawAmount) == FAILED)
        {
           return FAILED;
        }

       Transaction transObj(l_AccountNo,l_WithdrawAmount);


       if( DB :: withdraw(transObj)==FAILED)
        {
        cout<<"cannot add details to database(controller)"<<endl;
        return FAILED;
        }
      //  }
/*
        if(l_source=="credit")
	{
	if(AccoutUI::getCreditNo())
	}
		
*/
   cout<<"withdraw successfully done ..."<<endl;
     
}

int AccountController::initiateDeposit()
{
       string l_AccountNo;
       int l_DepositAmount;

      if(AccountUI::getAccountNo(l_AccountNo) == FAILED)
   {
     //cout<<"\n\nInvalid account Details Provided";
     return FAILED;
   }

       if(AccountUI::getAmount(l_DepositAmount) == FAILED)
   {
     //cout<<"\n\nInvalid account Details Provided";
     return FAILED;
   }

       Transaction transObj(l_AccountNo,l_DepositAmount);


       if( DB :: deposit(transObj)==FAILED)
        {
        cout<<"cannot add details to database(controller)"<<endl;
        return FAILED;
        }

   cout<<"deposit Succesfully done ..."<<endl;

}

int AccountController::initiateTransfer()
{
       string l_AccountNo1;
       string l_AccountNo2;
       int l_DepositAmount;
     
	if(AccountUI::getTransferAccountNo(l_AccountNo1,l_AccountNo2) == FAILED)
    	 return FAILED;
	
       if(AccountUI::getAmount(l_DepositAmount) == FAILED)
	 return FAILED;
	
	if(DB::checkStatus(l_AccountNo1)==FAILED)
	{
	cout<<"account from which you have to transfer money is inactive!"<<endl;
	return FAILED;
	}
	if(DB::checkStatus(l_AccountNo2)==FAILED)
        {
        cout<<"account to which you have to transfer money is inactive!"<<endl;
        return FAILED;
        }

       Transaction transObj1(l_AccountNo1,l_DepositAmount);

       if( DB :: withdraw(transObj1)==FAILED)
        {
        cout<<"cannot add details to database(controller)"<<endl;
        return FAILED;
        }
	cout<<"amount="<<l_DepositAmount<<" successfully deducted from account no="<<l_AccountNo1<<endl;

       Transaction transObj2(l_AccountNo2,l_DepositAmount);

       if( DB :: deposit(transObj2)==FAILED)
        {
        cout<<"cannot add details to database(controller)"<<endl;
        return FAILED;
        }
	cout<<"amount="<<l_DepositAmount<<" successfully added to account no="<<l_AccountNo2<<endl;
	cout<<"amount transfered successfully!!!"<<endl;
	return SUCCESS;
}

 

int AccountController::initiateOpenFd()
{
string l_AccountNo;
int l_fdAmount;
int l_fdDuration;
int l_lockerId;
if(AccountUI::askForAccount()==FAILED)
   {
	if(AccountController::initiateOpenAccount()==FAILED)
	cout<<"cannot open account"<<endl;
	return FAILED;
   }

      if(AccountUI::getAccountNo(l_AccountNo) == FAILED)
   {
     return FAILED;
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
cout<<"cannout open fd in db"<<endl;
return FAILED;
}
cout<<"fd successfully opened.."<<endl;
//display fd details
cout<<"details of the fd are as follows:"<<endl;
  if(AccountUI::displayNewFdDetails(fd_acc) == FAILED)
     cout<<"cannot display account details"<<endl;

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
cout<<"invalid fdid!"<<endl;
return FAILED;
}

if(DB::checkMaturityDate(fd_obj)==FAILED)
{
if(AccountUI::getFdWithdrawChoice(fd_obj)==FAILED)
	{
	cout<<"fd withdraw cancelled!"<<endl;
	return FAILED;
	}
if(DB::withdrawFdInDbBefore(fd_obj)==FAILED)
{
cout<<"cannot withdraw fd in db!"<<endl;
return FAILED;
}
return SUCCESS;	
}
if(DB::withdrawFdInDb(fd_obj)==FAILED)
{
cout<<"cannot withdraw fd in db!"<<endl;
return FAILED;
}
return SUCCESS;
}

int AccountController::initiateCalculateInterest()
{
vector<string> acc_list;
if(DB::fetchAllAccount(acc_list)==FAILED)
{
cout<<"cannot retrieve all accounts"<<endl;
return FAILED;
}

for(int i=0;i<acc_list.size();i++)
{
if(DB::fetchAllTransactionForInterest(acc_list[i])==FAILED)
{
cout<<"cannot fetch transactions"<<endl;
break;
return FAILED;
}
}
return SUCCESS;
}
