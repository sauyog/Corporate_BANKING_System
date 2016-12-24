#ifndef _SQL_ERROR_H
#define _SQL_ERROR_H
#include <string>
using namespace std;

class SqlError {
  int SqlCode;
  string SqlErrorMessage;
  string ApplicationErrorMessage;
  
public:
  SqlError(int SqlCode, string SqlErrorMessage, string ApplicationErrorMessage);
  void displaySqlError();
};

#endif
