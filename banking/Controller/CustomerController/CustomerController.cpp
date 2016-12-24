#include "CustomerController.h"
#include "../../AppClasses/Customer/Customer.h"
#include "../../GlobalDefs/GlobalDefs.h"
#include "../../UI/CustomerUI/CustomerUI.h"
#include "../../Model/DB.h"
#include "../../Validation/Validation.h"
#include <iostream>
//#include "../UI/MainUI/MainUI.h"
#include <sstream>
#include <iomanip>
#include <string>
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
   string l_email;
  /* if(CustomerUI::getCustomerId(l_customerid) == FAILED)
   {
     //cout<<"\n\nInvalid Customer Details Provided";
     return FAILED;
   }*/

   if(CustomerUI::getCustomerName(l_customername) == FAILED)
   {
     //cout<<"\n\nInvalid Customer Age Details Provided";
     return FAILED;
   } 
   bool validate;
   cout<<endl<<endl;
   string age;
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"                  Enter Your Age :  "<<RESET;
			      
// cout<<"Enter Your Age : ";
   cout<<BOLDMAGENTA;
   cin>>age;
   validate = Validation::ageValidation(age);
   while(validate!=true)
        {
                cout<<BOLDRED<<left<<setw(20)<<"                         Please enter Valid Age  : "<<RESET;
                cout<<BOLDMAGENTA;
            //  cout<<"Please enter Valid Name : ";
                cin.ignore();
		getline(cin,age);
                validate = Validation::ageValidation(age);
        }  


   cout<<BOLDBLACK;
   cout<<endl;
     

   if(CustomerUI::getCustomerPincode(l_customerpincode) == FAILED)
   {
     //cout<<"\n\nInvalid pincode  Provided";
     return FAILED;
   }
  if(CustomerUI::getEmail(l_email) == FAILED)
   {
     //cout<<"\n\nInvalid email  Provided";
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
   
   int age1; 
   (istringstream(age) >> age1);
   if(age1 < 18)
   {
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
   }
  else
    {
      goto b;
    }    
   /* if(CustomerUI::getJointCustomerName(l_jointname) == FAILED)
   {
     //cout<<"\n\nInvalid Customer Age Details Provided";
     return FAILED;
   }*/

  b: if(CustomerUI::getCustomerMobileNumber(l_number) == FAILED)
   {
     //cout<<"\n\nInvalid Customer Age Details Provided";
     return FAILED;
   }


   Customer customerObj(l_customerid,l_customername,l_customerpincode,l_number,l_address,l_dob,l_pan,l_guranteer_name,l_guranteer_accno,l_jointname,l_email);
   if (DB::insertCustomer(customerObj) == FAILED)
   { 
       cout<<"                                   Adding Customer Details Failed"<<endl<<endl;
	   			               CustomerController :: initiateCustomerRegistration();
					        
         return FAILED; 
   }
    // cout<<"                               Welcome To QCity Bank"<<endl;
      
    // cout<<"customer id is  :"<<customerObj.getCustomerId();
    // cout<<"                                       Customer Succesfully Added "<<endl;

   //  cout<<"                               Note : Please Note Your CustomerID"<<endl;
                                
}


/*
int CustomerController :: initiateViewCustomer()
{	
      
        string l_customerid ;
        cout<<BOLDBLACK;
        long int customerInt;
        bool cust=false;
        
       // cout<<"Enter Customer ID :";
 
   while(!cust)
   {
     if(CustomerUI::getCustomerId(l_customerid) == FAILED)
      {
      // cout<<"\n\nInvalid Customer ID Provided";
       return FAILED;
      }


      stringstream(l_customerid) >> customerInt;

     if(DB::checkCustomer(customerInt)==FAILED)
  {
    cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Invalid Customer id...."<<RESET<<endl<<endl;
     cust=false;
  }
  else { cust=true; }
  }
 Customer  customerObj(l_customerid);
   Account accountobj;

   if (DB::viewCustomer(customerObj,accountobj) == FAILED)
   {
    cout<<"View Customer Details Failed"<<endl;
     return FAILED;
   }
  cout<<"****Detail For Customer****"<<endl<<endl;;
 

     
cout<<"customer id is  :" <<customerObj.getCustomerId()<<endl;
 cout<<"Account No is   :"<<accountobj.getAccountNo()<<endl;
 cout<<"AccountBal is   :"<<accountobj.getAccountBalance()<<endl;
 cout<<"customer Name is  : " <<customerObj.getCustomerName()<<endl;
cout<<"customer Number is  :"<<customerObj.getCustomerMobileNumber()<<endl;
cout<<"customer Address is  :"<<customerObj.getCustomerAddress()<<endl;
 //   cout<<"Detail For Customer";
	
   }  


*/


		

/* 
   if (customerObj.addCustomerDetails() == FAILED)
   {
     //cout<<"Adding Customer Details Failed"<<endl;
     return FAILED;
   }

   cout<<"Customer Details Succesfully Added ..."<<endl;
   return SUCCESS;

  
}

 */


int CustomerController :: initiateDeleteCustomer()
{

     string l_customerid ;
     long int customerInt;
     cout<<BOLDBLACK;
     bool cust=false;
     //cout<<"Enter Customer ID :";
    
    while(!cust)
   {
     if(CustomerUI::getCustomerId(l_customerid) == FAILED)
      {
       cout<<"\n\nInvalid Customer ID Provided";
       return FAILED;
      }


      stringstream(l_customerid) >> customerInt;

     if(DB::checkCustomer(customerInt)==FAILED)
  {
    cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Invalid Customer id...."<<RESET<<endl<<endl;
     cust=false;
  }
  else { cust=true; }
  } 

   Customer customerObj(l_customerid);

   if (DB::deleteCustomer(customerObj) == FAILED)
   {
     cout<<"delete Customer Details Failed"<<endl;
     return FAILED;
   }
    cout<<"Thank You For Banking With Us.......";	
}


int CustomerController :: initiateUpdateCustomer()
{
       string l_customerid;
      cout<<BOLDBLACK;
   //   cout<<"Enter Customer ID";
      
      if(CustomerUI::getCustomerId(l_customerid) == FAILED)
      {
       cout<<"\n\nInvalid Customer ID Provided";
       return FAILED;
      }
        Customer  customerObj(l_customerid);
	string l_pincode;
	string l_Address;
	string l_MobileNo;
	int choice;
	char c;
 	vector<Account>acc_list;
	do{
        cout<<endl;
	cout<<"Enter 1 to Update Phone Number"<<endl;
	cout<<"Enter 2 to Update Address"<<endl;
	cout<<"Enter 3 to Update pincode"<<endl;
	cin>>choice;
	
		if(choice==1)
		{
	if(CustomerUI::getCustomerMobileNumber(l_MobileNo)==FAILED)
		{
			cout<<"can not update details";
                        return FAILED;

		}
		//	return SUCCESS;
			 if( DB::updateCustomerMobileNumber(l_MobileNo ,l_customerid)==FAILED)
               		 {       cout<<"can not update details";
                       		 return FAILED;
			}
			//	return SUCCESS;
		
		}

		if(choice==2)
		{
	if( CustomerUI::getCustomerAddress( l_Address)==FAILED)
			{
				return FAILED;
			}
			
	 if( DB::updateCustomerAddress(l_Address,l_customerid)==FAILED)
                         {       cout<<"can not update details";
                                 return FAILED;
                         }
			

		}	
		if(choice==3)
		{
			 if(CustomerUI::getCustomerPincode(l_pincode)==FAILED)
			    {	return FAILED; }
				
			if( DB::updateCustomerPincode( l_pincode,l_customerid)==FAILED)
			{	cout<<"can not update details";
				return FAILED;
			}
                        
		}
				
	 cout<<"do you Want to continue press y/n :";
        cin>>c;
        }while(c =='y');

   if (DB::viewCustomer(customerObj,acc_list) == FAILED)
   {
    cout<<"View Customer Details Failed"<<endl;
     return FAILED;
   }
//        cout<<"****Detail For Customer****"<<endl<<endl;;
if(acc_list.size()==0)
{
Account Acc_obj;
Acc_obj.setAccountNo("No Account taken");
Acc_obj.setAccountBalance(00);
Acc_obj.setCreditNo("NA");
Acc_obj.setDebitNo("NA");
acc_list.push_back(Acc_obj);
}
   CustomerUI::displayCustomerDetails(customerObj,acc_list);
       // {
        //cout<<"View Customer Details Failed"<<endl;
    // return FAILED;
      //  }

return SUCCESS;

}
int CustomerController :: initiateViewCustomer()
{

        string l_customerid ;
        cout<<BOLDBLACK;
        long int customerInt;
        bool cust=false;
        vector<Account>acc_list;
       // cout<<"Enter Customer ID :";

   while(!cust)
   {
     if(CustomerUI::getCustomerId(l_customerid) == FAILED)
      {
      // cout<<"\n\nInvalid Customer ID Provided";
       return FAILED;
      }


      stringstream(l_customerid) >> customerInt;

     if(DB::checkCustomer(customerInt)==FAILED)
  {
    cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Invalid Customer id...."<<RESET<<endl<<endl;
     cust=false;
  }
  else { cust=true; }
  }
 Customer  customerObj(l_customerid);


   if (DB::viewCustomer(customerObj,acc_list) == FAILED)
   {
    cout<<"View Customer Details Failed"<<endl;
     return FAILED;
   }
//	  cout<<"****Detail For Customer****"<<endl<<endl;;
if(acc_list.size()==0)
{
Account Acc_obj;
Acc_obj.setAccountNo("No Account taken");
Acc_obj.setCreditNo("NA");
Acc_obj.setDebitNo("NA");
Acc_obj.setAccountBalance(00);
acc_list.push_back(Acc_obj);
}
   CustomerUI::displayCustomerDetails(customerObj,acc_list);
//	{
//	cout<<"View Customer Details Failed"<<endl;
  //   return FAILED;
//	}
return SUCCESS;
}


