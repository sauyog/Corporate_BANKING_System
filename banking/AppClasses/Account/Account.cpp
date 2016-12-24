#include "Account.h"
#include "../../Model/DB.h"
#include "../../GlobalDefs/GlobalDefs.h"
#include "iomanip.h"
#include<string.h>
//#include "../../Utility/Utility.h"

Account::Account()
{
  
}

Account::Account(string p_CustomerId,string p_AccountType,string p_joinName, float p_AccountBalance)
{
  this->m_CustomerId = p_CustomerId;
  this->m_AccountType = p_AccountType;
  this->m_AccountBalance = p_AccountBalance;
  this->m_joinName=p_joinName;
}


Account::Account(string p_AccountNo,float p_FdAmount,int p_FdDuration)
{
  this->m_AccountNo=p_AccountNo;
  this->m_FdAmount=p_FdAmount;
  this->m_FdDuration=p_FdDuration;
}


string Account::getAccountNo() { return m_AccountNo; }
string Account::getCustomerId() { return m_CustomerId; }
string Account::getCustomerName() { return m_CustomerName; }
string Account::getAccountType() { return m_AccountType; }
string Account::getJoinName() { return m_joinName;  }
string Account::getCreditNo() { return m_CreditNo; }
string Account::getDebitNo() { return m_DebitNo; }
string Account::getFdId()  {  return m_FdId;}
float Account::getFdAmount() { return m_FdAmount;}
string Account::getFdStartDate() { return m_FdStartDate;}
string Account::getFdEndDate() { return m_FdEndDate;}
int Account::getFdDuration() { return m_FdDuration;}

float Account::getAccountBalance() { return m_AccountBalance;  }
int Account::getLockerId() { return m_LockerId;  }
string Account::getLockerStatus()  {  return m_LockerStatus;}


void Account::setCustomerName(string p_CustomerName) { m_CustomerName=p_CustomerName; }
void Account::setCustomerId(string  p_CustomerId) {m_CustomerId= p_CustomerId; }
void Account::setAccountNo(string  p_AccountNo) {m_AccountNo= p_AccountNo; }
void Account::setAccountType(string  p_AccountType){m_AccountType = p_AccountType;}
void Account::setAccountBalance( float  p_AccountBalance){m_AccountBalance = p_AccountBalance;}
void Account::setJoinName( string p_joinName) {m_joinName=p_joinName;}
void Account::setCreditNo( string p_Credit) {m_CreditNo=p_Credit;}
void Account::setDebitNo( string p_Debit) {m_DebitNo=p_Debit;}
void Account::setFdId(string p_FdId) {m_FdId=p_FdId;}
void Account::setFdAmount(float p_FdAmount){m_FdAmount=p_FdAmount;}
void Account::setFdStartDate(string p_FdStartDate){m_FdStartDate=p_FdStartDate;}
void Account::setFdEndDate(string p_FdEndDate){m_FdEndDate=p_FdEndDate;}
void Account::setFdDuration(int p_FdDuration){m_FdDuration=p_FdDuration;}


void Account::setLockerId(int p_LockerId){m_LockerId=p_LockerId;}
//void Account::setFdEndDate(string p_LockerStatus){m_LockerStatus=p_LockerStatus;}





/*
int Account::addAccountDetails()
{
 // string seq_string="h95_group6_account_accountno.nextval";
 string l_strDBQueryInsert;

  prepareAccountDBQueryInsert(l_strDBQueryInsert);
  cout<<l_strDBQueryInsert<<endl;
  if (DB::dbExecDML_Stmt(l_strDBQueryInsert)==FAILED) return FAILED;
  cout<<"data inserted";
  return SUCCESS;
}








void Account::prepareAccountDBQueryInsert(string& p_strInsertQuery)
{
  string InsertStmt = "insert into" ;
  string ValuesStmt = "values";
  string LeftParanthesis = "(";
  string seq_string="h95_group6_account_accountno.nextval";
  string RightParanthesis = ")";
  string Comma = ",";
  string SingleQuote = "'";
  string Space = " ";
  string s_null="NULL";
  string s_date="SYSDATE";
  string act="active";
  string table_name="h95_group6_account";
  

  p_strInsertQuery = InsertStmt + table_name + ValuesStmt + LeftParanthesis + SingleQuote + m_CustomerId + SingleQuote + Comma + seq_string + Comma + SingleQuote + m_AccountType + SingleQuote + Comma + "m_AccountBalance" + Comma + s_null + Comma + s_null + Comma + s_null + Comma + s_null + Comma + s_null + Comma + s_null + Comma + s_null + Comma + s_null + Comma + s_date + Comma + act + RightParanthesis ;

  cout<<p_strInsertQuery<<endl;
}
//  			insert into h95_group6_account values('m_CustomerId',seq_string,'m_AccountType',m_AccountBalance,s_null,s_null,s_null,s_null,s_null,s_null,s_null,s_null,s_date,act)



ostream& operator<<(ostream& os, const Account& account)
{
  os << setiosflags(ios::left);
  os << setw(20) <<account.m_Accountno;
  os << setw(10) <<account.m_type;
  os << endl;
}
*/
Account :: ~Account()
{
}

