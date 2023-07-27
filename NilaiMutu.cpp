#include <iostream>
#include <conio.h>
using namespace std;
main () {
	float const tugas=0.4;
	float const kuis=0.1;
	float const uts=0.25;
	float const uas=0.25;
	float hasil,hasil1,hasil2,hasil3,hasil4;
	int nt, nk, nu, nuas;
	char pill;
	do{
	cout<<"\n=================================\n";
	cout<<"Nilai tugas		:";
	cin>>nt;
	hasil1=nt*tugas;
	cout<<"Jadi nilai tugas	:";
	cout<<hasil1;
	cout<<endl;
	cout<<"\nNilai kuis		:";
	cin>>nk;
	hasil2=nk*kuis;
	cout<<"Jadi nilai kuis		:";
	cout<<hasil2;
	cout<<endl;
	cout<<"\nNilai uts		:";
	cin>>nu;
	hasil3=nu*uts;
	cout<<"Jadi nilai uts		:";
	cout<<hasil3;
	cout<<endl;
	cout<<"\nNilai uas		:";
	cin>>nuas;
	hasil4=nuas*uas;
	cout<<"Jadi nilai tugas	:";
	cout<<hasil4;
	cout<<"\n=================================\n";
	cout<<"Jadi nilai akhir adalah :";
	hasil=hasil1+hasil2+hasil3+hasil4;
	cout<<hasil;
	cout<<endl;	
	
	if (hasil >= 90)
	{
		cout<<"Range Nilai Mutu	: A";
	}
	else if ((hasil >= 80) && (hasil < 89))
	{
		cout<<"Range Nilai Mutu	: B";
	}
	else if ((hasil >= 70) && (hasil < 79))
	{
		cout<<"Range Nilai Mutu	: C";
	}
	else if ((hasil >= 60) && (hasil < 69))
	{
		cout<<"Range Nilai Mutu	: D";
	}
	else if ((hasil >= 0) && (hasil < 59))
	{
		cout<<"Range Nilai Mutu	: E";
	}
	else
	{
		cout<<"Salah Nilai";
	}
	cout<<"INput y/t";
	cin>>pill;
	
}while(pill=='y'||pill=='Y');	


}

