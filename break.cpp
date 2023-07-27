#include <iostream>
#include <conio.h>
using namespace std;

main(){
	for (int x=100;x>=1;x--){
		if(x==1){
			cout<<"Berhenti";
			break;
		}
		cout<<x<<" ";
	}
getch();
}
