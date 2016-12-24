#include <iostream>
#include <string.h>
#include <iomanip>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include "MainUI.h"
#include "../../GlobalDefs/GlobalDefs.h"
#include <sstream>

using namespace std;

void MainUI :: displayUserMessage(string p_message)
{
    cout<<setw(20)<<endl<<p_message<<endl;
}
void MainUI::displayCRMenu()
{
   cout<<endl<<endl;
   cout<<setw(40)<<left<<"                             *****************************************************"<<left<<setw(20)<<RESET<<endl<<endl;
   cout<<setw(40)<<BGCYAN<<"\033#6QCITY BANK                                                                              "<<RESET<<endl<<endl<<endl;

   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 1 to register new customer"<<RESET<<endl<<endl;

   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 2 to delete customer"<<RESET<<endl<<endl;

   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 3 to update customer information"<<RESET<<endl<<endl;

   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 4 to view customer details"<<RESET<<endl<<endl;

   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 5 to exit"<<RESET<<endl<<endl;

   cout<<setw(40)<<left<<"                             *****************************************************"<<left<<setw(20)<<RESET<<endl<<endl;
}


void MainUI::displayClerkMenu()
{
   cout<<endl<<endl;
   cout<<setw(40)<<left<<"                             *****************************************************"<<left<<setw(20)<<RESET<<endl<<endl;
   cout<<setw(40)<<BGCYAN<<"\033#6QCITY BANK                                                                              "<<RESET<<endl<<endl<<endl;
   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 1 to open account"<<RESET<<endl<<endl;

   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 2 to close account"<<RESET<<endl<<endl;

   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 3 to withdraw "<<RESET<<endl<<endl;

   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 4 to deposit "<<RESET<<endl<<endl;

   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 5 to transfer money to other account "<<RESET<<endl<<endl;

   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 6 to open Fixed Deposit "<<RESET<<endl<<endl;

   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 7 to close Fixed Deposit "<<RESET<<endl<<endl;

   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 8 to calculate interest "<<RESET<<endl<<endl;

   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 9 to check account balance "<<RESET<<endl<<endl;

   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 10 to view FD details "<<RESET<<endl<<endl;

   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 11 to exit "<<RESET<<endl<<endl;

   cout<<setw(40)<<left<<"                             *****************************************************"<<left<<setw(20)<<RESET<<endl<<endl;
}


void MainUI::displayManagerMenu()
{

  cout<<setw(40)<<left<<"                             *****************************************************"<<left<<setw(20)<<RESET<<endl<<endl;
  cout<<endl<<endl;
   cout<<setw(40)<<BGCYAN<<"\033#6QCITY BANK                                                                              "<<RESET<<endl<<endl<<endl;
   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 1 to view all active customer"<<RESET<<endl<<endl;

  // cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 2 for view all accounts"<<RESET<<endl<<endl;

    cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 2 to view all lockers"<<RESET<<endl<<endl;

   cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 3 to generate account statement "<<RESET<<endl<<endl;

//cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 5 for generate card statements "<<RESET<<endl<<endl;

cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 4 to view MIS report "<<RESET<<endl<<endl;

cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 5 to view all fixed deposits "<<RESET<<endl<<endl;


cout<<setw(40)<<""<<BOLDBLACK<<left<<setw(20)<<"Press 6 to Exit"<<RESET<<endl<<endl;

//   cout<<"*********************************************"<<endl<<endl;
cout<<setw(40)<<left<<"                             *****************************************************"<<left<<setw(20)<<RESET<<endl<<endl;

}







int MainUI::getUserOption(string& p_UserChoice)
{
   int l_UserInput;
   cout<<setw(40)<<""<<BOLDMAGENTA<<left<<setw(20)<<"Enter your option:"<<RESET;
   cout<<BOLDMAGENTA;
   cin>>p_UserChoice;
   cout<<RESET<<endl<<endl;
   system("clear");
   cout<<setw(40)<<BGCYAN<<"\033#6QCITY BANK                                                                              "<<RESET<<endl<<endl<<endl;

   return 1;
}

bool MainUI::toContinue()
{
  string l_UserInput;
  cout<<endl<<"Continue ?(Y/N):";
  getline(cin,l_UserInput);
  if ( (l_UserInput == "Y") || (l_UserInput == "y") )
     return 1;
  if ( (l_UserInput == "N") || (l_UserInput == "n") )
     return 0;
  else
     throw ( string("Invalid Input") );
}







