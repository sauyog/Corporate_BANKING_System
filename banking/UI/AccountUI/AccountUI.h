#ifndef _ACCOUNTUI_H_
#define _ACCOUNTUI_H_
#include <string>
#include <iostream>
#include "../../AppClasses/Account/Account.h"
#include "../../AppClasses/Customer/Customer.h"

using namespace std;

class AccountUI
{
   public:
   static int getAccountNo(string&);
   static int getCustomerId(string&);
   static int getAccountType(int&);
   static int getJoinName(string&);
   static int getAccountBalance(float&);
   static int displayNewAccountDetails(Account);
   static int getCredit(char&);
   static int getDebit(char&);
   static int getAmount(float&);
   static int getTransferAccountNo(string&,string&);
   static int getFdAmount(float&);
   static int getFdDuration(int&);
   static int displayNewFdDetails(Account,Customer); 
   static int getFdWithdrawChoice(Account);
   static int getFdId(string&);
   static int askForAccount();
    static int askForLocker();
    static int displayBalance(float);
    static void displayMsg(string);
    static void getConfirmation(string,char&);
};

#endif

