#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int a,b,c,d,a2,b2,e,y,z;
	float x;
	
	cout<<"=============================\n";
	cout<<"Soal X = (a * b)/3\n";
	cout<<"Nilai A :";
	cin>>a;
	cout<<"Nilai b :";
	cin>>b;
	cout<<"Jadi Nilai X Adalah :";
	x=(a*b)/3;
	cout<<x;
	cout<<"\n=============================\n";
	cout<<"Soal Y = (a + b)*c\n";
	cout<<"Nilai A :";
	cin>>a2;
	cout<<"Nilai b :";
	cin>>b2;
	cout<<"Nilai c :";
	cin>>c;
	y=(a2+b2)*c;
	cout<<"Jadi Nilai y Adalah :";
	cout<<y;
	cout<<"\n=============================\n";
	cout<<"Soal z = (d + e)+y\n";
	cout<<"Nilai d :";
	cin>>d;
	cout<<"Nilai e :";
	cin>>e;
	z=(d+e)+y;
	cout<<"Jadi Nilai z Adalah :";
	cout<<z;
	cout<<"\n=============================\n";
	cout<<"Jadi Nilai X Adalah :";
	cout<<x;
	cout<<"\nJadi Nilai Y Adalah :";
	cout<<y;
	cout<<"\nJadi Nilai Z Adalah :";
	cout<<z;
	cout<<"\n=============================\n";
getch();
}
