#include "Validation.h"
#include <iostream>
#include <string>
#include <ctype.h>
#include "../UI/CustomerUI/CustomerUI.h"
#include "../GlobalDefs/GlobalDefs.h"
#include <sstream>
#include "../Model/DB.h"
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

using namespace std;


bool Validation :: stringValidation(string name)
{
   int length = name.length();
   int flag =1;
   for(int i =0 ; i<length; i++)
        {
	                 
              /*  if (isalpha(name[i]))
                  {
                    return true;
                  }
                else
                  {
                    return false;
                  }*/


                if((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z') || (name[i] == ' ') )
                        continue;
                else
                {
                        flag = 0;
			break;
                }
       }
        if(flag == 0)
        {
                return false;
        }
        else
                return true;

}


bool Validation :: dobValidation(string date)
{

int yc,mc,dc;
time_t t=time(0);
tm *ltm=localtime(&t);
yc=1900 + ltm->tm_year;
mc=1 + ltm->tm_mon;
dc=ltm->tm_mday;
//cout<<"year: "<<yc<<endl;
//cout<<"month: "<<mc<<endl;
//cout<<"day: "<<dc<<endl;



string sd,m,syy;
int d,yy,y,z=0;
//cout<<"enter date(dd-mon-yyyy): "<<endl;
//cin>>date;
sd=date.substr(0,2);
istringstream(sd) >> d;
//cout<<"d="<<d<<endl;
m=date.substr(3,3);
//cout<<"m="<<m<<endl;
//istringstream(sm) >> m;
syy=date.substr(7,4);
istringstream(syy) >> yy;
//cout<<"yy="<<yy<<endl;
//y=2014-18;
int ch=0;
if(yy<yc && date[2]=='-' && date[6]=='-')
{
	if(m=="jan" || m=="mar" || m=="may" || m=="jul" || m=="aug" || m=="oct" || m=="dec")
		{if(1<=d && d<=31)
			ch=1;}
	else if(m=="apr" || m=="jun" || m=="sep" || m=="nov")
	{	if(1<=d && d<=30)
			ch=1;}
	else if(m=="feb" && yy%4 == 0)
		{if(1<=d && d<=29)
			ch=1;}
	else if(m=="feb" && yy%4 != 0)
                {if(1<=d && d<=28)
                        ch=1;}

	
}

if(ch==1)
{
//cout<<"vaild date"<<endl;
return true;
}
else
{
 cout<<"invalid";
 return false;
}

}






/*
bool Validation :: dobValidation(string dob)
{
int length = dob.length();
int flag=1;
if(dob[2] == "-" && dob[6] == "-")
 {
   flag=1;
 }
else
 {
  flag = 0;
 
 }

int year1;
string year = year.substr(7,4);
istringstream(year) >> year1;
if(year1<2014)
 {
  flag=1;
 }
else
 { 
 flag=0;

 }

int month1;
string  month = month.substr(4,3);
istringstream(month) >> month1;
if(month1<12)
 {
  flag=1;
 }
else
 {
  flag=0;
 
 }

int day1;
string day = day.substr(0,2);
istringstream(day) >> day1;
if(day1<31)
 {
  flag=1;
 }
else
 {
  flag = 0;
 
 }

if(month=="FEB" || month=="feb" && day1 <30)
 {
 flag=1;
 }
else
 {
 flag = 0;
 } 

if(flag == 0)
        {
                return false;
        }
        else
            {
                return true;

           }

}*/

/*
bool Validation :: CI(string s)
{
   int flag =1;
   long int v;
  (istringstream(s) >> v);
  if(v>111111 && v < 444444)
   {
    flag=1;
   }
  else
   {
   flag=0;
     
   }
 
   if(flag == 0)
        {
                return false;
        }
        else
                return true; 
                
}



int Validation::validatePhoneNumber(string number,int& n)
{
for (int i = 0; i < number.length(); i++) 
 { 
   if (isdigit(number[i]))
      n=1; 
    return n; 
 } 
 CustomerUI::getCustomerMobileNumber(l_number); 
   return 3; 
}

int Validation::validateName(string name,int& n)
{
char ch[25];
strcpy(ch,name.c_str());
int length = name.size(); 

  for (int i = 0; i < length; i++) 
  { 
	if( isalpha(ch[i]))
	{
		 n =1; 
	}else
	{
		n=0;
		return n; 
	}
  }
 CustomerUI::getCustomerName(l_customername); 
  return 3; 
} 

oi
*/

bool  Validation::mobileValidation(string number)
{
    int length = number.length();    
    long int number1;
    (istringstream(number) >> number1);
   //  int  flag=1;
   
   for(int i=1;i<=10;i++)
   {
    if (isalpha(number[i]))
     {
      return false;
     }  
    else
     {
     return true;
     }
/*
 }
       if(number1>7000000000 && number1<9999999999)
	{
		return true;
	}
	else
	{
          return false;
        } */
}

}


bool  Validation::ageValidation(string number)
{
   
     int number1;
   (istringstream(number) >> number1);
      int  flag=1;
    if(number1>0 && number1<151)
        {
                return true;
        }
        else
        { 
	        return false;
        }
/*  for(int i=0;i<3;i++)
   {
     if (isdigit(number[i]))
       {
       return true;
       }
     else
       {
       return false;
       }
  */      


}



bool  Validation::pincodeValidation(string number)
{

    long int number1;
    (istringstream(number) >> number1);
    int  flag=1;
    if(number1>100000 && number1<999999)
        {
                return true;
        }
        else
                return false;

}



/*bool  Validation::accnoValidation1(string number)
{

    long int number1;
    (istringstream(number) >> number1);
    int  flag=1;
    if(number1>100000 && number1<999999)
        {
                return true;
        }
        else
                return false;

}*/








bool Validation::panValidation(string pannumber)
{
   int length = pannumber.length();
   int flag=1;

          if(length > 10 && length < 10)
          {
            flag=0;
          }

         
   for(int i=0;i<5;i++)
   {
      if((pannumber[i] >= 'a' && pannumber[i] <= 'z') || (pannumber[i] >= 'A' && pannumber[i] <= 'Z')  )
                        {
                          flag=1;
                          continue;
                        }    
                else
                {
                        flag=0;
                        break;
                }
    
   }
for (int j=5;j<9;j++)
{
  if (isdigit(pannumber[j]))
       {
         return true;
       }
     else
       {
        return false;
       }

 }  




/*  for (int j=5;j<9;j++)
    {
      if( (pannumber[j] >= 1) && (pannumber[j] <= 9 )) 
        {
         flag=1;  
	 continue;
        }
      else
        {
           flag=0;
           break; 
        } 
    } */

   
                if((pannumber[9] >= 'a' && pannumber[9] <= 'z') || (pannumber[9] >= 'A' && pannumber[9] <= 'Z') )
                  {
 		    //cout<<BOLDMAGENTA;
                    flag=1;
                   }
                else
                {
                        flag=0;
                     
                }

                
        if(flag == 0)
        {
                return false;
        }
        else
               return true;

}


void Validation::getNum(float& amount)
{
while(!(cin>>amount))
  {
    cin.clear();
    cin.ignore(80,'\n');
	cout<<setw(30)<<""<<BOLDRED<<setw(30)<<"Please enter digits only...."<<RESET<<endl;
        cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Enter initial amount:"<<RESET;

  }
}

void Validation::getNum1(float& amount)
{
while(!(cin>>amount))
  {
    cin.clear();
    cin.ignore(80,'\n');
        cout<<setw(30)<<""<<BOLDRED<<setw(30)<<"Please enter digits only...."<<RESET<<endl;
        cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Enter amount:"<<RESET;

  }
}

void Validation::getNum2(float& amount)
{
while(!(cin>>amount))
  {
    cin.clear();
    cin.ignore(80,'\n');
        cout<<setw(30)<<""<<BOLDRED<<setw(30)<<"Please enter digits only...."<<RESET<<endl;
        cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Enter amount for fixed deposit:"<<RESET;

  }
}

void Validation::getMenu(int& type)
{
while(!(cin>>type))
  {
    cin.clear();
    cin.ignore(80,'\n');
        cout<<setw(30)<<""<<BOLDRED<<setw(30)<<"Please enter digits only...."<<RESET<<endl;
        cout<<setw(30)<<""<<BOLDBLACK<<left<<setw(30)<<"Enter option:"<<RESET;

  }
}





bool Validation::accnoValidation(string accno)
{
    long int accno1;
   (istringstream(accno) >> accno1);
    int  flag=1;
   if(DB::checkAccno(accno1) == FAILED)
   {
    return FAILED;
   }
 if(accno1>100000 && accno1<999999)
   {
    return true;
   }
 else 
   {
   return false;
   }

}






bool Validation :: CI(string s)
{
   int flag =1;
   long int v;
  (istringstream(s) >> v);
  if(DB::checkCustomer(v) == FAILED)
   {
    return FAILED;
   }
   
 
 if(v>100000 && v<999999)
   {
    return true;
   }
 else
  {
   return false;
  } 
 
}

