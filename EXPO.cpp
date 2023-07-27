#include <iostream>
using namespace std;

int main(){
	char operasi;
	float angka1, angka2, hasil;
	
	cout<<"========================================="<<endl;
	cout<<" K   A   L   K   U   L   A   T   O   R   "<<endl;
	cout<<"========================================="<<endl;
	cout<<"Masukan Angka Pertama :";
	cin>>angka1;
	cout<<"Masukan Angka Kedua :";
	cin>>angka2;
	cout<<"========================================="<<endl;
	cout<<"Operasi Bilangan 1 = ( * )"<<endl;
	cout<<"Operasi Bilangan 2 = ( / )"<<endl;
	cout<<"Operasi Bilangan 3 = ( + )"<<endl;
	cout<<"Operasi Bilangan 4 = ( - )"<<endl;
	cout<<"Input Operasi Bilangan :";
	cin>>operasi;
	cout<<"========================================="<<endl;
	if (operasi == '1')
	{
		hasil=angka1*angka2;
		cout<<"Perkalian ( * )"<<endl;
		cin>>angka2;
		cout<<"Hasil dari " <<angka1 <<" * " <<angka2 <<" adalah " <<hasil<<endl;
	}else if (operasi == '2')
	{
		hasil=angka1/angka2;
		cout<<"Pembagian ( / ) "<<endl;
		cout<<"Hasil dari " <<angka1 <<" / " <<angka2 <<" adalah " <<hasil<<endl;
	}else if (operasi == '3')
	{
		hasil=angka1+angka2;
		cout<<"Penjumlahan ( + ) "<<endl;
		cout<<"Hasil dari " <<angka1 <<" + " <<angka2 <<" adalah " <<hasil<<endl;
	}else if (operasi == '4')
	{
		hasil=angka1-angka2;
		cout<<"Pengurangan ( - ) "<<endl;
		cout<<"Hasil dari " <<angka1 <<" - " <<angka2 <<" adalah " <<hasil<<endl;
	}else{
		cout<<"Operasi Bilangan yang Anda Input Eror!"<<endl;
	}
	cout<<"========================================="<<endl;
	cout<<"   T  E  R  I  M  A     K  A  S  I  H    "<<endl;
	cout<<"========================================="<<endl;
return 0;	
}
