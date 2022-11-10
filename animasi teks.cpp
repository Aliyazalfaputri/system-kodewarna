#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int kolom, int baris){
	COORD posisi = {kolom,baris};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), posisi);
	
}

int main(){
	for (int i=0;i<70; i++){
		gotoxy(i,10);
		cout << "Hallo Dunia!";
		Sleep(100);
		gotoxy(i,10);
		cout<< "                     ";
		if (i==69){
			i=0;
		}
	}
}
