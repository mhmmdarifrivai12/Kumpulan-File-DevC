#include <iostream>
#include <conio.h>

using namespace std;

struct lahir{
	char hari[10];
	int tgl,bln,thn;
};

lahir datalahir(){
	lahir l;
	cout<<"Menyimpan Tanggal Lahir"<<endl;
	cout<<"Hari Lahir	:";
	cin>>l.hari;
	cout<<"Tanggal Lahir	:";
	cin>>l.tgl;
	cout<<"Bulan Lahir	:";
	cin>>l.bln;
	cout<<"Tahun Lahir	:";
	cin>>l.thn;
	
	return (l);
}
main(){
	char pilih;
	do{
	lahir tgl= datalahir();
	
	cout<<endl<<endl;
	cout<<"Simpan dan Ulangi Program? (y/t) "; 
	cin>>pilih;
	cout<<endl;
}while(pilih == 'y' || pilih == 'Y');
	cout<<"Terima kasih";
	
	return 0;
}