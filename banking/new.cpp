nt AccountController::initiateDeleteAccount(AccountUI &Aui, DB &cd)ccountController::initiateDeleteAccount(AccountUI &Aui, DB &cd)
{
        string p_AccountNo;
        if(aui.getaccountNo(p_AccountNo)==FAILED);
                cout<<"customer not exixst";
        cd.deleteAccountDB(p_AccountNo);
}
int DB::deleteAccountDB(string p_AccountNo);
{       EXEC SQL BEGIN DECLARE SECTION;
        char h_accountNo[21];
        EXEC SQL END DECLARE SECTION
        strcpy(h_accountNo,p_AccountNo);
        exec sql update table h95_group6_customer set status= 'inactive' where accountNo=:h_accountNo;
        if(sqlca.sqlcode<0)
        {
                cout<<sqlca.sqlcode<<endl;
                return FAILED


        }
        return SUCCESS;
}
int AccountUI::getAccountNo(string& p_AccountNo)
        {
                string l_AccountNo;
                cout<<"Enter Your Account Number"<<endl;
                cin>>l_AccountNo;
                return SUCCESS;
        }

///*******************************withdraw money**********
int AccountController::initiateWithdrawAmount(AccountUI &Aui, DB &cd)
{

                string p_AccountNo;
                if(aui.getaccountNo(p_AccountNo)==FAILED);
                cout<<"customer not exixst";
                int amountWithdraw= Aui.getAmount();

                cd.WithdrawAmount(p_AccountNo, amount);

}

                                                                                    
{	 
	string p_AccountNo;
	if(aui.getaccountNo(p_AccountNo)==FAILED);
		cout<<"customer not exixst";
	cd.deleteAccountDB(p_AccountNo);
}
int DB::deleteAccountDB(string p_AccountNo);
{	EXEC SQL BEGIN DECLARE SECTION;
	char h_accountNo[21];
	EXEC SQL END DECLARE SECTION
	strcpy(h_accountNo,p_AccountNo);
	exec sql update table h95_group6_customer set status= 'inactive' where accountNo=:h_accountNo;
	if(sqlca.sqlcode<0)
	{
		cout<<sqlca.sqlcode<<endl;
		return FAILED

	
	}
	return SUCCESS;
}
int AccountUI::getAccountNo(string& p_AccountNo)
	{
		string l_AccountNo;
		cout<<"Enter Your Account Number"<<endl;
		cin>>l_AccountNo;
		return SUCCESS;
	}

///*******************************withdraw money**********
int AccountController::initiateWithdrawAmount(AccountUI &Aui, DB &cd)
{	
		
		string p_AccountNo;
		if(aui.getaccountNo(p_AccountNo)==FAILED);
		cout<<"customer not exixst";
		int amountWithdraw= Aui.getAmount();

		cd.WithdrawAmount(p_AccountNo, amount);
		
}		
		
int DB :: WithdrawAmount(string& p_AccountNo,string& amount)
	{
		char h_AccountNo[21];
			
		
	

int AccountUI::getAmount()
	{
		int amount;		
		cout<<"Enter amount"<<endl;
		cin>>amount;
		return amount;
	}
