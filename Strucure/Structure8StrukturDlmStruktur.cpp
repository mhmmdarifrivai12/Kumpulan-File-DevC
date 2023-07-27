#include <iostream>
#include <conio.h>
using namespace std;

struct Mahasiswa{
	string nama, alamat;
	int smester;
	float IPK;
	bool status_aktif;
	struct tanggal{
		int tgl,bln,thn;
}tgllhr;
};
main(){
	Mahasiswa mhs1, mhs2;
	
	mhs1.nama="Arif Rivai";
	mhs1.alamat="Kemiling";
	mhs1.smester=2;
	mhs1.IPK=4.00;
	mhs1.status_aktif=false;
	mhs1.tgllhr.tgl=5;
	mhs1.tgllhr.bln=2;
	mhs1.tgllhr.thn=2003;
	
	cout<<"Nama	:"<<mhs1.nama<<endl;
	cout<<"Alamat	:"<<mhs1.alamat<<endl;
	cout<<"Smester	:"<<mhs1.smester<<endl;
	cout<<"IPK	:"<<mhs1.IPK<<endl;
	cout<<"Status	:"<<mhs1.status_aktif<<endl;
	cout<<"ttl	:"<<mhs1.tgllhr.tgl<<"/"<<mhs1.tgllhr.bln<<"/"<<mhs1.tgllhr.thn;
	
}

