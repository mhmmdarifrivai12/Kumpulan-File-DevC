#include <iostream>
#include <conio.h>
using namespace std;

struct Mahasiswa{
	string nama, alamat;
	int smester;
	float IPS[5];
	bool status_aktif;
};
main(){
	Mahasiswa mhs1, mhs2;
	
	mhs1.nama="Arif Rivai";
	mhs1.alamat="Kemiling";
	mhs1.smester=2;
	mhs1.IPS[0]=4.00;
	mhs1.IPS[1]=3.80;
	mhs1.IPS[2]=8.75;
	mhs1.status_aktif=false;
	
	cout<<"Nama	:"<<mhs1.nama<<endl;
	cout<<"Alamat	:"<<mhs1.alamat<<endl;
	cout<<"Smester	:"<<mhs1.smester<<endl;
	cout<<"IPK	:"<<mhs1.IPS[0]<<endl;
	cout<<"IPK	:"<<mhs1.IPS[1]<<endl;
	cout<<"IPK	:"<<mhs1.IPS[2]<<endl;
	cout<<"Status	:"<<mhs1.status_aktif<<endl;
	
}

