#include "BankUI.h"
#include "../../GlobalDefs/GlobalDefs.h"
#include "../../GlobalDefs/ErrorLog.h"
#include "../../AppClasses/Account/Account.h"
#include "../../AppClasses/Customer/Customer.h"
#include "../../AppClasses/Transaction/Transaction.h"
#include <iomanip>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
void BankUI:: removeSpaces(string& input)
{
  int length = input.length();
  for (int i = 0; i < length; i++) 
{
     if(input[i] == ' ')
        //input.erase(i, 1);
        input[i]='_';
}

}

void BankUI::displayCustomerField()
{
cout<<setw(40)<<BGCYAN<<"\033#6CUSTOMER DETAILS                                                                     "<<RESET<<endl<<endl;
cout<<setw(20)<<BOLDBLACK<<"ID"<<setw(20)<<"NAME"<<setw(20)<<"ACCOUNT NO"<<setw(20)<<"ACCOUNT TYPE"<<setw(20)<<"ACCOUNT BALANCE"<<RESET<<endl;
}
void BankUI::displayAllCustomer(Customer cust_obj,Account acc_obj)
{
cout<<setw(20)<<BOLDBLUE<<cust_obj.getCustomerId()<<setw(20)<<cust_obj.getCustomerName()<<setw(20)<<acc_obj.getAccountNo()<<setw(20)<<acc_obj.getAccountType()<<setw(20)<<acc_obj.getAccountBalance()<<RESET<<endl;
}
  
void BankUI::displayAllTransaction(Transaction trans_obj)
{
 system("clear");
   ErrorLog log;
    log.openErrorLog("Enterd Into Display All Transaction");
//  obj.open("Error_Log.txt");
 //bj<<"Enterd Into Display All Transaction";
   std::string line;
 std :: string string1;
 std ::string  string2;
 std :: string com;
 std :: string str;
  ifstream myfile("Config.Config");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
        istringstream sin(line.substr(line.find("=") + 1));
        if (line.find("string1") != -1)
                sin >> string1;
        if(line.find("string2") != -1)
                sin >> string2;
    }
    myfile.close();
        std ::  string string3;
        string3= system("date >date.txt");
        ifstream myfile1("date.txt");
        std:: string acc_no;
        acc_no = trans_obj.getAccountNo();
	
  if (myfile1.is_open())
        {
                getline (myfile1,line);
         }
myfile1.close();

         str="./Report/"+string2+"_"+line+"_"+acc_no;
        removeSpaces(str);
      }
else
  cout<<"Unable to open a file";

ofstream myfile2;
myfile2.open (str.c_str(),ios::app);
myfile2<<setw(10)<<"Account No :\t"<<trans_obj.getAccountNo()<<"\t"<<"Transaction ID\t:"<<trans_obj.getTransactionId()<<"\t"<<"Transaction Amount:\t"<<trans_obj.getAmount()<<"\t"<<"Transaction Type:\t"<<trans_obj.getTransactionType()<<"\t"<<"Account Balance:\t"<<trans_obj.getCurrentBalance()<<"\t"<<"Transaction Date:\t"<<trans_obj.getTransactionDate()<<endl<<endl;
  myfile2.close();
cout<<setw(20)<<BOLDBLUE<<trans_obj.getTransactionId()<<setw(40)<<trans_obj.getTransactionType()<<setw(40)<<trans_obj.getAccountNo()<<setw(20)<<trans_obj.getAmount()<<setw(20)<<trans_obj.getTransactionDate()<<"\t"<<RESET<<endl;
//log.closeErrorLog("Exiting from diplay all transaction");
}

void BankUI::displayMis(int customer,int account,int saving,float f_saving,int salary,float f_salary,int current,float f_current,int fd,float f_fd,float fdinterest,float f_account,int locker)
{

   system("clear");
   cout<<setw(40)<<BGCYAN<<"\033#6QCITY BANK                                                                              "<<RESET<<endl<<endl<<endl;
//ofstream file;
//file.open ("MIS_REPORT.txt");
   std::string line;
 std :: string string1;
 std ::string  string2;
 std :: string com;
 std :: string str;
  ifstream myfile("Config.Config");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
        istringstream sin(line.substr(line.find("=") + 1));
        if (line.find("string1") != -1)
                sin >> string1;
        if(line.find("string2") != -1)
                sin >> string2;
    }
    myfile.close();
        std ::  string string3;
        string3= system("date >date.txt");
        ifstream myfile1("date.txt");
  if (myfile1.is_open())
  	{
     		getline (myfile1,line);
	 }
myfile1.close();
        
         str="./Report/"+string1+"_"+line;
        //cout<<str;
        removeSpaces(str);
	}
else
  cout<<"Unable to ope a file";
ofstream myfile2;
  myfile2.open (str.c_str());


   myfile2<<setw(30)<<""<<left<<setw(30)<<"Total customers : "<<customer<<endl<<endl;
   myfile2<<setw(30)<<""<<left<<setw(30)<<"Total Active Accounts : "<<account<<endl<<endl;
   myfile2<<setw(30)<<""<<left<<setw(30)<<"Total Saving Accounts : "<<saving<<endl<<endl;
   myfile2<<setw(30)<<""<<left<<setw(30)<<"Total fund in saving Accounts : "<<f_saving<<endl<<endl;
   myfile2<<setw(30)<<""<<left<<setw(30)<<"Total Salary Accounts : "<<salary<<endl<<endl;
   myfile2<<setw(30)<<""<<left<<setw(30)<<"Total fund in salary Accounts : "<<f_salary<<endl<<endl;
   myfile2<<setw(30)<<""<<left<<setw(30)<<"Total Current Accounts : "<<current<<endl<<endl;
   myfile2<<setw(30)<<""<<left<<setw(30)<<"Total fund in current Accounts : "<<f_current<<endl<<endl;
   myfile2<<setw(30)<<""<<left<<setw(30)<<"Total number of Fixed deposit : "<<fd<<endl<<endl;
   myfile2<<setw(30)<<""<<left<<setw(30)<<"Total fund in Fixed Deposit : "<<f_fd<<endl<<endl;
   myfile2<<setw(30)<<""<<left<<setw(30)<<"Total interest given in Fixed Deposit : "<<fdinterest<<endl<<endl;
   myfile2<<setw(30)<<""<<left<<setw(30)<<"Total fund in all account : "<<f_account<<endl<<endl;
   myfile2<<setw(30)<<""<<left<<setw(30)<<"Total active lockers :"<<locker<<endl<<endl;
   
  myfile2.close();
  

 

   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Total customers : "<<RESET<<BOLDBLUE<<customer<<RESET<<endl<<endl;
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Total Active Accounts : "<<RESET<<BOLDBLUE<<account<<RESET<<endl<<endl;
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Total Saving Accounts : "<<RESET<<BOLDBLUE<<saving<<RESET<<endl<<endl;
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Total fund in saving Accounts : "<<RESET<<BOLDBLUE<<f_saving<<RESET<<endl<<endl;
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Total Salary Accounts : "<<RESET<<BOLDBLUE<<salary<<RESET<<endl<<endl;
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Total fund in salary Accounts : "<<RESET<<BOLDBLUE<<f_salary<<RESET<<endl<<endl;
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Total Current Accounts : "<<RESET<<BOLDBLUE<<current<<RESET<<endl<<endl;
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Total fund in current Accounts : "<<RESET<<BOLDBLUE<<f_current<<RESET<<endl<<endl;
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Total number of Fixed deposit : "<<RESET<<BOLDBLUE<<fd<<RESET<<endl<<endl;
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Total fund in Fixed Deposit : "<<RESET<<BOLDBLUE<<f_fd<<RESET<<endl<<endl;
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Total interest given in Fixed Deposit : "<<RESET<<BOLDBLUE<<fdinterest<<RESET<<endl<<endl;
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Total fund in all account : "<<RESET<<BOLDBLUE<<f_account<<RESET<<endl<<endl;  
   cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Total active lockers :"<<RESET<<BOLDBLUE<<locker<<RESET<<endl<<endl<<endl;
cout<<setw(50)<<""<<BOLDBLACK<<left<<setw(30)<<"You can also collect your file from banking/Report/..thank you..Have a nice day"<<endl<<endl;
}


void BankUI::displayAllLocker(vector<string> cust_list,vector<string> locker_list)
{
	for( int i=0; i<cust_list.size(); i++)
	{
		  cout<<setw(30)<<""<<BOLDCYAN<<left<<setw(30)<<locker_list[i]<<RESET<<BOLDBLUE<<""<<RESET<<endl<<endl;
                  cout<<setw(30)<<""<<BOLDCYAN<<left<<setw(30)<<cust_list[i]<<RESET<<BOLDBLUE<<RESET<<endl<<endl;

	}
}
void BankUI::displayAllFd(vector<Account>fd_list,vector<Customer>cust_list)
{
cout<<BOLDBLACK<<"Customer Name\t"<<"Customer Id\t"<<"Account no\t"<<"FD ID\t"<<"Fd Amount\t"<<"locker Id\t"<<"Fd Start Date\t"<<"Fd End Date\t"<<RESET<<endl<<endl;
for( int i=0; i<cust_list.size(); i++)
{
	cout<<BLUE<<cust_list[i].getCustomerName()<< fd_list[i].getCustomerId()<<"\t"<<fd_list[i].getAccountNo()<<"\t\t"<<fd_list[i].getFdId()<<"\t"<<fd_list[i].getFdAmount()<<"\t\t"<<fd_list[i].getLockerId()<<"\t\t"<<fd_list[i].getFdStartDate()<<"\t"<<fd_list[i].getFdEndDate()<<"\t"<<RESET<<endl<<endl;

}
}
