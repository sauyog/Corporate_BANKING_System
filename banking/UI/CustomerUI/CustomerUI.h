#ifndef _CUSTOMERUI_h_
#define _CUSTOMERUI_h_
#include<vector.h>
#include<iostream>
#include "../../AppClasses/Account/Account.h"
#include "../../AppClasses/Customer/Customer.h"


#include <iostream>
using namespace std;

class CustomerUI
{
   public:
   static void displayCustomerDetails(Customer obj,vector<Account> acc_list);
   static int getCustomerId(string&);
   static int getCustomerName(string&);
   static int getCustomerMobileNumber(string&);
   static int getCustomerAddress(string&);
   static int getCustomerDob(string&);
   static int  getEmail(string&);
   static int getCustomerPan(string&);
   static int getGuranteerName(string&);
   static void displayMsg();
   static int getGuranteerAccno(string&);
   static int getCustomerPincode(string&);
   static int getJointCustomerName(string&);
  // int CustomerUI::getCustomerGuranteerName(string & p_guranteername)  
};

#endif


