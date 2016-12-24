all:compile output

output:DB.o Customer.o CustomerController.o  CustomerUI.o Login.o  LoginController.o LoginUI.o  Account.o AccountController.o AccountUI.o main.o MainUI.o Bank.o BankController.o  Transaction.o BankUI.o Validation.o SqlError.o
	g++ SqlError.o DB.o Customer.o CustomerController.o  CustomerUI.o Login.o  LoginController.o LoginUI.o  Account.o AccountController.o AccountUI.o main.o MainUI.o Bank.o BankController.o  Transaction.o   BankUI.o Validation.o -o output -L $(ORACLE_HOME)/lib -lclntsh -Wno-deprecated 

compile:AppClasses/Customer/Customer.cpp Controller/CustomerController/CustomerController.cpp UI/CustomerUI/CustomerUI.cpp AppClasses/Login/Login.cpp Controller/LoginController/LoginController.cpp UI/LoginUI/LoginUI.cpp AppClasses/Account/Account.cpp Controller/AccountController/AccountController.cpp  UI/AccountUI/AccountUI.cpp Main/main.cpp UI/MainUI/MainUI.cpp AppClasses/Bank/Bank.cpp Controller/BankController/BankController.cpp AppClasses/Transaction/Transaction.cpp Model/DB.cpp UI/BankUI/BankUI.cpp Validation/Validation.cpp ExceptionClasses/SqlError/SqlError.cpp 
	
	g++ -c AppClasses/Customer/Customer.cpp Controller/CustomerController/CustomerController.cpp UI/CustomerUI/CustomerUI.cpp AppClasses/Login/Login.cpp Controller/LoginController/LoginController.cpp UI/LoginUI/LoginUI.cpp AppClasses/Account/Account.cpp Controller/AccountController/AccountController.cpp  UI/AccountUI/AccountUI.cpp Main/main.cpp UI/MainUI/MainUI.cpp AppClasses/Bank/Bank.cpp Controller/BankController/BankController.cpp AppClasses/Transaction/Transaction.cpp Model/DB.cpp UI/BankUI/BankUI.cpp Validation/Validation.cpp ExceptionClasses/SqlError/SqlError.cpp  -I $(ORACLE_HOME)/precomp/public -Wno-deprecated 


DB.cpp:DB.pc
	proc code=cpp cpp_suffix=cpp parse=none Model/DB.pc
