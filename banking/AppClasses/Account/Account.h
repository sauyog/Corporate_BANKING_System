#ifndef _Account_H_
#define _Account_H_
#include <string>

#include <iostream>
using namespace std;

class Account
{
   string m_CustomerId;
   string m_CustomerName;
   string m_AccountType;
   string m_AccountNo;
   string m_AccountOpenDate;
   float m_AccountBalance;
   string m_CreditNo,m_DebitNo;
   string m_AccountStatus;
   int m_LockerId;
   string m_FdId;
   string m_ChequeLeaf;
   int  m_FdDuration;
   string m_FdStartDate;
   string m_FdEndDate;
   string m_joinName;
    float m_FdAmount; 
   string m_LockerStatus;
   
   public:
   Account();
   Account(string,string,string, float);
   Account(string, float,int);
   void setCustomerId(string);
   void setCustomerName(string);
    void setAccountNo(string);

   void setAccountBalance( float);
   void setAccountType(string); 
   void setJoinName(string); 
    void setCreditNo(string);
    void setDebitNo(string);
   void setFdId(string);
   void setFdAmount( float);
   void setFdEndDate(string);
   void setFdStartDate(string);
   void setFdDuration(int);
   void setLockerId(int);
   void setLockerStatus(string);

   string getAccountNo();
   string getAccountType();
   string getCustomerName();
   string getCustomerId();
    float  getAccountBalance();
   string getJoinName();
    string getCreditNo();
    string getDebitNo();
   string getFdId();
    float getFdAmount();
   string getFdEndDate();
   string getFdStartDate();
   int getFdDuration();
   int getLockerId();
   string getLockerStatus();








   ~Account();
  // int addAccountDetails();
  //void prepareAccountDBQueryInsert(string& strInsertQuery);
  // friend ostream& operator<<(ostream&, const Account&);
};

#endif

