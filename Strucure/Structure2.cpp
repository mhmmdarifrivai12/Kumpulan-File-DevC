#include <iostream>
#include <conio.h>
using namespace std;

struct Mahasiswa{
	string nama, alamat;
	int smester;
	float IPK;
	bool status_aktif;
};
main(){
	Mahasiswa mhs1, mhs2;
	
	mhs1.nama="Arif Rivai";
	mhs1.alamat="Kemiling";
	mhs1.smester=2;
	mhs1.IPK=4.00;
	mhs1.status_aktif=false;
	
	cout<<"Nama	:"<<mhs1.nama<<endl;
	cout<<"Alamat	:"<<mhs1.alamat<<endl;
	cout<<"Smester	:"<<mhs1.smester<<endl;
	cout<<"IPK	:"<<mhs1.IPK<<endl;
	cout<<"Status	:"<<mhs1.status_aktif<<endl<<endl;
	
	mhs2.nama="Arif Rivai";
	mhs2.alamat="Kemiling";
	mhs2.smester=2;
	mhs2.IPK=4.00;
	mhs2.status_aktif=false;
	
	cout<<"Nama	:"<<mhs2.nama<<endl;
	cout<<"Alamat	:"<<mhs2.alamat<<endl;
	cout<<"Smester	:"<<mhs2.smester<<endl;
	cout<<"IPK	:"<<mhs2.IPK<<endl;
	cout<<"Status	:"<<mhs2.status_aktif<<endl;
	
}

