#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
main(){
	string nama1=("Hot Deal H");
	string nama2=("Hot Deal O");
	string nama3=("Matcha L JB-T");
	string nama4=("Taro Milk JB-T");
	int jumlahbeli1, jumlahbeli2, jumlahbeli3, jumlahbeli4, kembalian;
	int harga1, harga2, harga3, harga4, subtotal, payment, cash;
	float pajakbayar;
	char namakasir [30], bukti;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"Nama Kasir		:";
	cin.getline(namakasir, 30);
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"Nama Makanan		:"<<nama1<<endl;
	cout<<"Harga Makanan		:";
	cin>>harga1;
	cout<<"Jumlah Beli		:";
	cin>>jumlahbeli1;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"Nama Makanan		:"<<nama2<<endl;
	cout<<"Harga Makanan		:";
	cin>>harga2;
	cout<<"Jumlah Beli		:";
	cin>>jumlahbeli2;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"Nama Makanan		:"<<nama3<<endl;
	cout<<"Harga Makanan		:";
	cin>>harga3;
	cout<<"Jumlah Beli		:";
	cin>>jumlahbeli3;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"Nama Makanan		:"<<nama4<<endl;
	cout<<"Harga Makanan		:";
	cin>>harga4;
	cout<<"Jumlah Beli		:";
	cin>>jumlahbeli4;
	cout<<"-------------------------------------------------------"<<endl;
	subtotal=(harga1*jumlahbeli1)+(harga2*jumlahbeli2)+(harga3*jumlahbeli3)+(harga4*jumlahbeli4);
	cout<<"Sub Total	:"<<subtotal<<endl;
	pajakbayar=subtotal*0.1;
	cout<<"Pajak Bayar 10%	:"<<pajakbayar<<endl;
	payment=subtotal+pajakbayar;
	cout<<"Payment		:"<<payment<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"Cash		:";
	cin>>cash;
	
	kembalian=cash-payment;
	cout<<"Kembalian	:"<<kembalian<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"Tarik Bukti Struk [y/n]";
	cin>>bukti;
	
	cout<<"-------------------------------------------------------"<<endl;
	if (bukti == 'y'){
		cout<<endl<<endl<<endl<<endl<<endl;
		cout<<"                   YOSHINOYA"<<endl;
		cout<<"                   AHMAD YANI"<<endl;
		cout<<"1 POS1                            119005 "<<namakasir<<endl;
		cout<<"---------------------------------------------------"<<endl;
		cout<<"11803"<<endl;
		cout<<"               06 Dec 21 14:32:43	"<<endl;
		cout<<"---------------------------------------------------"<<endl;
		cout<<"------------------- DINE IN -----------------------"<<endl;
		cout<<jumlahbeli1<<"  "<<nama1<<"\t\t\t\t"<<harga1<<endl;
		cout<<jumlahbeli2<<"  "<<nama2<<"\t\t\t\t"<<harga2<<endl;
		cout<<jumlahbeli3<<"  "<<nama3<<"\t\t\t"<<harga3<<endl;
		cout<<jumlahbeli4<<"  "<<nama4<<"\t\t\t"<<harga4<<endl;
		cout<<"\n";
		cout<<"   "<<"Subtotal"<<"\t\t\t\t"<<subtotal<<endl;
		cout<<"   "<<"PB1"<<"\t\t\t\t\t"<<pajakbayar<<endl;
		cout<<"   "<<"Total"<<"\t\t\t\t"<<payment<<endl;
		cout<<"   "<<"Payment"<<"\t\t\t\t"<<payment<<endl;
		cout<<"   "<<"Cash"<<"\t\t\t\t\t"<<cash<<endl;
		cout<<"   "<<"kembalian"<<"\t\t\t\t"<<kembalian<<endl;
		cout<<"---------------------------------------------------"<<endl;
		cout<<"---------119005 CLOSED 06 Dec 21 14:34:13----------"<<endl;
		cout<<"-------------------Terimakasih---------------------"<<endl;
		cout<<endl<<endl<<endl<<endl;
	}
	else {
		cout<<"-------------------Terimakasih---------------------"<<endl;
	}
	
getch();
}
