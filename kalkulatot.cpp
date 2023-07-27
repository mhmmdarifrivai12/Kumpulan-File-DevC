#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	float a,b,hasil;
	char aritmatika;
	
	cout<<"KALKULATOR C++ \n \n";
	
	cout<<"Nilai Pertama :";
	cin>>a;
	cout<<"Pilih Salah Satu (*) (/) (+) (-) :";
	cin>>aritmatika;
	cout<<"Nilai Kedua :";
	cin>>b;
	
	cout<<"\nHasil Perhitungan ";
	cout<<a<<aritmatika<<b;
	
	if (aritmatika == '*'){
		hasil = a * b;
	} else if (aritmatika == '/'){
		hasil = a / b;
	} else if (aritmatika == '+'){
		hasil = a + b;
	} else if (aritmatika == '-'){
		hasil = a - b;
	}
	
	cout<<"="<<hasil<<endl;
	
	
getch();
}
