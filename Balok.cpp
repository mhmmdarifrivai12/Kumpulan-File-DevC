#include <iostream>  
#include <conio.h>
using namespace std;
main()
{
	int panjang,lebar,tinggi,volume;
	
	cout<<"Input Nilai Panjang :";
	cin>>panjang;
	cout<<"Input Nilai Lebar :";
	cin>>lebar;
	cout<<"Input Nilai Tinggi :";
	cin>>tinggi;
	volume=panjang*lebar*tinggi;
	cout<<"Jadi Nilai volume balok adalah :"<<volume;
	
getch();
}
