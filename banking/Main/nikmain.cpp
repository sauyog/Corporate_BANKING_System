#include "Main.h"
#include "../GlobalDefs/GlobalDefs.h"
#include "../Model/DB.h"
#include "../Controller/LoginController/LoginController.h"
#include "../Controller/CustomerController/CustomerController.h"
#include "../UI/LoginUI/LoginUI.h"
//#include "../UI/CustomerUI/CustomerUI.h"
//#include "../UI/MainUI/MainUI.h"
//#include "../Controller/AccountController/AccountController.h"
#include "../Controller/BankController/BankController.h"

void clean_up();

int main()
{
int attempt=0;
 // try
 // {

    int choice= 0;
   

    DB::initialize_DB_Connection((string)"H95orauser6d@unixdb",(string)"tcshyd");

    if (DB::dbConnect() == FAILED)
    {
       cout<<"Couldn't connect to Database.\nTerminating the Program......"<<endl<<endl ;
       clean_up();
       return 0;
    }	
	int l_UserRole;


    if(LoginController :: initiateLogin(l_UserRole) == FAILED)
    {
      clean_up();      
      return 0;
    }

cout<<"role="<<l_UserRole<<endl;
	
//	do
 //   {
       if(l_UserRole == CR)
       {

           MainUI :: displayCRMenu(); 
           
           if((MainUI::getUserOption(choice) == FAILED))
           {
              cout<<"Valid Choices are from 1 to 3\n";
              //continue;
           }
		  
		 switch(choice)
           {
              case 1: 
                                        if (CustomerController::initiateCustomerRegistration() == FAILED) 
                                          cout<<"Adding Customer Details Failed"<<endl;
                                       break;

   
		   
	      case 2:
                                        if(CustomerController::initiateUpdateCustomer() == FAILED) 
                                               cout<<"Updating Customer Details Failed"<<endl;
                                       break;

        
                case 3:
                                        if(CustomerController::initiateDeleteCustomer() == FAILED)
                                               cout<<"ddelete customer Failed"<<endl;
                                       break;
                   
                
                case 4:
                                        if(CustomerController::initiateViewCustomer() == FAILED)
                                               cout<<"View Customer Details Failed"<<endl;
                                       break;









              case 5:                     
                                        choice=0; 
				        clean_up(); 
  					return 0;


               default: 
			cout<<"You have given an invalid option. Try Again.. "<<endl<<endl;
           }
           	
			if( !MainUI::toContinue() ) 
                  	 { 
                            clean_up(); 
                            return 0;
                         }


        }

          
	 
              if(l_UserRole == CLERK)
             {

                MainUI :: displayClerkMenu();

           	if((MainUI::getUserOption(choice) == FAILED))
           	{
              		cout<<"Valid Choices are from 1 to 10\n";
             		// continue;
           	}

                 switch(choice)
                 {
  			case 1:
                   	//open account
                  	if (AccountController::initiateOpenAccount() == FAILED) 
                                        cout<<"Open Account Failed"<<endl;
                                       break;

			
		     
                 case 2:
                   //close account 
                                    if (AccountController::initiateDeleteAccount() == FAILED)
                                          cout<<"Close Account Failed"<<endl;
                                       break;
		
                 case 3:
                    //withdraw money
                                     if (AccountController::initiateWithdraw() == FAILED)
                                          cout<<"Withdraw Failed"<<endl;
                                       break;
		 

	         case 4:
                    //deposit money
                                     if (AccountController::initiateDeposit() == FAILED)
                                          cout<<"Deposit Failed"<<endl;
                                       break;
		

		 case 5:
                    //transfer money
                                     if (AccountController::initiateTransfer() == FAILED)
                                          cout<<"transfer Failed"<<endl;
                                       break;
	
		
		 case 6:
                    // open fd
                                     if (AccountController::initiateOpenFd() == FAILED)
                                          cout<<"FD Failed"<<endl;
                                       break;
                  
		
                 case 7:
                    // close fd
                                     if (AccountController::initiateWithdrawFd() == FAILED)
                                          cout<<"Close FD Failed"<<endl;
                                       break;

                  case 8:
                    // calculate interest 
                                     if (AccountController::initiateCalculateInterest() == FAILED)
                                          cout<<"calculate interest Failed"<<endl;
			
		 case 9:
                    // check balance
                                     if (AccountController::initiateCheckBalance() == FAILED)
                                          cout<<"checking balance Failed"<<endl;
                                       break;  


                  case 10:
                                        choice=0;
                                        clean_up();
                                        return 0;


                    default: 
					cout<<"You have given an invalid option. Try Again.. "<<endl<<endl;
                    
                  }
                        if( !MainUI::toContinue() )
                         {
                            clean_up();
                             return 0;
                         }
            }
  
	          
                     if(l_UserRole == MANAGER)
                       {
                             MainUI :: displayManagerMenu();
           
                          if((MainUI::getUserOption(choice) == FAILED))
                           {   
                              cout<<"Valid Choices are from 1 to 5\n";
                                   //  continue;
                           }             
           
	switch(choice)
           {
              
               case 1:
                  //view all customer
                       
                             if (BankController::initiateViewAllCustomer() == FAILED)
                                          cout<<"view all customer Failed"<<endl;
                                              break;
              

              

                 case 2:
                  //view all locker

                             if (BankController::initiateViewAllLocker() == FAILED)
                                          cout<<"view all lockers Failed"<<endl;
                                              break;


                 
                 case 3:
                  //generate account statements

                             if (BankController::initiateGenerateStatements() == FAILED)
                                          cout<<"generate statement Failed"<<endl;
                                              break;
            

		 case 4:
                  //generate MIS report

                             if (BankController::initiateMIS() == FAILED)
                                          cout<<"MIS Failed"<<endl;
                                              break;






              /*
                    case 6:
                  //view all inactive accounts

                             if (BankController::initiateViewAllInactiveAccount() == FAILED)
                                          cout<<"view all inactive Accounts Failed"<<endl;
                                              break;
              */


		     default:
                                        cout<<"You have given an invalid option. Try Again.. "<<endl<<endl;

                  }
                        if( !MainUI::toContinue() )
                         {
                            clean_up();
                             return 0;
                         }
                 // }
      

   // } while (choice != 5);
/*
    cout<<"Terminating the Program ..."<<endl<<endl;
    clean_up();
    return 0;
  }

*/
}
}
void clean_up()
{
DB::dbCloseConnection();
}







     
		   
		   
	
	
	
	
