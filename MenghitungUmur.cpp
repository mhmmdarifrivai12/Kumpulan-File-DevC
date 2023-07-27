#include <iostream>
#include <conio.h>
using namespace std;
main () {
	int tahun, umur;
	
	cout<<"Tahun Kelahiran	:";
	cin>>tahun;
	umur=2022-tahun;
	cout<<"Umur		:"<<umur<<" ";
	
	if (umur >= 45)
	{
		cout<<"(Lansia)";
	}
	else if ((umur >= 25) && (umur < 45))
	{
		cout<<"(Dewasa";
	}
	else if ((umur >= 12) && (umur < 24))
	{
		cout<<"(Remaja)";
	}
	else
	{
		cout<<"(Kanak-Kanak)";
	}
	
	
getch();
}
