#ifndef _MAINUI_H_
#define _MAINUI_H_

#include<iostream>
#include<iomanip>
using namespace std;

class MainUI
{
  public:
  static void displayUserMessage(string);
  static int  getUserOption(string&);
  static bool toContinue();
  static void displayCRMenu();
  static void displayClerkMenu();
  static void displayManagerMenu();
};

#endif

