#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	char nilai;
	
	cout<<"Input Nilai	:";
	cin>>nilai;
	
	if (nilai == '4'){
		int input[4][4]= {{1,1,1,1},{1,0,0,1},{1,0,0,1},{1,1,1,1}};
		
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
			cout<<input[i][j];
		}
		cout<<endl;
	}}
	else if (nilai == '5'){
		int input[5][5]= {{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,1}};
		
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
			cout<<input[i][j];
		}
		cout<<endl;
	}}
	else if (nilai == '6'){
		int input[6][6]= {{1,1,1,1,1,1},{1,0,0,0,0,1},{1,0,0,0,0,1},{1,0,0,0,0,1},{1,0,0,0,0,1},{1,1,1,1,1,1}};
		
		for(int i=0;i<6;i++){
			for(int j=0;j<6;j++){
			cout<<input[i][j];
		}
		cout<<endl;
	}}
	else {
		cout<<"Inputan Salah!";
	}		
getch();
}
