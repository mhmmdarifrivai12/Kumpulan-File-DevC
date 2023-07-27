#include <iostream>
#include <conio.h>
using namespace std;
main() 
{
	float jumlah,jumlah2,jumlah3,jumlah4, harga, harga2,harga3,harga4, subtotal, cash;
	float totalharga, pajakbayar, kembalian, payment;
	char barang;
	string namamakanan;
	
	cout<<"         YOSHINOYA"<<endl;
	cout<<"         AHMAD YANI"<<endl;
	cout<<"1 POS1       119005 Tubagus B."<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"11803"<<endl;
	cout<<"     06 Dec 21 14:32:43	"<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"--------- DINE IN ------------"<<endl;
	cout<<"Nama Makanan	:";
	cin>>namamakanan;
	cout<<"Harga Makanan	:";	
	cin>>harga;
	cout<<"Jumlah Beli	:";
	cin>>jumlah;
	cout<<endl;
	cout<<"Pesan Lagi [y/n] :";
	cin>>barang;
	cout<<endl;
	
	if (barang == 'y') // 1
	{
	cout<<"Nama Makanan	:";
	cin>>namamakanan;
	cout<<"Harga Makanan	:";	
	cin>>harga2;
	cout<<"Jumlah Beli	:";
	cin>>jumlah2;
	cout<<endl;
	cout<<"Pesan Lagi [y/n] :";
	cin>>barang;
	cout<<endl;
	}

	else if (barang == 'y') // 1
	{
	cout<<"Nama Makanan	:";
	cin>>namamakanan;
	cout<<"Harga Makanan	:";	
	cin>>harga2;
	cout<<"Jumlah Beli	:";
	cin>>jumlah2;
	cout<<endl;
	cout<<"Pesan Lagi [y/n] :";
	cin>>barang;
	cout<<endl;
	}
	else
	{
	cout<<"---------------------------------"<<endl;
	}
	subtotal=(harga*jumlah)+(harga2*jumlah2);
	cout<<"Sub Total	:"<<subtotal<<endl;
	pajakbayar=subtotal*0.1;
	cout<<"Pajak Bayar 10%	:"<<pajakbayar<<endl;
	payment=subtotal+pajakbayar;
	cout<<"Payment		:"<<payment<<endl;
	
	cout<<"=================================="<<endl;
	
	cout<<"Cash		:";
	cin>>cash;
	
	kembalian=cash-payment;
	cout<<"Kembalian	:"<<kembalian<<endl;
	cout<<"=========== TERIMA KASIH =========="<<endl;
	cout<<"===================================";
getch();
}

