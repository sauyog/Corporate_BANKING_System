#include "LoginController.h"
#include "../../AppClasses/Login/Login.h"
#include "../../UI/LoginUI/LoginUI.h"
#include "../../Model/DB.h"
#include "../../GlobalDefs/GlobalDefs.h"
#include <cstdlib>
#include <iomanip>
int LoginController :: initiateLogin(int &l_UserRole)
{
  system("clear"); 
 int k=1;  
 d:   Login loginObj(LoginUI::getPassword(),LoginUI::getUserName());
//   system.clear();
//   cout<<"LOGIN SUCCESSFULLY...."<<endl;
//   system("sleep 2");
//   system("clear");

   while(k!=4)
{
   if(DB::dbCheckLogin(loginObj,l_UserRole) == FAILED)
   {
    cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<"Invalid UserName Or PassWord"<<RESET<<endl;
    //system("sleep 2");
    system("sleep 2");
    system("clear"); 
    k++;
    goto d;
    return FAILED;  
   }
   else
   {
     cout<<setw(30)<<""<<BOLDBLUE<<left<<setw(30)<<"LOGIN SUCCESSFULLY.........Please wait!"<<RESET<<endl;   
     system("sleep 2");
     system("clear");
     return SUCCESS;
     k=3;
}
}
}
