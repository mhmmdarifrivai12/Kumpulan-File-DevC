#include <iostream> 
#include <conio.h>
using namespace std;
main()
{
	string nb;
	float hs,kb,hb,jb;
	
	cout<<"Input Nama Barang :";
	cin>>nb;
	cout<<"Input Kode Barang :";
	cin>>kb;
	cout<<"Input Jumlah Beli Barang :";
	cin>>jb;
	cout<<"Input Harga Barang :";
	cin>>hb;
	hs=jb*hb;
	cout<<"Jadi Harga Semuanya Adalah :"<<hs;
	
getch();	
}
