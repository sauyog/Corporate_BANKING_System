#include "CustomerController.h"
#include "../../AppClasses/Customer/Customer.h"
#include "../../GlobalDefs/GlobalDefs.h"
#include "../../UI/CustomerUI/CustomerUI.h"

int CustomerController :: initiateCustomerRegistration()
{
   string l_customerid ;
   string l_customername;
   string l_jointname;
   string l_number;
   string l_address;
   string l_dob;
   string l_pan;
   string l_guranteer_name;
   string l_guranteer_accno;
   string l_customerpincode;

   if(CustomerUI::getCustomerId(l_customerid) == FAILED)
   {
     //cout<<"\n\nInvalid Customer Details Provided";
     return FAILED;
   }

   if(CustomerUI::getCustomerName(l_customername) == FAILED)
   {
     //cout<<"\n\nInvalid Customer Age Details Provided";
     return FAILED;
   }

   if(CustomerUI::getCustomerMobileNumber(l_number) == FAILED)
   {
     //cout<<"\n\nInvalid Customer Details Provided";
     return FAILED;
   }

   if(CustomerUI::getCustomerAddress(l_address) == FAILED)
   {
     //cout<<"\n\nInvalid Customer Age Details Provided";
     return FAILED;
   }

   if(CustomerUI::getCustomerDob(l_dob) == FAILED)
 {
     //cout<<"\n\nInvalid Customer Details Provided";
     return FAILED;
   }

   if(CustomerUI::getCustomerPan(l_pan) == FAILED)
   {
     //cout<<"\n\nInvalid Customer Age Details Provided";
     return FAILED;
   }

   if(CustomerUI::getGuranteerName(l_guranteer_name) == FAILED)
   {
     //cout<<"\n\nInvalid Customer Details Provided";
     return FAILED;
   }

   if(CustomerUI::getGuranteerAccno(l_guranteer_accno) == FAILED)
   {
     //cout<<"\n\nInvalid Customer Age Details Provided";
     return FAILED;
   }



   Customer customerObj(l_customerid,l_customername,l_customerpincode,l_number,l_address,l_dob,l_pan,l_guranteer_name,l_guranteer_accno,l_jointname);

   if (customerObj.addCustomerDetails() == FAILED)
   {
     //cout<<"Adding Customer Details Failed"<<endl;
     return FAILED;
   }

   cout<<"Customer Details Succesfully Added ..."<<endl;
   return SUCCESS;
}


int CustomerController :: initiateDeleteCustomer()
{
   
   string l_customerid ;
   

      if(CustomerUI::getCustomerId(l_customerid) == FAILED)
      {
       cout<<"\n\nInvalid Customer ID Provided";
       return FAILED;
      }

   


   Customer customerObj(l_customerid);

   if (customerObj.deleteCustomerDetails() == FAILED)
   {
    cout<<"delete Customer Details Failed"<<endl;
     return FAILED;
   }
}
int CustomerController :: initiateViewCustomer()
{
string l_customerid;


}
