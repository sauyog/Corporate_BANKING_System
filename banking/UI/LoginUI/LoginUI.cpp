#include "LoginUI.h"
#include "../../GlobalDefs/GlobalDefs.h"

/* Function for Username */
string LoginUI :: getUserName(void)
{
   cout<<setw(40)<<left<<"                             *****************************************************"<<left<<setw(20)<<RESET<<endl<<endl;
   cout<<setw(40)<<BGCYAN<<"\033#6QCITY BANK                                                                              "<<RESET<<endl<<endl<<endl;



   string l_username;
   cout<<"                                                       User Name :"<<RESET;
   getline(cin, l_username);
for(int i=0;i<=l_username.length();i++)
{
l_username[i]=l_username[i]+1;   
}

cout<<endl;
   return l_username;
}
/* Function for Password */
string LoginUI :: getPassword(void)
{
   string l_password;
   
   l_password=getpass("                                                        Password :");
for(int i=0;i<=l_password.length();i++)
{
l_password[i]=l_password[i]+1;
   
}

cout<<endl;

   //cout<<setw(20)<<"  Password : ";
//   getline(cin, l_password);
   return l_password;
}
