#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	char barang[30];
	int pot, jumlahbeli, hargabarang;
	float bayar;
	
	cout<<"Username :";
	cin.getline(barang [30]);
	cout<<"Harga Barang :";
	cin>>hargabarang;
	cout<<"Jumlah Beli :";
	cin>>jumlahbeli;
	
	bayar=jumlahbeli*hargabarang;
	
	if (bayar >= 70000)
	{
		pot=bayar*0.1;
		cout<<"Potongan 10% :"<<pot<<endl;
		cout<<"Total Bayar :"<<bayar-pot;
	} 
	else if (bayar >= 40000 )
	{
		pot=bayar*0.05;
		cout<<"Potongan 5% :"<<pot<<endl;
		cout<<"Total Bayar :"<<bayar-pot;
	}
	else
	{
		cout<<bayar;
	}
	
	cout<<"Total Bayar :"<<
	
	
getch();
}
