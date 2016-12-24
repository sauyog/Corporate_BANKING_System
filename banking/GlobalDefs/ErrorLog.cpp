#include "ErrorLog.h"

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void ErrorLog::openErrorLog(string s)
{	ofstream object1;
	object1.open("Error_Log.txt" , ios::app);
        object1<<s;
	cout<<endl;
        object1.close();
}
/*
void ErrorLog::closeErrorLog(string s)
{
	object1<<s;
	object1.close();
	
}*/
