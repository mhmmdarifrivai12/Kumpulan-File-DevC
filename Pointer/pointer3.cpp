#include <iostream>
using namespace std;

int main(){

	int n = 5; //sebuah variabel
	int *p; //sebuah pointer untuk integer
	int *q; //pointer integer lainnya
	
	p = &n; //p sekarang menunjuk ke alamat n
	q = p; //q menunjuk alamat yang ditunjuk p

	cout<<"Nilai dari n adalah: "<< n<<endl;
	cout<<"Alamat dari n (pointer p) adalah : "<< p <<endl;
	cout<<"Alamat dari n (pointer q) adalah : "<< q <<endl;
	
	*q=86;
	
	cout<<"Nilai dari n adalah: "<< n<<endl;
	cout<<"Alamat dari n (pointer p) adalah : "<< p <<endl;
	cout<<"Alamat dari n (pointer q) adalah : "<< q <<endl;
}