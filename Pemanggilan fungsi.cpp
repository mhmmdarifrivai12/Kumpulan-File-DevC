#include <iostream>
#include <conio.h>
using namespace std;

	int penjumlahan (int angka1, int angka2);
main(){
	int a=0, b=0, h=0;
	cout<<"Masukkan Nilai Pertama	:";
	cin>>a;a
	cout<<"Masukan Nilai Kedua	:";
	cin>>b;
	h=penjumlahan(a,b);
	cout<<h<<endl;
}
int penjumlahan(int angka1, int angka2){
	int hasil=angka1+angka2;
	return(hasil);
} 
