#include <iostream>
#include <conio.h>
using namespace std;

struct Mahasiswa{ //variabelnya
	string nama, alamat;
	int smester;
	float IPK;
	bool status_aktif;
};
void cetakidentitas(Mahasiswa m){ //untuk mencetak bentukseperti ini
	cout<<endl<<m.nama<<endl;
	cout<<m.alamat<<endl;
	cout<<m.smester<<endl;
	cout<<m.IPK<<endl;
	if (m.status_aktif == true){
		cout<<"Aktif"<<endl;
	}else{
		cout<<"Tidak Aktif"<<endl;
	}
}

Mahasiswa datamahasiswa(){
	Mahasiswa m;
	int status;
	cout<<"Nama	:";
	getline(cin, m.nama);
	cout<<"Alamat	:";
	getline(cin, m.alamat);
	cout<<"semester	:";
	cin>>m.smester;
	cout<<"IPK	:";
	cin>>m.IPK;
	cout<<"Status (0|1)	:";
	cin>>status;
	m.status_aktif =(status==1)?true:false;
	
	return(m);
}

main(){
	Mahasiswa mhs1 = datamahasiswa();
	cetakidentitas(mhs1);
	
}

