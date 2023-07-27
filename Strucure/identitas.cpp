#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

struct Tinggal
{
  char Jalan[40];
  char Kota[15];
  char Pos[5];
};
struct Tgl_Lahir
{
  int Tanggal;
  int Bulan;
  int Tahun;
};
struct Mahasiswa
{
  char Nama[25];
  Tinggal Alamat;
  Tgl_Lahir Lahir;
};
main()
{
  Mahasiswa Mhs;
  cout<<"Nama  : "; cin.getline(Mhs.Nama,25);
  cout<<"\tAlamat\n";
  cout<<"Jalan  : "; cin.getline(Mhs.Alamat.Jalan,40);
  c
  cout<<"Kota  : "; cin.getline(Mhs.Alamat.Kota,15);
  cout<<"Kode Pos  : "; cin.getline(Mhs.Alamat.Pos,5);
  cout<<"\tTanggal Lahir\n";
  cout<<"Tanggal  : "; cin>>Mhs.Lahir.Tanggal;
  cout<<"Bulan  : "; cin>>Mhs.Lahir.Bulan;
  cout<<"Tahun  : "; cin>>Mhs.Lahir.Tahun;
  cout<<"\n\nMencetak Kembali Nilai Anggota\n\n";
  cout<<"NIM  : "<<Mhs.Nim;
  cout<<"\nNama  : "<<Mhs.Nama;
  cout<<"\nAlamat  :\n";
  cout<<"\n\tJalan  : "<<Mhs.Alamat.Jalan<<Mhs.Alamat.Kota;
  cout<<"\n\tKode Pos  : "<<Mhs.Alamat.Pos;
  cout<<"\nTanggal Lahir  : "<<Mhs.Lahir.Tanggal<<"-";
  cout<<Mhs.Lahir.Bulan<<"-"<<Mhs.Lahir.Tahun;
  getch();
}