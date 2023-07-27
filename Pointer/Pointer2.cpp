#include <iostream>
using namespace std;
int main(){
	int angka = 10;
	int *ptr;
	
	ptr = &angka;
	
	cout<<"Angka : "<<angka<<endl;
	cout<<"&angka : "<<&angka<<endl;
	cout<<"ptr : "<<ptr<<endl;
	cout<<"*ptr : "<<*ptr<<endl;
	
	*ptr=30;
	
	cout<<"Angka : "<<angka<<endl;
	cout<<"&angka : "<<&angka<<endl;
	cout<<"ptr : "<<ptr<<endl;
	cout<<"*ptr : "<<*ptr<<endl;
}