#include "AccountUI.h"
#include <sstream>
#include "../../GlobalDefs/GlobalDefs.h"
int AccountUI::getAccountNo(string& p_AccountNo)
        {
                //string l_AccountNo;
                cout<<"Enter Your Account Number"<<endl;
                cin>>p_AccountNo;
                return SUCCESS;
        }

int AccountUI::getTransferAccountNo(string& l_AccountNo1,string& l_AccountNo2)
	{
	cout<<"Enter Your Account Number from which you want to transfer money:"<<endl;
	cin>>l_AccountNo1;
	cout<<"Enter Your Account Number to which you want to transfer money:"<<endl;
	cin>>l_AccountNo2;
	return SUCCESS;
	}

int AccountUI::getCustomerId(string& p_CustomerId)
{
   string l_CustomerId;
   cout<<"\n\nEnter Customer ID:"<<endl;
   cin>>l_CustomerId;
  /* if ( !(istringstream(l_CustomerId) >> p_CustomerId) )
   {
    cout<<"\n\nInvalid Customer ID, Only digits are Accepted"<<endl;
    return FAILED;
   }*/
  p_CustomerId=l_CustomerId;
   return SUCCESS;
}
 
int AccountUI::getAccountType(string& p_AccountType)
{
   string l_AccountType;
   int 

   //getline(cin,l_AccountType);
   cin>>l_AccountType;
   if(l_AccountType == "")
   {
     cout<<"\n\nAccount type Name cannot be empty";
     return FAILED;
   }

   p_AccountType = l_AccountType;

   return SUCCESS;
}

int AccountUI::getJoinName(string& p_joinName)
{

   char j;
   cout<<"if u want to open joint account then press y or else n"<<endl;
   cin>>j;
   if(j=='y')
   {
    cout<<"Enter join account holder name"<<endl;
    cin>>p_joinName;
     return SUCCESS;
   }
   return FAILED;
} 



int AccountUI::getAccountBalance(int& p_AccountBalance)
{
   int l_AccountBalance;
   cout<<"\n\nEnter initial amount:"<<endl;
   cin>>l_AccountBalance;
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
   cout<<"account number for new created account type is:"<<acc_obj.getAccountNo()<<endl;
   return SUCCESS;
}

int AccountUI::getCredit(char& credit)
{
  
   cout<<"if u want credit card then press y or else n"<<endl;
   cin>>credit;
   return SUCCESS;
}

int AccountUI::getDebit(char& debit)
{
  
   cout<<"if u want to debit card then press y or else n"<<endl;
   cin>>debit;
   
   return SUCCESS;
}

int AccountUI::getAmount(int& p_Amount)
{
   
   cout<<"\n\nEnter amount:"<<endl;
   cin>>p_Amount;
  /* if ( !(istringstream(l_CustomerId) >> p_CustomerId) )
   {
    cout<<"\n\nInvalid Customer ID, Only digits are Accepted"<<endl;
    return FAILED;
   }*/
  
   return SUCCESS;
}












