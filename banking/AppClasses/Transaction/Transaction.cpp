#include "Transaction.h"
#include "../../Model/DB.h"
#include "../../GlobalDefs/GlobalDefs.h"
#include "iomanip.h"
#include<string.h>
//#include "../../Utility/Utility.h"

Transaction :: Transaction()
{
  
}

Transaction::Transaction(string p_AccountNo,float p_TransactionAmount)
{
  this->m_AccountNo = p_AccountNo;
//  this->m_source = p_source;
  this->m_TransactionAmount = p_TransactionAmount;
}

Transaction::Transaction(string p_AccountNo,float p_TransactionAmount,string p_TransactionType,float p_CurrentBalance)
{
   this->m_AccountNo = p_AccountNo;
 this->m_TransactionAmount = p_TransactionAmount;
 this->m_TransactionType=p_TransactionType;
  this->m_CurrentBalance=p_CurrentBalance;
}



string Transaction::getTransactionType() 
      { return m_TransactionType; }
int Transaction::getTransactionId()   
      { return m_TransactionId; }

float Transaction::getAmount() 
      { return m_TransactionAmount; }

string Transaction::getSource()
      { return m_source;} 

string Transaction::getAccountNo() 
      {return m_AccountNo;}
string Transaction::getTransactionDate()   
      {return m_TransactionDate;}
float Transaction::getCurrentBalance()
     { return m_CurrentBalance; }

void Transaction::setSource(string p_source)
      { m_source=p_source; }

void Transaction::setTransactionType( string p_TransactionType) 
      { m_TransactionType=p_TransactionType; }

void Transaction::setTransactionId( int p_TransactionId) 
      { m_TransactionId=p_TransactionId; }

void Transaction::setTransactionAmount(float p_TransactionAmount) 
      { m_TransactionAmount=p_TransactionAmount; }


void Transaction::setAccountNo(string p_AccountNo) 
      { m_AccountNo=p_AccountNo; }

void Transaction::setTransactionDate( string p_TransactionDate) 
      { m_TransactionDate=p_TransactionDate; }
void Transaction::setCurrentBalance(float p_CurrentBalance)
      {m_CurrentBalance=p_CurrentBalance; }
Transaction :: ~Transaction()
{
}

