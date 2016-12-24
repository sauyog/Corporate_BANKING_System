#include "Customer.h"
#include "../../Model/DB.h"
#include "../../GlobalDefs/GlobalDefs.h"
#include "iomanip.h"
#include <string.h>
#include "../../Utility/Utility.h"

using namespace std;
//#include "../../Utility/Utility.h"

Customer :: Customer()
{
  this->m_customerid = "";
  this->m_customername = "";
  this->m_customerpincode = "";
  this->m_number= "";
  this->m_address = "";
  this->m_dob = "";
  this->m_pan = "";
  this->m_guranteer_name = "";
  this->m_guranteer_accno = "";
  this->m_jointcustomername = "";
  this->m_email=""; 
}

Customer :: Customer(string p_customerid)
{
 this->m_customerid = p_customerid;
}

Customer::Customer(string p_customerid,string p_customername,string p_customerpincode,string p_number,string p_address,string p_dob,string p_pan,string p_guranteer_name,string p_guranteer_accno,string p_jointcustomername,string p_email)
{
     
  this->m_customerid = p_customerid;
  this->m_customername = p_customername;
  this->m_customerpincode = p_customerpincode;
  this->m_number= p_number;
  this->m_address = p_address;
  this->m_dob = p_dob;
  this->m_pan = p_pan;
  this->m_guranteer_name = p_guranteer_name;
  this->m_guranteer_accno = p_guranteer_accno;
  this->m_jointcustomername = p_jointcustomername;
  this->m_email=p_email;
}


void Customer :: setCustomerId(string p_customerid)
{
this->m_customerid = p_customerid;
}


void Customer :: setCustomerName(string p_customername)
{
this->m_customername = p_customername;
}

void Customer :: setCustomerPincode(string p_customerpincode)
{
this->m_customerpincode = p_customerpincode;
}
void Customer :: setCustomerMobileNumber(string p_number)
{
this->m_number= p_number;
}

void Customer :: setEmail(string p_email)
{
this->m_email= p_email;
}
void Customer :: setCustomerAddress(string p_address)
{
 this->m_address = p_address;
}
void Customer :: setCustomerDob(string p_dob)
{
 this->m_dob = p_dob;
}
void Customer :: setCustomerPan(string p_pan)
{
this->m_pan = p_pan;
}
void Customer :: setGuranteerName(string p_guranteer_name)
{
this->m_guranteer_name = p_guranteer_name;

}
void Customer :: setGuranteerAccno(string p_guranteer_accno)
{
this->m_guranteer_accno = p_guranteer_accno;
}
void Customer :: setJointCustomerName(string p_jointcustomername)
{
 this->m_jointcustomername = p_jointcustomername;

}
string Customer::getCustomerId() { return m_customerid; }
string Customer::getCustomerName() { return m_customername; }
string Customer::getCustomerPincode() { return m_customerpincode; }
string Customer::getCustomerMobileNumber() { return m_number; }
string Customer::getCustomerAddress() { return m_address; }
string Customer::getCustomerDob() { return m_dob; }
string Customer::getCustomerPan() { return m_pan; }
string Customer::getGuranteerName() { return m_guranteer_name; }
string Customer::getGuranteerAccno() { return m_guranteer_accno; }
string Customer::getJointCustomerName() { return m_jointcustomername; }
string Customer::getEmail() { return m_email; }


/*
int Customer::addCustomerDetails()
{


  prepareCustomerDBQueryInsert(l_strDBQueryInsert);

  if (DB::dbExecDML_Stmt(l_strDBQueryInsert)==FAILED) return FAILED;

  return SUCCESS;
}
void Customer::prepareCustomerDBQueryInsert(string& p_strInsertQuery)
{
  string InsertStmt = "insert into" ;
  string ValuesStmt = "values";
  string LeftParanthesis = "(";
  string RightParanthesis = ")";
  string Comma = ",";
  string SingleQuote = "'";
  string Space = " ";
  string Dot = "."; 
  string NextvalStmt = "nextval";
  string Seq = "h95_group6_customer_customerid";
  string tname = "h95_group6_customer";
  string td = "to_date";
  string dd = "DD-Mon-YY";

   p_strInsertQuery = InsertStmt + Space + tname + Space + ValuesStmt + Space + LeftParanthesis + Seq + Dot + NextvalStmt + Comma + SingleQuote + this->m_customername + SingleQuote + Comma + td + LeftParanthesis + SingleQuote + this->m_dob + SingleQuote + Comma + SingleQuote + dd + SingleQuote + RightParanthesis + Comma + Utility::to_String(this->m_customerpincode) + Comma + Utility::to_String(this->m_pan) + Comma +Utility::to_String(this->m_number) +  Comma + SingleQuote + this->m_address + SingleQuote + Comma + SingleQuote + this->m_jointcustomername + SingleQuote + Comma + SingleQuote + this->m_guranteer_name + SingleQuote + Comma + Utility::to_String(this->m_guranteer_accno) + RightParanthesis;

cout<<p_strInsertQuery;  
}
*/

/*
int Customer::updateCustomerDetails()
{
  string l_strDBQueryUpdate;

  prepareCustomerDBQueryUpdate(l_strDBQueryUpdate);

  if (DB::dbExecDML_Stmt(l_strDBQueryUpdate)==FAILED) return FAILED;

  return SUCCESS;
}



void Customer::prepareCustomerDBQueryUpdate(string& p_strUpdateQuery)
{
  
  string UpdateStmt = "update" ;
  string SetStmt = "set";
  string LeftParanthesis = "(";
  string RightParanthesis = ")";
  string Comma = ",";
  string SingleQuote = "'";
  string Space = " ";
  string WhereStmt = "where"
  string EqualStmt = "="

  p_strUpdateQuery = UpdateStmt + Space + H95_GRP6_CUSTOMER + Space + SetStmt + Space + customername + EqualStmt + this->m_customername + Comma + customerdob + EqualStmt + this->m_dob + Comma + customerpincode + EqualStmt + this->m_customerpincode + Comma + customerpan + EqualStmt + this->m_pan + Comma + customernumber + EqualStmt + this->m_number + Comma + customeraddress + EqualStmt
+ EqualStmt + this->m_address + Comma + jointcustomername + EqualStmt + this->m_jointcustomername + Comma + guranteeraccountno + EqualStmt + this->m_guranteeraccno + Comma + guranteername + EqualStmt + this->m_guranteer_name + WhereStmt + Space + customerid + EqualStmt + this->m_customerid

ostream& operator<<(ostream& os, const Customer& customer)
{
  os << setiosflags(ios::left);
  os << setw(20) <<customer.m_CustomerName;
  os << setw(10) <<customer.m_CustomerAge;
  os << endl;
}

Customer :: ~Customer(){}

this->m_customerid = p_Customerid;
  this->m_customername = p_Customername;
  this->m_customerpincode = p_customerpincode;
  this->m_number= p_number;
  this->m_address = p_address;
  this->m_dob = p_dob;
  this->m_pan = p_pan;
  this->m_guranteer_name = p_guranteer_name;
  this->m_guranteeraccno = p_guranteer_accno;
  this->m_jointcustomername = p_jointcustomername;

}*/

Customer ::~Customer()
{
}

/*
int Customer::deleteCustomerDetails()
{
  string l_strDBQueryDelete;

  prepareCustomerDBQueryDelete(l_strDBQueryDelete);

  if (DB::dbExecDML_Stmt1(l_strDBQueryDelete);
  return SUCCESS;
}
void Customer::prepareCustomerDBQueryDelete(string& p_strDeleteQuery)
{
  string DeleteStmt = "delete from" ;
  string tabStmt = "h95_group6_customer";
  string cid= "customerid";
  string wStmt = "where";
  string eqStmt = "=";
  string SingleQuote = "'";
  string Space = " ";
  string Dot = "."; 
  string NextvalStmt = "nextval";

  p_strDeleteQuery = DeleteStmt + Space + tabStmt + Space + wStmt + Space + cid + eqStmt + this->m_customerid;
}
*/
