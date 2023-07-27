#include <iostream> 
#include <conio.h>
using namespace std;
main()
{
	float luas,r;
	
	cout<<"Input Nilai Jari Jari :";
	cin>>r;
	luas=3.14*r*r;
	cout<<"Jadi Nilai Luas Lingkaran :"<<luas<<endl;
	
	if (r >= 50){
		cout<<"Luasnya Adalah Besar";
	}
	else if ((r >= 20) && (r < 49)){
		cout<<"Luasnya Adalah Sedang";
	}
	else{
		cout<<"Luasnya Adalah Kecil";
	}
getch();	
}
