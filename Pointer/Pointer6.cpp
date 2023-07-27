#include <iostream>
using namespace std;
int main(){
	int n = 5; //sebuah variabel
	int *p; //sebuah pointer untuk integer
		
	p = &n; //p sekarang menunjuk ke alamat n
	
	cout<<"Nilai dari n adalah : "<<n<<endl;
	cout<<"Alamat dari pointer p adalah : "<< p<<endl;
	cout<<"Isi pada alamat dari pointer p adalah : "<< *p<<endl;
		
	(*p)++; //nilai dari variabel yg ditunjuk pointer bertambah
	
	cout<<"Nilai dari n adalah : "<<n<<endl;
	cout<<"Alamat dari pointer p adalah : "<< p<<endl;
	cout<<"Isi pada alamat dari pointer p adalah : "<< *p<<endl;
	
	*p++; //alamat dari pointer p yang bertambah
	
	cout<<"Nilai dari n adalah : "<<n<<endl;
	cout<<"Alamat dari pointer p adalah : "<< p<<endl;
	cout<<"Isi pada alamat dari pointer p adalah : "<< *p<<endl;
}