#include "SqlError.h"

#include <string>
#include <iostream>
#include <iomanip>
#include "../../GlobalDefs/GlobalDefs.h"


using namespace std;

SqlError::SqlError(int SqlCode, string SqlErrorMessage, string ApplicationErrorMessage)
{
	this->SqlCode = SqlCode;
        this->SqlErrorMessage = SqlErrorMessage;
	this->ApplicationErrorMessage = ApplicationErrorMessage;
}

void SqlError::displaySqlError()
{
 cout<<setw(30)<<""<<BOLDRED<<left<<setw(30)<<ApplicationErrorMessage<<" :SQL_CODE:"<<SqlCode<<"  SQL_ERROR:"<<SqlErrorMessage<<RESET<<endl;
}

