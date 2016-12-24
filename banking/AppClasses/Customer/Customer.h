#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_


#include <iostream>
using namespace std;

class Customer
{
   string m_customerid;
   string m_customername;
   string m_customerpincode;
   string m_number;
   string m_address;
   string m_dob;
   string m_pan;
   string m_guranteer_name;
   string m_guranteer_accno ;
   string m_jointcustomername;
   string m_email;



   public:
   Customer();
   Customer(string);
   Customer(string,string,string,string,string,string,string,string,string,string,string);
    void setCustomerId(string);
    void setCustomerName(string);
    void setEmail(string);
    void setCustomerAddress(string);
    void setGuranteerName(string);
    void setJointCustomerName(string);
    void setCustomerDob(string);
    void setCustomerPincode(string);
    void setGuranteerAccno(string);
    void setCustomerPan(string);
    void setCustomerMobileNumber(string);
   string getCustomerId();
   string getCustomerName();
   string getCustomerAddress();
   string getEmail();
   string getGuranteerName();
   string getJointCustomerName();
   string getCustomerDob();
   string getCustomerPincode();
   string getGuranteerAccno();
   string getCustomerPan();
   string getCustomerMobileNumber();


  ~Customer();
   int addCustomerDetails();
   int deleteCustomerDetails();
  // void prepareCustomerDBQueryInsert(string& strInsertQuery);
   //friend ostream& operator<<(ostream&, const Customer&);
};

#endif



