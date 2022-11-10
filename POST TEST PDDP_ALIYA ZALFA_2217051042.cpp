#include <iostream>
#include <windows.h>
using namespace std;

int main(){
  	system ("color 2f");
  	system ("color 0e");
  	char x= 177, y=219;
  	cout<< "\n\n\n\t\t\t\t\tLoading....";
  	cout<<"\n\n\n";
  	cout<< "\t\t\t\t\t ";
  	
  	
    for(int i=0;i<=25;i++){
    	cout << x;
    	Sleep(150);
    	
    	cout <<"\r";
    	cout <<"\t\t\t\t\t ";
    	
        for(int i=0;i<=25;i++){
    	cout << y;
    	Sleep(200);
		
        }
    }
       system("pause>0");
       return 0;
}

