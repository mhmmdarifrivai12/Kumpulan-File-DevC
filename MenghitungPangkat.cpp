#include <iostream>
#include <cmath>
using namespace std;

double pangkat(double angka, double nilai){
	return pow(angka, nilai);
}

main(){
	double angka, nilai_pangkat;
	cout<<"Input Nilai :";
	cin>>angka;
	cout<<"Input Pangkat :";
	cin>>nilai_pangkat;
	cout<<"Hasil :"<<pangkat(angka, nilai_pangkat)<<endl;

return 0;
}
