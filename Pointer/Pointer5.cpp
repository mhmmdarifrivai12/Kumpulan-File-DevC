#include <iostream>
using namespace std;
int main(){
	int n = 5; //sebuah variabel
	int *p; //sebuah pointer untuk integer
	
	p = &n; //p sekarang menunjuk ke alamat n
	
	cout<<"Nilai dari n adalah : " << n<<endl;
	cout<<"Alamat dari n (pointer p) adalah : "<< p<<endl;
	
	*p = 2; //isi nilai n dengan 2
	*p = *p + *p; //isi nilai n dengan 4 (*p adalah 2)
	
	cout<<"Nilai dari n adalah : "<< n<<endl;
}