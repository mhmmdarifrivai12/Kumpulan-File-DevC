#include <iostream> 
#include <conio.h>
using namespace std;
main()
{
	string namamakanan;
	float jumlahporsi, harga;
	float totalharga, totalpembayaran;
	float jumlahpembayaran, potongan;
	float discoun;
	
	cout<<"===========RESTORAN===========\n";
	cout<<"Nama Makanan :";
	cin>>namamakanan;
	cout<<"Harga Makanan :";
	cin>>harga;
	cout<<"Jumlah Porsi :";
	cin>>jumlahporsi;
	totalharga=harga*jumlahporsi;
	cout<<"Total Harganya :"<<totalharga;
	potongan=totalharga*5/100;
	totalpembayaran=totalharga-potongan;
	cout<<"\n===========================";
	cout<<"\nPotongan harga 5% :"<<potongan;
	cout<<"\n===========================";
	cout<<"\nTotal Pembayaran :"<<totalpembayaran;
	cout<<"\n=======TERIMA==KASIH=======";
getch();	
}
