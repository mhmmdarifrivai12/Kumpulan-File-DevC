#include <iostream>
#include <conio.h>
using namespace std;

struct Mahasiswa{
	string nama, alamat;
	int smester;
	float IPS;
	bool status_aktif;
};
main(){
	Mahasiswa mhs1[2];
	
	mhs1[0].nama="Arif Rivai";
	mhs1[0].alamat="Kemiling";
	mhs1[0].smester=2;
	mhs1[0].IPS=4.00;
	mhs1[0].status_aktif=false;
	
	mhs1[1].nama="Boba";
	mhs1[1].alamat="Kemiling";
	mhs1[1].smester=2;
	mhs1[1].IPS=3.50;
	mhs1[1].status_aktif=true;
	
	for(int i=0;i<2;i++){
	cout<<"Nama	:"<<mhs1[i].nama<<endl;
	cout<<"Alamat	:"<<mhs1[i].alamat<<endl;
	cout<<"Smester	:"<<mhs1[i].smester<<endl;
	cout<<"IPK	:"<<mhs1[i].IPS<<endl;
	cout<<"Status	:"<<mhs1[i].status_aktif<<endl;
	}
}

