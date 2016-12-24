#include<iostream>
#include<string>
#include<ncurses.h>
using namespace std;
main()
{
int ch;
int row,col;
initscr();
raw();
keypad(stdscr, TRUE);
noecho();
getmaxyx(stdscr,row,col);
move(row/2,col/2);
printw("type any char");

mvprintw(row/2-1,col/2,"hello");
ch=getch();
printw("\n");
attron(A_BOLD|A_UNDERLINE);
printw("%c",ch);
attroff(A_BOLD|A_UNDERLINE);
refresh();
getch();
endwin();

}
