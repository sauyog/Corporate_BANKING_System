#ifndef _ACCOUNTCONTROLLER_H_
#define _ACCOUNTCONTROLLER_H_

class AccountController
{
   public:
   static int initiateOpenAccount();
   static int initiateDeleteAccount();
   static int initiateWithdraw();
   static int initiateDeposit();
   static int initiateTransfer(); 
   static int initiateOpenFd();
   static int initiateWithdrawFd();
   static int initiateCalculateInterest();
   static int initiateCheckBalance();
   static int initiateViewFd();   
};

#endif

