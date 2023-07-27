#include <iostream>
#include <conio.h>

using namespace std;
main(){		
//Fungsi untuk menghitung nilai mutu dengan input nilai tugas, kuis, uts dan uas. Nilai kembali A,B,C,D,E.
//Ketentuan sesuai kontrak kuliah kita.
//Fungsi untuk memeriksa usia mahasiswa
//Fungsi untuk menampilkan deskripsi mahasiswa (nama, npm, prodi, mata kuliah, nilai mutu, range usia)
//Pada main, input dahulu data mahasiswa mulai dari nama, npm, prodi, matakuliah, tugas, kuis, uts, uas, umur. 
//Kemudian panggil fungsi 1, 2, dan 3

	char nama[20], prodi[20], matkul[20];
	int npm, tugas, kuis, uts, uas, umur;
	
	cout<<"Input Nama		: "; 
	gets(nama);
	cout<<"Input NPM		: "; cin>>npm;
	fflush(stdin);
	cout<<"Input Prodi		: "; gets(prodi);
	cout<<"Input Matkul		: "; gets(matkul);
	cout<<"================================================"<<endl;
	cout<<"Input Nilai Tugas	: "; cin>>tugas;
	cout<<"Input Nilai Kuis	: "; cin>>kuis;
	cout<<"Input Nilai UTS		: "; cin>>uts;
	cout<<"Input Nilai UAS		: "; cin>>uas;
	cout<<"Input Umur		: "; cin>>umur;
	cout<<endl;
	
	//fungsi untuk menghitung nilai mutu dengan input nilai tugas, kuis, uts dan uas. Nilai kembali A,B,C,D,E.
	int ntugas=tugas*0.30, nkuis=kuis*0.20, nuts=uts*0.25, nuas=uas*0.25;
	int n = ntugas + nkuis + nuts + nuas;
	char nmutu;
	
	if (n >= 90 && n <=100){
		nmutu ='A';
	} else if (n >= 80 && n <= 89){
		nmutu = 'B';
	} else if (n >= 70 && n <= 79){
		nmutu = 'C';
	} else if (n >= 60 && n <= 69){
		nmutu = 'D';
	} else if (n <= 59){
		nmutu = 'E';
	}
	
	//fungsi menghitung range usia
	//kanak-kanak (5-11 tahun), remaja (12-25 tahun), dewasa (26-45 tahun), dan lansia (46-65 tahun)
	string usia;
	if (umur>=5 && umur<=11){
		usia = "Kanak-kanak";
	} else if (umur>=12 && umur<=25){
		usia = "Remaja";
	} else if (umur>=26 && umur<=45){
		usia = "Dewasa";
	} else if (umur>=46 && umur<=65){
		usia = "Lansia";
	}
	
	//DESKRIPSI MAHASISWA
//	nama, npm, prodi, mata kuliah, nilai mutu, range usia)
	cout<<"===============DESKRIPSI MAHASISWA==============\n"<<endl;
	cout<<"Nama			: "<<nama<<endl;
	cout<<"NPM			: "<<npm<<endl;
	cout<<"Prodi			: "<<prodi<<endl;
	cout<<"Mata Kuliah		: "<<matkul<<endl;
	cout<<"Nilai Mutu		: "<<nmutu<<endl;
	cout<<"Range Usia		: "<<usia<<endl;
	cout<<"================================================";
	
	
	

	
	getch();
}
