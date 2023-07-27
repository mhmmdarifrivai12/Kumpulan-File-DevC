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
	Mahasiswa mhs1={"Arif","Kemiling",2,4.00,true};
	
	cout<<"Nama	:"<<mhs1.nama<<endl;
	cout<<"Alamat	:"<<mhs1.alamat<<endl;
	cout<<"Smester	:"<<mhs1.smester<<endl;
	cout<<"IPK	:"<<mhs1.IPK<<endl;
	cout<<"Status	:"<<mhs1.status_aktif<<endl;
	
}

