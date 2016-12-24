#include "Main.h"
#include<sstream>
#include "../GlobalDefs/GlobalDefs.h"
#include "../GlobalDefs/ErrorLog.h"
#include "../Model/DB.h"
#include "../Controller/LoginController/LoginController.h"
#include "../Controller/CustomerController/CustomerController.h"
#include "../UI/LoginUI/LoginUI.h"
//#include "../UI/CustomerUI/CustomerUI.h"
#include "../UI/MainUI/MainUI.h"
#include "../Controller/AccountController/AccountController.h"
#include "../Controller/BankController/BankController.h"

void clean_up();

int main()
{
int attempt=0;
 // try
 // {
    string choice1;
    int choice= 0;
    int a=1;
   
    string c,b;
    DB::initialize_DB_Connection(c,b);

    if (DB::dbConnect() == FAILED)
    {
       cout<<"Couldn't connect to Database.\nTerminating the Program......"<<endl<<endl ;
       a=0;
       clean_up();
       return 0;
    }	
	int l_UserRole;

if(a==1)
{
 v:  
       if(LoginController :: initiateLogin(l_UserRole) == FAILED)
    {
      clean_up();      
      return 0;
    }
}
cout<<"                                                                                                                                  Application Developed by : Group 6.Co"<<endl;
//cout<<"role="<<l_UserRole<<endl;
	
//	do
 //   {
       if(l_UserRole == CR)
       {

           MainUI :: displayCRMenu(); 
           
        a:   if((MainUI::getUserOption(choice1) == FAILED))
           {
              cout<<"Valid Choices are from 1 to 5\n";
              //continue;
           }
		 istringstream(choice1) >> choice;
		 switch(choice)
           {
              case 1: 
                                        if (CustomerController::initiateCustomerRegistration() == FAILED) 
                                          cout<<"Adding Customer Details Failed"<<endl;
                                          MainUI :: displayCRMenu();
                                          goto a; 
 					  
		   
              case 2:
                                        if(CustomerController::initiateDeleteCustomer() == FAILED) 
                                               cout<<"Cannot Delete Customer";
                                              MainUI :: displayCRMenu();
                                              goto a;
            case 3: 
                                        if(CustomerController::initiateUpdateCustomer() == FAILED)
                                          cout<<"Cannot Delete Customer";
                                          MainUI :: displayCRMenu();
                                          goto a;

             case 4: 
					if(CustomerController::initiateViewCustomer() == FAILED)
                                             cout<<"View Customer Details Failed"<<endl;
				              MainUI :: displayCRMenu();
                                               goto a;

            case 5:                     char exit;
                                        cout<<"Do You Really Want To Exit Press Y or N : ";
 				      d:cin>>exit;
					cin.ignore();
                                        if(exit=='Y' || exit=='y')
 					{
  
                                         cout<<"                                              ..........Exiting.........."<<endl<<endl<<endl;  
                                        choice=0; 
				        clean_up(); 
					break;
                                         }
                                        else if(exit=='N'|| exit=='n')
                                        {
  					 cout<<endl;	
                                         goto v;
  					return 0;
					}
					else
 					{
 					cout<<"Invalid Option"<<endl;
 					cout<<"Enter Y or N : ";
 					cout<<endl;
 					goto d;
					}
					

               default: 
			cout<<"You have given an invalid option. Try Again.. "<<endl<<endl;
                         MainUI :: displayCRMenu();
				goto a;
           }
           	
		/*	if( !MainUI::toContinue() ) 
                  	 { 
                            clean_up(); 
                             return 0;
                         } */
        }

            
              if(l_UserRole == CLERK)
             {

                MainUI :: displayClerkMenu();

           b:	if((MainUI::getUserOption(choice1) == FAILED))
           	{
              		cout<<"Valid Choices are from 1 to 10\n";
             		// continue;
           	}
                 istringstream(choice1) >> choice;
                 switch(choice)
                 {
                

                       case 1:
                        //open account
                        if (AccountController::initiateOpenAccount() == FAILED)
                                        cout<<"Open Account Failed"<<endl;
                                          MainUI :: displayClerkMenu();
  					goto b;
                                       break;



                 case 2:
                   //close account
                                    if (AccountController::initiateDeleteAccount() == FAILED)
                                          cout<<"Close Account Failed"<<endl;
                                          MainUI :: displayClerkMenu();
                                        goto b;

                                       break;

                 case 3:
                    //withdraw money
                                     if (AccountController::initiateWithdraw() == FAILED)
					 ErrorLog :: openErrorLog("Entering into initiate withdraw in Account controller from main");
                                          cout<<"Withdraw Failed"<<endl;
                                          MainUI :: displayClerkMenu();
					 ErrorLog :: openErrorLog("Exiting from  initiate withdraw in Account Controller controller from main");
                                        goto b;

                                       break;


                 case 4:
                    //deposit money
                                     if (AccountController::initiateDeposit() == FAILED)
                                          cout<<"Deposit Failed"<<endl;
                                          MainUI :: displayClerkMenu();
					
                                        goto b;

                                       break;


                 case 5:
                    //transfer money
                                     if (AccountController::initiateTransfer() == FAILED)
                                          cout<<"transfer Failed"<<endl;
                                          MainUI :: displayClerkMenu();
                                        goto b;

                                       break;


                 case 6:
                    // open fd
                                     if (AccountController::initiateOpenFd() == FAILED)
                                          cout<<"FD Failed"<<endl;
                                          MainUI :: displayClerkMenu();
                                        goto b;

                                       break;

                 case 7:
                    // close fd
                                     if (AccountController::initiateWithdrawFd() == FAILED)
                                          cout<<"Close FD Failed"<<endl;
                                          MainUI :: displayClerkMenu();
                                        goto b;

                                       break;

                  case 8:
                    // calculate interest
                                     if (AccountController::initiateCalculateInterest() == FAILED)
                                          cout<<"calculate interest Failed"<<endl;
                                          MainUI :: displayClerkMenu();
                                        goto b;
                                         


                 case 9:
                    // check balance
                                     if (AccountController::initiateCheckBalance() == FAILED)
                                          cout<<"checking balance Failed"<<endl;
                                          MainUI :: displayClerkMenu();
                                        goto b;

                                       break;
                 
                 case 10:
                    // check balance
                                     if (AccountController::initiateViewFd() == FAILED)
                                          cout<<"View fd Failed"<<endl;
                                          MainUI :: displayClerkMenu();
                                        goto b;

                                       break;



             	case 11:            
                                     char exit;
                                        cout<<"Do You Really Want To Exit Press Y or N : ";
					
                                      f:cin>>exit;
 					cin.ignore();
                                        if(exit=='Y' || exit=='y')
                                        {

                                         cout<<"                                              ..........Exiting.........."<<endl<<endl<<endl;
                                        choice=0;
                                        clean_up();
  					break;	
 					}
                                        else if(exit=='N'|| exit=='n')
                                        {
                                         goto v;
                                        return 0;
                                        }
                                        else
                                        {
                                        cout<<"Invalid Option";
                                        cout<<"Enter Y or N : ";
                                        goto f;
					cout<<endl;
                                        }
					
 					 

               default: 
					cout<<"You have given an invalid option. Try Again.. "<<endl<<endl;
                                                    MainUI :: displayClerkMenu();
                                                               goto b;

                    
                  }
                    /*  if( !MainUI::toContinue() )
                         {
                            clean_up();
                             return 0;
                         } */
                  }
               
                     if(l_UserRole == MANAGER)
                       {
                             MainUI :: displayManagerMenu();
           
                     c:     if((MainUI::getUserOption(choice1) == FAILED))
                           {   
                              cout<<"Valid Choices are from 1 to 7\n";
                                  //   continue;
                           }             
                 istringstream(choice1) >> choice;
           switch(choice)
           {

		case 1:
                  //view all customer

                             if (BankController::initiateViewAllCustomer() == FAILED)
                                          
                                          cout<<"view all customer Failed"<<endl;
                                          MainUI :: displayManagerMenu();
					 
                                        goto c;

                                              break;




                 case 2:
                  //view all locker

                             if (BankController::initiateViewAllLocker() == FAILED)
                                          cout<<"view all lockers Failed"<<endl;
                                          MainUI :: displayManagerMenu();
                                        goto c;

                                              break;



                 case 3:
                  //generate account statements

                             if (BankController::initiateGenerateStatements() == FAILED)
                                          cout<<"generate statement Failed"<<endl;
                                          MainUI :: displayManagerMenu();
                                        goto c;

                                              break;


                 case 4:
                  //generate MIS report

                             if (BankController::initiateMIS() == FAILED)
                                          cout<<"MIS Failed"<<endl;
                                          MainUI :: displayManagerMenu();
                                        goto c;

                                             break;

                 case 5:
                  //view all fd

                             if (BankController::initiateViewAllFd() == FAILED)
                                          cout<<"View all fd failed"<<endl;
                                          MainUI :: displayManagerMenu();
                                        goto c;

                                             break;

		








                  case 6:
                                       char exit;
                                        cout<<"Do You Really Want To Exit Press Y or N :";
                                      s:cin>>exit;
                                        cin.ignore();
                                        if(exit=='Y' || exit=='y')
                                        {

                                         cout<<"                                              ..........Exiting.........."<<endl<<endl<<endl;
                                        choice=0;
                                        clean_up();
                                        break;
 					}
                                        else if(exit=='N'|| exit=='n')
                                        {
                                         goto v;
                                        return 0;
                                        }
                                        else
                                        {
                                        cout<<"Invalid Option";
                                        cout<<"Enter Y or N : ";
                                        goto s;
                                        }

		




		     default:
                                        cout<<"You have given an invalid option. Try Again.. "<<endl<<endl;
                                               MainUI :: displayManagerMenu();
                                                     goto c;


                  }
                     /*  if( !MainUI::toContinue() )
                         {
                            clean_up();
                             return 0;
                         }  */
                  		
     }
  /*  }

   // } while (choice != 5);

    cout<<"Terminating the Program ..."<<endl<<endl;
    clean_up();
    return 0;
   */
  }


void clean_up()
{
DB::dbCloseConnection();
}







     
		   
		   
	
	
	
	
