#include "CustomerUI.h"
#include <sstream>
#include "../../GlobalDefs/GlobalDefs.h"
#include <string>
#include "../../Validation/Validation.h"
//#include "../../Model/DB.h"
//using namespace std;

int CustomerUI::getCustomerName(string& p_CustomerName)
{  
   bool validate;
   string l_CustomerName;
   cout<<"\n\nEnter Customer Name :";
   cin.ignore();
   getline(cin,l_CustomerName);
   validate = Validation::stringValidation(l_CustomerName);
   while(validate!=true)
	{
		cout<<"Please enter Valid Name : ";
		cin.ignore();
		cin>>l_CustomerName;
		validate = Validation::stringValidation(l_CustomerName);
	}

   if(l_CustomerName == " ")
   {
     cout<<"\n\nCustomer Name cannot be empty"<<endl;
     return FAILED;
   }

      p_CustomerName = l_CustomerName;
  
      return SUCCESS;
}

int CustomerUI::getCustomerId(string& p_CustomerId)
{
   string l_CustomerId;
 //  cout<<"\n\nEnter Customer ID  :";
   cin>>l_CustomerId;
//  if ( !(istringstream(l_CustomerId)>>p_CustomerId) )
 // {
 //  cout<<"\n\nInvalid Customer ID";
  // return FAILED;
 // }
    p_CustomerId = l_CustomerId;
     return SUCCESS;
}


int CustomerUI::getCustomerMobileNumber(string& p_number)
{  
   bool validate; 
   string l_number;
   cout<<"\n\nEnter mobile number :";
   cin>>l_number;
   cout<<endl<<endl;   
        validate = Validation::mobileValidation(l_number);
	while(validate!=true)
	{
		cout<<"Please enter Valid mobile number(10 digits only) :";
		cin.ignore();
		cin>>l_number;
		cout<<endl;
		validate = Validation:: mobileValidation(l_number);
	}
  

   
   /*
   if (!(istringstream(l_number)>>p_number) )
  {
      cout<<"\n\nInvalid mobile number ";
      return FAILED;
   }*/
     p_number = l_number;
      return SUCCESS;
}

int CustomerUI::getCustomerAddress(string& p_address)
{
   string l_address;
   cout<<"\n\nEnter address:";
   cin.ignore();
   getline( cin,l_address);

  // getline(cin,l_address);
  // cin.ignore(' ', 50);
  /* if ( !(istringstream(l_address) >> p_address) )
   {
    cout<<"\n\n address not valid ";
    return FAILED;
   } */
    p_address = l_address;
   return SUCCESS;
}

int CustomerUI::getCustomerDob(string& p_dob )
{  
   bool validate;
   string l_dob;
   cout<<"\n\nEnter date of birth :";
   cin>>l_dob;
  /* validate = Validation::dobValidation(l_dob);
   while(validate!=true)
        {
                cout<<"Please enter Valid Date Of Birth : ";
                cin.ignore();
                cin>>l_dob;
                validate = Validation::dobValidation(l_dob);
        }
*/
  // if ( !(istringstream(l_dob) >> p_dob) )
  // {
   // cout<<"\n\n date of birth is not valid ";
   // return FAILED;
   //}
   p_dob = l_dob;
   return SUCCESS;
}

int CustomerUI::getCustomerPan(string& p_pan)
{
   bool validate;
   string l_pan;
   cout<<"\n\nEnter pancard number:";
   cin.ignore();
  getline(cin,l_pan);
   validate = Validation::panValidation(l_pan);
   while(validate!=true)
        {
                cout<<"Please enter Valid PAN number : ";
                cin.ignore();
                cin>>l_pan;
                validate = Validation::panValidation(l_pan);
        }



// if ( !(istringstream(l_pan) >> p_pan) )
// {
// cout<<"\n\nInvalid pancard number ";
 //return FAILED;
// }
   p_pan = l_pan;
   return SUCCESS;
 }

int CustomerUI::getGuranteerName(string& p_guranteername)
{  
   bool validate;
   string l_guranteername;
   cout<<"\n\nEnter guranteername :";
   cin.ignore();
   getline(cin,l_guranteername);
   validate = Validation::stringValidation(l_guranteername);
   while(validate!=true)
        {
                cout<<"Please enter Valid Name : ";
                cin.ignore();
                cin>>l_guranteername;
                validate = Validation::stringValidation(l_guranteername);
        }





/*   validate = stringValidation(l_guranteername);
   while(validate!=true)
        {
                cout<<setw(50)<<"Please enter Valid Guranteer Name : ";
                cin.ignore();
                cin>>l_guranteername;
                validate = stringValidation(l_guranteername);
        }

*/



  // if ( !(istringstream(l_guranteername) >> p_guranteername) )
  // {
   // cout<<"\n\nGuranteer name not valid ";
   // return FAILED;
  // }

   p_guranteername = l_guranteername;
   return SUCCESS;
}

int CustomerUI::getGuranteerAccno(string& p_guranteeraccno)
{
   bool validate;
   string l_guranteeraccno;
   cout<<"\n\nEnter Guranteer account number:";
   getline(cin,l_guranteeraccno);
  
   validate = Validation::accnoValidation(l_guranteeraccno);
   while(validate!=true)
        {
                cout<<"Account Number Doesn't Exist!!!\n Please enter Valid QcityBank Account Number : ";
                cin.ignore();
                cin>>l_guranteeraccno;
                validate = Validation::accnoValidation(l_guranteeraccno);
        }
  



 //  if ( !(istringstream(l_guranteeraccno) >> p_guranteeraccno) )
 //  {
 //  cout<<"\n\nAccount number not valid: ";
  // return FAILED;
  // }
   p_guranteeraccno = l_guranteeraccno;
   return SUCCESS;
}





int CustomerUI::getCustomerPincode(string& p_customerpincode)
{ 
   bool validate;
   string l_customerpincode;
   cout<<"\n\nEnter area pincode number :";
   cin>> l_customerpincode;
   validate = Validation::pincodeValidation(l_customerpincode);
        while(validate!=true)
        {
                cout<<"Please enter Valid PinCode(6 Digits only) :";
                cin.ignore();
                cin>>l_customerpincode;
                validate = Validation:: pincodeValidation(l_customerpincode);
        }
   

/*
   getline(cin,l_customerpincode);
   if ( !(istringstream(l_customerpincode) >> p_customerpincode) )
  {
   cout<<"\n\n pincode not valid: ";
   return FAILED;
   }*/
   p_customerpincode = l_customerpincode;
   return SUCCESS;
}


int CustomerUI::getJointCustomerName(string& p_jointcustomername)
{
   bool validate;
   string l_jointcustomername;
   cout<<"\n\nEnter Joint Account Name:";
   getline(cin,l_jointcustomername);
   validate = Validation::stringValidation(l_jointcustomername);
   while(validate!=true)
        {
                cout<<"Please enter Valid Name : ";
                cin.ignore();
                cin>>l_jointcustomername;
                validate = Validation::stringValidation(l_jointcustomername);
        }


  // if ( !(istringstream(l_jointcustomername) >> p_jointcustomername) )
   //{
   // cout<<"\n\nInvalid joint account Name: ";
   // return FAILED;
  // }
  p_jointcustomername = l_jointcustomername;
   return SUCCESS;
}



