all:bank
bank: main.o MainUI.o Customer.o Login.o CustomerController.o LoginController.o LoginUI.o CustomerUI.o DB.o
g++ main.o MainUI.o Customer.o Login.o CustomerController.o LoginController.o LoginUI.o CustomerUI.o DB.o -o bank -L $ORACLE_HOME/lib -lclntsh 


main.o: main.cpp
g++ -c main.cpp



MainUI.o: MainUI.cpp
g++ -c MainUI.cpp

Customer.o: Customer.cpp
g++ -c  Customer.cpp


Login.o: Login.cpp
g++ -c Login.cpp


CustomerController.o: CustomerController.cpp
g++ -c CustomerController.cpp

LoginController.o: LoginController.cpp
g++ -c LoginController.cpp

LoginUI.o: LoginUI.cpp
g++ -c LoginUI.cpp

CustomerUI.o: CustomerUI.cpp
g++ -c CustomerUI.cpp

DB.o:DB.cpp
g++ -c DB.cpp -I $ORACLE_HOME/precomp/public

DB.cpp:DB.pc
proc code=cpp cpp_suffix=cpp parse=none DB.pc



