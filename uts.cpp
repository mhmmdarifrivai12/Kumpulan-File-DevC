#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float luas,r, tinggi, phi=3.14, panjang, lebar, alas;
	char input;
	
	cout<<"==============INPUTKA NOMOR DIBAWAH==============="<<endl;
	cout<<"	[1] LUAS PERSEGI PANJANG"<<endl;
	cout<<"	[2] LUAS SEGITIGA"<<endl;
	cout<<"	[3] LUAS LINGKARAN"<<endl;
	cout<<""<<endl;
	cout<<"Inputkan Pilihan [1 .. 3]	:";
	cin>>input;
	
	if (input == '1')
	{	
		cout<<"===========LUAS PERSEGI PANJANG============"<<endl;
		cout<<"Inputkan Nilai Panjang		:";
		cin>>panjang;
		cout<<"Inputkan Nilai Lebar		:";
		cin>>lebar;
		luas=panjang*lebar;
		cout<<"Jadi Nilai Luas Persegi Panjang	:"<<luas;
	}else if (input == '2')
	{
	cout<<"==============LUAS SEGITIGA==============="<<endl;	
	cout<<"Input Nilai Alas		:";
	cin>>alas;
	cout<<"Input Nilai Tinggi		:";
	cin>>tinggi;
	luas=alas*tinggi/2;
	cout<<"Jadi Nilai Luas Segitiga	:"<<luas;
	}else if (input == '3')
	{
	cout<<"=============LUAS LINGKARAN=============="<<endl;	
	cout<<"Input Nilai Jari Jari	:";
	cin>>r;
	luas=phi*r*r;
	cout<<"Jadi Nilai Luas Lingkaran	:"<<luas;
	}
	else {
		cout<<"Yang Anda Input Salah";
	}
	cout<<endl<<"================================";

	
	
	
	
	
		
getch();	
}
