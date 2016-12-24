#include "AccountUI.h"
#include <iomanip>
#include <sstream>
#include "../../GlobalDefs/GlobalDefs.h"
#include "../../Validation/Validation.h"
void AccountUI::displayMsg(string msg)
{
   cout<<setw(40)<<BOLDRED<<msg<<RESET<<endl<<endl;
}

void AccountUI::getConfirmation(string msg,char &a)
{
  cout<<setw(30)<<""<<BOLDBLUE<<left<<setw(30)<<msg<<RESET;
  bool con=false;
  while(!con)
 {
   cout<<BOLDMAGENTA;
   cin>>a;
   cout<<RESET<<endl;
   if(a=='Y' || a=='y' || a=='N' || a=='n')
    {
      con=true;
    }
   else
    {
     cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Invalid option...Enter correct option"<<RESET<<endl<<endl;
     }
  }  
}




int AccountUI::getAccountNo(string& p_AccountNo)
        {
                //string l_AccountNo;
		cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(40)<<"Enter Your Account Number:"<<RESET;
         
                cout<<BOLDMAGENTA;
 	 	cin>>p_AccountNo;
                cout<<RESET<<endl;
                return SUCCESS;
        }

int AccountUI::getTransferAccountNo(string& l_AccountNo1,string& l_AccountNo2)
	{
	cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Enter Your Account Number from which you want to transfer money:"<<RESET;
	cout<<BOLDMAGENTA;
	cin>>l_AccountNo1;
	cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Enter Your Account Number to which you want to transfer money:"<<RESET;
	cout<<BOLDMAGENTA;
	cin>>l_AccountNo2;
         cout<<RESET<<endl;
	return SUCCESS;
	}

int AccountUI::getCustomerId(string& p_CustomerId)
{  
         bool validate;
         string l_CustomerId;
	 cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Enter Customer ID:"<<RESET; 
 	 cout<<BOLDMAGENTA;
 	 cin>>l_CustomerId;
         cout<<RESET<<endl;
       /*  validate=Validation::CI(l_CustomerId);
    while(validate!=true)
        {
                cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Please enter Valid Customer ID :"<<RESET;
                cout<<BOLDMAGENTA;
                //cout<<"Please enter Valid mobile number(10 digits only) :";
                cin.ignore();
                //cout<<BOLDMAGENTA;
                cin>>l_CustomerId;

                 cout<<RESET<<endl<<endl;

                validate = Validation::CI(l_CustomerId);
        }

*/

/* if ( !(istringstream(l_CustomerId) >> p_CustomerId) )
   {
    cout<<"\n\nInvalid Customer ID, Only digits are Accepted"<<endl;
    return FAILED;
   }*/
  p_CustomerId=l_CustomerId;
   return SUCCESS;
}
 
/*int AccountUI::getAccountType(string& p_AccountType)
{
   string l_AccountType;
  cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Enter type of account:"<<RESET;
   getline(cin,l_AccountType);
    cout<<BOLDMAGENTA;
    cin>>l_AccountType;
     cout<<RESET<<endl;
   if(l_AccountType == "")
   {
   cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Account type name cannot be empty....!!"<<RESET<<endl<<endl; 
    return FAILED;
   }

   p_AccountType = l_AccountType;

   return SUCCESS;
}
*/

int AccountUI::getAccountType(int& type)
{
 int con=0;
 do
  {
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Select type of account:"<<RESET<<endl;
   cout<<setw(30)<<""<<BOLDBLUE<<left<<setw(30)<<"Enter 1 for saving account:"<<RESET<<endl;
   cout<<setw(30)<<""<<BOLDBLUE<<left<<setw(30)<<"Enter 2 for current account:"<<RESET<<endl;
   cout<<setw(30)<<""<<BOLDBLUE<<left<<setw(30)<<"Enter 3 for pensioner account:"<<RESET<<endl;
    cout<<setw(30)<<""<<BOLDBLUE<<left<<setw(30)<<"Enter 4 for salary account:"<<RESET<<endl;
    cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Enter option: "<<RESET;
     cout<<BOLDMAGENTA;
     Validation::getMenu(type);

     cout<<RESET<<endl;




/*
 stringstream ss;
        ss << h_customerid;
        string str = ss.str();
*/

   if(type==1 || type==2 || type==3 || type==4)
   {

   con=1;

     return SUCCESS;
   }

  else
  {
   cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Please enter proper option....!!"<<RESET<<endl<<endl;
   con=0;
  }
 }
 while(con==0);


}
                   




int AccountUI::getJoinName(string& p_joinName)
{
   bool validate;
   char j;
    cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"If you want to open joint account then press y or else n:"<<RESET;
   cout<<BOLDMAGENTA;
   cin>>j;
    cout<<RESET<<endl;
   if(j=='y')
   {
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Enter join account holder name:"<<RESET;
   cout<<BOLDMAGENTA;
    cin>>p_joinName;
     validate = Validation::stringValidation(p_joinName);
   while(validate!=true)
        {
                cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Please enter Valid Name : "<<RESET;

            //  cout<<"Please enter Valid Name : ";
                cin.ignore();
                cout<<BOLDMAGENTA;
                getline(cin,p_joinName);
                cout<<RESET<<endl<<endl;
                validate = Validation::stringValidation(p_joinName);
        }

   cout<<RESET<<endl;
     return SUCCESS;
   }
  return SUCCESS;
} 



int AccountUI::getAccountBalance(float& p_AccountBalance)
{
   float l_AccountBalance;
    cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Enter initial amount:"<<RESET;
    cout<<BOLDMAGENTA;
  //  cin>>l_AccountBalance;
    Validation::getNum(l_AccountBalance);

    cout<<RESET<<endl;
  
  /* if ( !(istringstream(l_AccountBalance) >> p_AccountBalance) )
   {
    cout<<"\n\nInvalid Amount, Only digits are Accepted"<<endl;
    return FAILED;
   }*/
  

   p_AccountBalance=l_AccountBalance;
   return SUCCESS;
}

int AccountUI :: displayNewAccountDetails(Account acc_obj)
{
  cout<<setw(30)<<BOLDBLACK<<" YOUR ACCOUNT NUMBER IS:"<<RESET<<BGRED<<acc_obj.getAccountNo()<<RESET<<endl<<endl<<endl;
   cout<<setw(30)<<BOLDBLACK<<" YOUR CREDIT NUMBER IS:"<<RESET<<BGRED<<acc_obj.getCreditNo()<<RESET<<endl<<endl<<endl;
   cout<<setw(30)<<BOLDBLACK<<" YOUR DEBIT NUMBER IS:"<<RESET<<BGRED<<acc_obj.getDebitNo()<<RESET<<endl<<endl<<endl;



    return SUCCESS;
}

int AccountUI::getCredit(char& credit)
{
  
 cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"If you want credit card then press y or else n"<<RESET;
  cout<<BOLDMAGENTA;
   cin>>credit;
  cout<<RESET<<endl;
   return SUCCESS;
}

int AccountUI::getDebit(char& debit)
{
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"If you want debit card then press y or else n : "<<RESET;
  cout<<BOLDMAGENTA;
   cin>>debit;
  cout<<RESET<<endl;
   return SUCCESS;

}

int AccountUI::getAmount(float& p_Amount)
{
   

         
    cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Enter amount:"<<RESET;
    cout<<BOLDMAGENTA;
  //  cin>>l_AccountBalance;
    
    Validation::getNum1(p_Amount);

    cout<<RESET<<endl;

   
  /* if ( !(istringstream(l_CustomerId) >> p_CustomerId) )
   {
    cout<<"\n\nInvalid Customer ID, Only digits are Accepted"<<endl;
    return FAILED;
   }*/
  
   return SUCCESS;
}

int AccountUI::askForAccount()
{
   char a;
  cout<<setw(30)<<BOLDBLACK<<left<<setw(30)<<"do u have account, press y/n:..."<<RESET;
  cout<<BOLDMAGENTA;
   cin>>a;
  cout<<RESET<<endl;
  if(a=='y')
 {
  return SUCCESS;
 }
return FAILED;
}

int AccountUI::askForLocker()
{
   char a;
  cout<<setw(30)<<BOLDBLACK<<left<<setw(30)<<"do u want locker, press y/n:..."<<RESET;
  cout<<BOLDMAGENTA;
  
   cin>>a;
   cout<<RESET<<endl;
  if(a=='y')
 {
  return SUCCESS;
 }
return FAILED;
}




int AccountUI::getFdAmount(float& f_amount)
{
   
    cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Enter amount for fixed deposit:"<<RESET;
    cout<<BOLDMAGENTA;
  //  cin>>l_AccountBalance;
    Validation::getNum2(f_amount);

    cout<<RESET<<endl;

   return SUCCESS;
}

int AccountUI::getFdDuration(int& type)

/*
{
  cout<<setw(30)<<BOLDBLACK<<left<<setw(30)<<"enter fd duration in months"<<RESET;
    cout<<BOLDMAGENTA;
   cin>>f_duration;
   cout<<RESET<<endl;

   return SUCCESS;
}
*/

{
 int con=0;

 do
  {
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Select duration for fixed deposit:"<<RESET<<endl;
   cout<<setw(30)<<""<<BOLDBLUE<<left<<setw(30)<<"Enter 1 for 3 month fd: "<<RESET<<endl;
   cout<<setw(30)<<""<<BOLDBLUE<<left<<setw(30)<<"Enter 2 for 6 month fd: "<<RESET<<endl;
   cout<<setw(30)<<""<<BOLDBLUE<<left<<setw(30)<<"Enter 3 for 9 month fd: "<<RESET<<endl;
    cout<<setw(30)<<""<<BOLDBLUE<<left<<setw(30)<<"Enter 4 for 12 month fd: "<<RESET<<endl;
    cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Enter option: "<<RESET;
     cout<<BOLDMAGENTA;
      Validation::getMenu(type);

     cout<<RESET<<endl;




/*
 stringstream ss;
        ss << h_customerid;
        string str = ss.str();
*/

   if(type==1 || type==2 || type==3 || type==4)
   {

   con=1;

     return SUCCESS;
   }

  else
  {
   cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Please enter proper option....!!"<<RESET<<endl<<endl;
   con=0;
  }
 }
 while(con==0);


}



int AccountUI::getFdId(string& fdId)
{
  cout<<setw(30)<<BOLDBLACK<<left<<setw(30)<<"Enter your FD ID"<<RESET;
  cout<<BOLDMAGENTA;
  cin>>fdId;
   cout<<RESET<<endl;

   return SUCCESS;
}


int AccountUI :: displayNewFdDetails(Account acc_obj,Customer cus_obj)
{
   cout<<setw(30)<<BOLDBLACK<<left<<setw(30)<<" Account number:  "<<RESET<<BOLDBLUE<<acc_obj.getAccountNo()<<RESET<<endl<<endl;

   cout<<setw(30)<<BOLDBLACK<<left<<setw(30)<<" Account holder name :  "<<RESET<<BOLDBLUE<<cus_obj.getCustomerName()<<RESET<<endl<<endl;
   cout<<setw(30)<<BOLDBLACK<<left<<setw(30)<<" FD id :  "<<RESET<<BOLDBLUE<<acc_obj.getFdId()<<RESET<<endl<<endl;
   cout<<setw(30)<<BOLDBLACK<<left<<setw(30)<<"FD amount :  "<<RESET<<BOLDBLUE<<acc_obj.getFdAmount()<<RESET<<endl<<endl;
   cout<<setw(30)<<BOLDBLACK<<left<<setw(30)<<"FD start date :  "<<RESET<<BOLDBLUE<<acc_obj.getFdStartDate()<<RESET<<endl<<endl;

   cout<<setw(30)<<BOLDBLACK<<left<<setw(30)<<"FD maturity date is :  "<<RESET<<BOLDBLUE<<acc_obj.getFdEndDate()<<RESET<<endl<<endl;
   cout<<setw(30)<<BOLDBLACK<<left<<setw(30)<<"FD duration is :  "<<RESET<<BOLDBLUE<<acc_obj.getFdDuration()<<RESET<<endl<<endl;
   if(acc_obj.getLockerId()==0)
   {
   cout<<setw(30)<<BOLDBLACK<<left<<setw(30)<<"Locker ID is  "<<RESET<<BOLDBLUE<<"NA"<<RESET<<endl<<endl;
   }
   else 
   {
    cout<<setw(30)<<BOLDBLACK<<left<<setw(30)<<"Locker ID is  "<<RESET<<BOLDBLUE<<acc_obj.getLockerId()<<RESET<<endl<<endl;
   }

   return SUCCESS;
}

int AccountUI::getFdWithdrawChoice(Account acc_obj)
 {
  char a;
  cout<<setw(30)<<BOLDBLACK<<left<<setw(30)<<"your fd maturity date is:  "<<acc_obj.getFdEndDate()<<RESET<<endl;
  cout<<setw(30)<<BOLDRED<<left<<setw(30)<<"do you still want to continue......press y/n: "<<RESET;
   cout<<BOLDMAGENTA;
  cin>>a;
   cout<<RESET<<endl;

  if(a=='y')
  {
   return SUCCESS;
  }
   return FAILED;
}

int AccountUI::displayBalance(float balance)
{
 cout<<setw(30)<<BOLDBLACK<<left<<setw(30)<<"Your balance is:  "<<"Rs"<<RESET<<BOLDBLUE<<balance<<RESET<<endl<<endl;
 cout<<setw(30)<<BOLDBLUE<<left<<setw(30)<<"THANK YOU.........HAVE A GOOD DAY"<<RESET<<endl;
}
/*
int AccountUI::displayWithdrawOptions(string& choice)

{ 		
		 int flag=0;
		 cout<<"enter the source of transaction::"<<endl<<"bank"<<endl<<"cheque"<<endl<<"creditcard"<<endl<<"debitcard"<<endl;
			 cin>>choice;
		do
		{
			if(choice == "bank"||"cheque"||"creditcard"||"debitcard")
			{	flag=1;
			return SUCCESS;
			}
			else
			{
				cout<<"invalid input"<<endl;
				cout<<"Enter again please"<<endl;
				cin>>choice;
			}
		}while(flag==0);
			
			


		

*/











