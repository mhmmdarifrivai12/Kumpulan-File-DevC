#include <iostream>
using namespace std;
void pengganda(int *x){ //formal parameter pointer, menyalin alamat
*x *= 2; //nilai dari alamat yg ditunjuk pointer x,dikali2
}
int main(){
	int y=1;
	
	pengganda(&y); //aktual parameter &y, passing by referencecout<<"Nilai y : "<< y<<endl; //nilai y menjadi 2
	pengganda(&y); //prosedur dipanggil kembali
	
	cout<<"Nilai y : "<< y<<endl; //nilai y menjadi 4
}