#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_


#include <iostream>
using namespace std;

class Customer
{
   string m_customerid;
   string m_CustomerName;
   string m_customerpincode;
   string m_number;
   string m_address;
   string m_dob;
   string m_pan;
   string m_guranteer_name;
   string m_guranteer_accno ;
   string m_jointcustomername;





   public:
   Customer();
   Customer::Customer(string,string,string,string,string,string,string,string,string ,string )
   void setCustomerId(string);
   void setCustomerName(string);
   string getCustomerId();
   string getCustomerName();
   ~Customer();
   int addCustomerDetails();
   int deleteCustomerDetails();
   void prepareCustomerDBQueryInsert(string& strInsertQuery);
   void prepareCustomerDBQueryDelete(string& strDeleteQuery)
   friend ostream& operator<<(ostream&, const Customer&);
};

#endif
