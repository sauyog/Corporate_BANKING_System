#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
#include<ncurses.h>
using namespace std;
int main()
{
int i=0,j=12;
initscr();
while(i<j)
{
//system("sleep 1");
cout<<i;
refresh();
napms(50);
//system("clear");
++i;

}

return 0;
}
