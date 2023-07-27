#include <iostream>
#include <conio.h>
using namespace std;

struct identitasorang{
	string nama, agama;
	string jeniskelamin;
	struct Alamat{
		string jalan, kelurahan;
		string kecamatan, kabupaten;
		string provinsi,negara;
		int rt, rw;
	}a;
	struct usia{
		int tanggal, bulan, tahun;
	}u;
};

void cetakidentitas (identitasorang o){
	int umurskrg;
	
	cout<<"Nama		:"<<o.nama<<endl;
	cout<<"Agama		:"<<o.agama<<endl;
	cout<<"Jenis Kelamin	:"<<o.jeniskelamin<<endl;
	cout<<"Tanggal Lahir	:"<<o.u.tanggal<<"/"<<o.u.bulan<<"/"<<o.u.tahun<<endl;
	umurskrg=2022-o.u.tahun;
	cout<<"Usia		:"<<umurskrg<<endl;
}
	
void cetakalamat(identitasorang o){
	cout<<"== Alamat =="<<endl;
	cout<<o.a.jalan<<", RT :"<<o.a.rt<<" RW :"<<o.a.rw<<", ";
	cout<<o.a.kelurahan<<", "<<o.a.kecamatan<<", "<<o.a.kabupaten<<", ";
	cout<<o.a.provinsi<<", "<<o.a.negara;
}


main(){
	identitasorang iden;
	
	iden.nama="Muhammad Arif Rivai";
	iden.agama="Islam";
	iden.jeniskelamin="Laki";
	iden.u.tanggal=05;
	iden.u.bulan=02;
	iden.u.tahun=2003;
	iden.a.jalan="JL. Karet";
	iden.a.rt=01;
	iden.a.rw=02;
	iden.a.kelurahan="Sumber Rejo";
	iden.a.kecamatan="Kemiling";
	iden.a.kabupaten="Bandar Lampung";
	iden.a.provinsi="Lampung";
	iden.a.negara="Indonesia";
	
	cetakidentitas (iden);
	cetakalamat (iden);
}