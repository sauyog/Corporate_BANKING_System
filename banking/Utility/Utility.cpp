#include "../Utility/Utility.h"
#include<fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string Utility::to_String(int Number)
{
 string Result;          // string which will contain the result

 ostringstream convert;   // stream used for the conversion

 convert << Number;      // insert the textual representation of 'Number' in the characters in the stream

 Result = convert.str(); 

 return Result;
}

void Utility::mail(string cid,string cname,string email)

{

        //string mailid="u729466@INHYDILPUNIX01.india.tcs.com";
//	cout<<email<<endl;
        string subject1,message;
        subject1="Your Custermer id is generated";
	string cmdd  = "/bin/mail";
        message="        ********************************Qcity Bank********************************\n"  "Hello " + cname + "," + "\n" + "Thank you for registering with us \n" + "Your CustomerID " + cid;
        ofstream tmp("textfile.txt");
       // receiver=email;
     //   string cmdd  = "/bin/mail";
        tmp << message <<endl;;
        tmp.close();
        cmdd = cmdd + " -s '" + subject1 + "'" + " " + email + " < textfile.txt";
        cout<<cmdd<<endl;
        system(cmdd.c_str());
}
