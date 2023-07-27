#include <iostream>
using namespace std;

long int pangkatrekursif(int b, int p);

int main(){
	
	int b,p;
	
	cout<<"FUNGSI REKURSIF UNTUK MENGHITUNG PANGKAT"<<endl;
	cout<<endl;
	cout<<"Masukan Nilai Bilangan = ";
	cin>>b;
	
	cout<<"Masukan Nilai Pangkat = ";
	cin>>p;
	cout<<endl;
	cout<<b<<" Pangkat "<<p<<" = "<<pangkatrekursif(b,p)<<endl;
}


long int pangkatrekursif(int b, int p){
	 if (p==0)
		 return 1 ;
		 else 
                 return b * pangkatrekursif(b,p-1);
}