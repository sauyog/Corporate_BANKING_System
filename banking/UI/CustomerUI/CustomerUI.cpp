#include "CustomerUI.h"
#include <sstream>
#include "../../AppClasses/Customer/Customer.h"
#include "../../AppClasses/Account/Account.h"
#include "../../GlobalDefs/GlobalDefs.h"
#include <string>
#include "../../Validation/Validation.h"
#include <sstream>
#include <iomanip>
#include <unistd.h>
//#include "../../Model/DB.h"
//using namespace std;

int CustomerUI::getCustomerName(string& p_CustomerName)
{  
   bool validate;
   string l_CustomerName;
    cout<<"**************************************ENTER CUSTOMER PERSONAL INFORMATION*************************************"<<endl<<endl<<endl;

   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"             Enter Customer Name : "<<RESET;
					      						       
   // cout<<"\n\nEnter Customer Name :";
   cin.ignore();
   cout<<BOLDMAGENTA; 
   getline(cin,l_CustomerName);
   cout<<RESET<<endl;

   validate = Validation::stringValidation(l_CustomerName);
   while(validate!=true)
	{
                cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Please Enter Valid Customer Name : "<<RESET;
						
 	        cout<<BOLDMAGENTA;                 				    
		cin.ignore();
                
	     //	cout<<BOLDMAGENTA;
 	        getline(cin,l_CustomerName);
                 cout<<RESET<<endl;

		validate = Validation::stringValidation(l_CustomerName);
	}

   if(l_CustomerName == " ")
   {
     cout<<BOLDRED<<"Customer Name cannot be empty...!!"<<endl;
	      	
     return FAILED;
   }

      p_CustomerName = l_CustomerName;
  
      return SUCCESS;
}

int CustomerUI::getEmail(string& p_email)
{
string l_email;
cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"                 Enter Email ID  : "<<RESET;
						
cout<<BOLDMAGENTA;
cin>>l_email;
cout<<RESET<<endl;
p_email = l_email;
     return SUCCESS;

}


int CustomerUI::getCustomerId(string& p_CustomerId)
{
   bool validate;
   string l_CustomerId;
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"              Enter Customer ID  : "<<RESET;
		  
   cout<<BOLDMAGENTA;
    cin>>l_CustomerId;
    cout<<RESET<<endl<<endl;

/*    validate=Validation::CI(l_CustomerId);
    while(validate!=true)
        {
                cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Please asfdagenter Valid Customer ID : "<<RESET;
                cout<<BOLDMAGENTA;
                //cout<<"Please enter Valid mobile number(10 digits only) :";
                cin.ignore();
                //cout<<BOLDMAGENTA;
                cin>>l_CustomerId;
              
                 cout<<RESET<<endl<<endl;

                validate=Validation::CI(l_CustomerId);
        }
*/
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
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"             Enter mobile number : "<<RESET;
  		                  
   					      	
  // cout<<"\n\nEnter mobile number :";
   cout<<BOLDMAGENTA;
   cin>>l_number;
   cout<<endl<<endl;
   cout<<RESET;  
    
        validate = Validation::mobileValidation(l_number);
	while(validate!=true)
	{
		cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Please enter Valid mobile number(10 digits only) :"<<RESET;
						      
                cout<<BOLDMAGENTA;
 		//cout<<"Please enter Valid mobile number(10 digits only) :";
		cin.ignore();
 		//cout<<BOLDMAGENTA;
	        cin>>l_number;
                cout<<BOLDBLACK;
		 cout<<RESET<<endl<<endl;

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
    bool validate;
    string l_address;
    cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"                   Enter address : "<<RESET;
						  
    cout<<BOLDMAGENTA;						       							
//   cout<<"\n\nEnter address:";
    cin.ignore();
//   cout<<BOLDMAGENTA;
    getline( cin,l_address);
    cout<<RESET<<endl<<endl;

   validate = Validation::stringValidation(l_address);
   while(validate!=true)
        {
                cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"      Please Enter Valid Address : "<<RESET;
	  						    
                cout<<BOLDMAGENTA;
                cin.ignore();

             // cout<<BOLDMAGENTA;
                getline(cin,l_address);
                 cout<<RESET<<endl<<endl;

                validate = Validation::stringValidation(l_address);
        }

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
    cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Enter date of birth(DD-MMM-YYYY) : "<<RESET;
							
//    cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"\n\n                             Format(DD-MMM-YYYY) :"<<RESET;					                
//   cout<<"\n\nEnter date of birth :";
   cout<<BOLDMAGENTA;
   cin>>l_dob;
   cout<<RESET<<endl<<endl;
   validate = Validation::dobValidation(l_dob);
   while(validate!=true)
        {
              //  cout<<BOLDAGENTA;
		cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"     Enter Valid DOB(DD-MMM-YYYY) : "<<RESET;
                
                cin.ignore();
                cin>>l_dob;
 	//	cout<<RESET;
                validate = Validation::dobValidation(l_dob);
        } 

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
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"            Enter pancard number : "<<RESET;
					
 // cout<<BOLDMAGENTA;		                                     
//   cout<<"\n\nEnter pancard number:";
   cin.ignore();
   cout<<BOLDMAGENTA;
   getline(cin,l_pan);
   cout<<RESET<<endl<<endl;

   validate = Validation::panValidation(l_pan);
   while(validate!=true)
        {
		cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"   Please enter Valid PAN number : "<<RESET;
							     						
                cout<<BOLDMAGENTA;                
//               cout<<"Please enter Valid PAN number : ";
                //cin.ignore();
 		//cout<<BOLDMAGENTA;
                cin>>l_pan;
                  cout<<RESET<<endl<<endl;

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
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"             Enter guranteername : "<<RESET; 
                                                   
//   cout<<"\n\nEnter guranteername :";
   cin.ignore();

   cout<<BOLDMAGENTA;
   getline(cin,l_guranteername);
   cout<<RESET<<endl<<endl;
   validate = Validation::stringValidation(l_guranteername);
   while(validate!=true)
        {
                cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Please enter Valid Guranteer Name: "<<RESET;
						            		 
 		cout<<BOLDMAGENTA;			                     
           //   cout<<"Please enter Valid Name : ";
                cin.ignore();
                 cout<<RESET<<endl<<endl;

	
                getline(cin,l_guranteername);
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
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"  Enter Guranteer account number : "<<RESET;
						 					
 						  
   // cout<<"\n\nEnter Guranteer account number:";
   cout<<BOLDMAGENTA;
  cin>>l_guranteeraccno;
   cout<<RESET<<endl<<endl;

  
   validate = Validation::accnoValidation(l_guranteeraccno);
   while(validate!=true)
        {
       		cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"                                                  Account Number Doesn't Exist!!!"<<RESET<<endl;
							    
                  cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Please enter Valid QcityBank Account Number : "<<RESET;
							       			                                                                                                             
//                cout<<"Account Number Doesn't Exist!!!\n Please enter Valid QcityBank Account Number : ";
                cin.ignore();

		cout<<BOLDMAGENTA;
                cin>>l_guranteeraccno;
                cout<<RESET<<endl<<endl;
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
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"       Enter area pincode number : "<<RESET;
					
                                                       
//   cout<<"\n\nEnter area pincode number :";
   cout<<BOLDMAGENTA;
   cin>>l_customerpincode;
   cout<<RESET<<endl;
   validate = Validation::pincodeValidation(l_customerpincode);
        while(validate!=true)
        {
                cout<<setw(30)<<""<<left<<setw(30)<<BOLDRED<<"Please enter Valid PinCode(6 Digits only) :"<<RESET;
 	        cout<<BOLDMAGENTA;                     
                                                                
             // cout<<"Please enter Valid PinCode(6 Digits only) :";
                cin.ignore();
  	//	cout<<BOLDMAGENTA;
                 cin>>l_customerpincode;
                cout<<RESET<<endl;
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
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"        Enter Joint Account Name : "<<RESET;
					
              	 			               
// cout<<"\n\nEnter Joint Account Name:";
   cout<<BOLDMAGENTA;
   getline(cin,l_jointcustomername);
   validate = Validation::stringValidation(l_jointcustomername);
   while(validate!=true)
        {
		cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"         Please enter Valid Name : "<<RESET;
							     						
            //  cout<<"Please enter Valid Name : ";
                cin.ignore();
		cout<<BOLDMAGENTA;
                getline(cin,l_jointcustomername);
                cout<<RESET<<endl<<endl;
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


void CustomerUI::displayMsg()
{
cout<<"Invalid Customer ID";
}

void CustomerUI::displayCustomerDetails(Customer customerObj , vector<Account> acc_list)
{

    cout<<BGCYAN<<"*****************************************************CUSTOMER INFORMATION***********************************************************"<<RESET<<endl<<endl<<endl;

cout<<"customer id"<<"\t"<<"customer Name"<<"\t"<<"Account No"<<"\t"<<"Account Type"<<"\t"<<"AccountBal"<<"\t"<<"Credit Card No"<<"\t"<<"Debit Card No"<<"\t"<<"customer Address"<<"\t"<<"customer Number"<<endl<<endl;

 for(int i=0;i<acc_list.size();i++)
   {	
cout<<BLUE<<customerObj.getCustomerId()<<"\t\t"<<customerObj.getCustomerName()<<"\t\t"<<acc_list[i].getAccountNo()<<"\t\t"<<acc_list[i].getAccountType()<<acc_list[i].getAccountBalance()<<"\t\t"<<acc_list[i].getCreditNo()<<"\t\t"<<acc_list[i].getDebitNo()<<"\t\t"<<customerObj.getCustomerAddress()<<"\t\t\t"<<customerObj.getCustomerMobileNumber()<<RESET<<endl<<endl;
//cout<<customerObj.getCustomerId()<<"    \t"<<acc_list[i].getAccountNo()<<"     \t"<<acc_list[i].getAccountBalance()<<"   \t"<<acc_list[i].getCreditNo()<<"   \t"<<acc_list[i].getDebitNo()<<"\t   "<<customerObj.getCustomerName()<<"\t   "<<customerObj.getCustomerMobileNumber()<<"\t  "<<customerObj.getCustomerAddress()<<"  \t"<<endl;
   }
}
