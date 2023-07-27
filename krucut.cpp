#include <iostream> 
#include <conio.h>
using namespace std;
main()
{
	float v,r,t;
	float phi=3.14; 
	
	cout<<"Input Nilai Jari-Jari :";
	cin>>r;
	cout<<"Input Nilai Tinggi :";
	cin>>t;
	v=1/(float)3*phi*r*r*t;
	cout<<"Jadi Nilai Volume Krucut Adalah :"<<v;
	
getch();	
}
