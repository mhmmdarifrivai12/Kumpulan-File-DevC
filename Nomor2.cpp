#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int kolom=0;
	cout<<"Masukan kolom	:";
	cin>>kolom;
	for(int i = 1; i <= 100; i++){
        cout<<i<<" ";
        if(i%kolom==0){
        	cout<<endl;
		}
    }
	
getch();
}
