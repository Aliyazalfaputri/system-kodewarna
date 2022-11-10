#include <ncurses.h>
#include <windows.h>
using namespace std;

int main(){
	system ("color 15");
	initscr();
	
	mvprintw(2,4, "DDP");
	refresh();
	getch();
	endwin();
}
