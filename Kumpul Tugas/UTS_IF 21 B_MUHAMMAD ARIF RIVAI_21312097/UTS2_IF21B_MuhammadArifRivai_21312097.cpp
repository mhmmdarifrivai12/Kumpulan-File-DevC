#include <iostream>
using namespace std;


main(){
	string c,i;
	string A[6]={"a","b","e","j","i","k"};
	
	cout<<"Cari Huruf =";
	cin>>c;
	
	if(c == "a" || c == "b" || c == "e" || c == "j" || c == "i" || c == "k"){
		cout<<"Huruf "<<c<<" Ditemukan";
	}else{
		cout<<"Hasilnya False";
	}
	
}
