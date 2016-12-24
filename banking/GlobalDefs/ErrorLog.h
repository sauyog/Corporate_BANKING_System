#ifndef _ERRORLOG_H_
#define _ERRORLOG_H_
#include<fstream>
#include<string>
using namespace std;
class ErrorLog
	{ 
		public:	
		string s;
		static void openErrorLog(string);
         	static void closeErrorLog(string);
	};
#endif
