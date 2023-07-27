#include <iostream>
#include <conio.h>
using namespace std;

struct Alamat{ //variabelnya
	string jalan, kelurahan;
	string kecamatan, kabupaten;
	string provinsi,negara;
	int rt, rw;
};
	
void cetakalamat(Alamat A){ //untuk mencetak bentukseperti ini
	cout<<A.jalan<<", RT :"<<A.rt<<" RW :"<<A.rw<<", ";
	cout<<A.kelurahan<<", "<<A.kecamatan<<", "<<A.kabupaten<<", ";
	cout<<A.provinsi<<", "<<A.negara;
}

Alamat dataalamat(){
	Alamat A;
	cout<<"Jalan		:";
	getline(cin, A.jalan);
	cout<<"Kelurahan	:";
	getline(cin, A.kelurahan);
	cout<<"Kecamatan	:";
	getline(cin, A.kecamatan);
	cout<<"Kabupaten	:";
	getline(cin, A.kabupaten);
	cout<<"Provinsi	:";
	getline(cin, A.provinsi);
	cout<<"Negara		:";
	getline(cin, A.negara);
	cout<<"Rt		:";
	cin>>A.rt;
	cout<<"Rw		:";
	cin>>A.rw;

	
	return(A);
}

main(){
	Alamat almt = dataalamat();
	cetakalamat(almt);
	
}

