#include <iostream>
using namespace std;

struct identitasorang{
	string nama, agama;
	string jeniskelamin;
	struct almt{
		string jalan, kecamatan, kabupaten, provinsi;
	}alamat;
	struct tgllahir{
		int tgl, bln, thn;
	}tanggallahir;
};
main(){
	identitasorang idto;
	
	idto.nama="Muhammad Arif Rivai";
	idto.agama="Islam";
	idto.jeniskelamin="L";
	idto.alamat.jalan="Jl. Karet";
	idto.alamat.kecamatan="Kemiling";
	idto.alamat.kabupaten="Kota Bandar Lampung";
	idto.alamat.provinsi="Lampung";
	idto.tanggallahir.tgl=05;
	idto.tanggallahir.bln=02;
	idto.tanggallahir.thn=2003;
	
	cout<<"Nama lengkap	:"<<idto.nama<<endl;
	cout<<"Agama		:"<<idto.agama<<endl;
	cout<<"Jenis Kelamin	:"<<idto.jeniskelamin<<endl;
	cout<<"Alamat Lengkap	:"<<idto.alamat.jalan<<", "<<idto.alamat.kecamatan<<", "<<idto.alamat.kabupaten<<", "<<idto.alamat.provinsi;
	cout<<endl<<"Tanggal Lahir	:"<<idto.tanggallahir.tgl<<"/"<<idto.tanggallahir.bln<<"/"<<idto.tanggallahir.thn;
	
}
