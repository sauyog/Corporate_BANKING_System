#ifndef _VALIDATION_H_
#define _VALIDATION_H_
#include <string>
using namespace std;

class Validation
{
public:
static  void getNum(float&);
static  void getNum1(float&);
static  void getNum2(float&);
static  void getMenu(int&);

static  bool stringValidation(string);
static  bool mobileValidation(string);
static  bool panValidation(string);
static  bool pincodeValidation(string);
static  bool dobValidation(string);
static  bool CI(string);
static  bool accnoValidation(string);
static  bool ageValidation(string);
static  bool accnoValidation1(string);
//static int validateCustomerId(string);
//static int validateGuranteerName(string);
//static int validateGuranteerAccno(string);
//static int validateAccountNo(string);
//static void validatePhoneNumber(string);

};
#endif
