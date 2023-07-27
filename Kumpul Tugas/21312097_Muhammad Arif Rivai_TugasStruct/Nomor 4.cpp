#include <iostream>
#include <conio.h>
using namespace std;

struct identitas{
	string nama;
	string alamat;
	int tanggal;
	int bulan;
	int tahun;
};
void cetakidentitas(identitas d){

	int umur;
	cout<<"===Mencetak Identitas==="<<endl;
	cout<<"Nama Lengkap	:"<<d.nama<<endl;
	cout<<"Tanggal Lahir	:"<<d.tanggal<<"/"<<d.bulan<<"/"<<d.tahun<<endl;
	umur=2022-d.tahun;
	cout<<"Usia		:"<<umur<<endl;
	cout<<"Alamat		:"<<d.alamat<<endl;
}

identitas dataidentitas(){
	identitas i;
	cout<<"Structure Identitas dan Umur"<<endl;
	cout<<"Nama		:";
	getline(cin, i.nama);
	cout<<"Alamat		:";
	getline(cin, i.alamat);
	cout<<"Tanggal lahir	:";
	cin>>i.tanggal;
	cout<<"Bulan Lahir	:";
	cin>>i.bulan;
	cout<<"Tahun Lahir	:";
	cin>>i.tahun;
	
	return(i);
}

int main(){
	identitas iden = dataidentitas();
	cetakidentitas(iden);
	

return 0;
}