#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int a,b,c,d;
	float const tugas=0.3;
	float const kuis=0.2;
	float const uts=0.25;
	float const uas=0.25;
	float hasil,hasil1,hasil2,hasil3,hasil4;
	
	cout<<"=================================\n";
	cout<<"Nilai tugas		:";
	cin>>a;
	hasil1=a*tugas;
	cout<<"Jadi nilai tugas	:";
	cout<<hasil1;
	cout<<endl;
	cout<<"\nNilai kuis		:";
	cin>>b;
	hasil2=b*kuis;
	cout<<"Jadi nilai kuis		:";
	cout<<hasil2;
	cout<<endl;
	cout<<"\nNilai uts		:";
	cin>>c;
	hasil3=c*uts;
	cout<<"Jadi nilai uts		:";
	cout<<hasil3;
	cout<<endl;
	cout<<"\nNilai tugas		:";
	cin>>d;
	hasil4=d*uas;
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
	else
	{
		cout<<"Range Nilai Mutu	: E";
	}
	
getch();
}
