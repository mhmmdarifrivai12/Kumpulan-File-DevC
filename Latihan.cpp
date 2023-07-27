#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	
	int bmk, uph, ja;
	float tunj, tg, ght;
	
	cout<<"BANYAK MASUK KERJA	:";cin>>bmk;
	cout<<"UPAH PERHARI		:";cin>>uph;
	cout<<"JUMLAH ANAK		:";cin>>ja;
	tg=bmk*uph;
	
	if (ja==1)
	{
		tunj=0.02*tg;
	}
	else if (ja==2)
	{
		tunj=0.05*tg;
	}
	else if (ja==3)
	{
		tunj=0.1*tg;
	}
	else
	{
		tunj=0*tg;
	}
	ght=tg+tunj;
	cout<<"\nTOTAL GAJI		:"<<tg;
	cout<<"\nTUNJANGAN		:"<<tunj;
	cout<<"\nGAJI HARUS DI TERIMA	:"<<ght;
	
getch();
}

	float luas,r, tinggi, panjang, lebar, alas;
	char input;
	
	cout<<"============SILAHKAN PILIH MENU============"<<endl;
	cout<<"	[1] LUAS PERSEGI PANJANG"<<endl;
	cout<<"	[2] LUAS SEGITIGA"<<endl;
	cout<<"	[3] LUAS LINGKARAN"<<endl;
	cout<<"==========================================="<<endl;
	cout<<"Inputkan Pilihan [1] [2] [3]	:";
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
	luas=3.14*r*r;
	cout<<"Jadi Nilai Luas Lingkaran	:"<<luas;
	}
	else {
		cout<<"Yang Anda Input Salah";
	}
	cout<<endl<<"===========================================";




















