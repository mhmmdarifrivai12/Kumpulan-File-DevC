#include <iostream> 
#include <conio.h>
using namespace std;
main()
{
	float totalpenjualan, hargabarang, bonus ;
	float jumlahbarang, besarbonus;
	
	cout<<"Harga Barang :";
	cin>>hargabarang;
	cout<<"Jumalah Barang :";
	cin>>jumlahbarang;
	
	totalpenjualan=hargabarang*jumlahbarang;
	cout<<"Total Penjualan :"<<totalpenjualan<<endl;
	
	besarbonus=totalpenjualan*30/100;
	cout<<"Besar Bonus :"<<besarbonus;
getch();	
}
