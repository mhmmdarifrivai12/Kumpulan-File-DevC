#include <iostream>
#include <conio.h>
using namespace std;
main(){
	string barang;
	float harga, qty, biaya;
	float disc, diskon, pajak;
	
	cout<<"Nama Barang :";
	cin>>barang;
	cout<<"Harga Barang :";
	cin>>harga;
	cout<<"Jumlah Barang :";
	cin>>qty;
	
	biaya=harga*qty;
	cout<<"Biaya :"<<biaya;
	
	diskon=0.5*harga;
	cout<<"Diskon :"<<diskon;
	
	
getch();
}
