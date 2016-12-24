#ifndef _Transaction_H_
#define _Transaction_H_
#include <string>

#include <iostream>
using namespace std;

class Transaction
{
   string m_AccountNo;
   string m_source;
   string m_TransactionType;
   int m_TransactionId;
   float m_TransactionAmount;
   string m_TransactionDate;
   float m_CurrentBalance;
  
   public:
   Transaction();
   Transaction(string,float);
   Transaction(string,float,string,float);   
   
   void setAccountNo(string);
   void setTransactionType(string);
   void setTransactionId(int);
   void setTransactionDate(string);
   void setTransactionAmount(float);
   void setCurrentBalance(float);
   
   string getTransactionType();
   int getTransactionId();
   float getAmount();
   string getSource();
   void setSource(string);
   string getTransactionDate();
   string getAccountNo();
   float getCurrentBalance();
      
   
   ~Transaction();
  // int addAccountDetails();
  //void prepareAccountDBQueryInsert(string& strInsertQuery);
  // friend ostream& operator<<(ostream&, const Account&);
};

#endif
