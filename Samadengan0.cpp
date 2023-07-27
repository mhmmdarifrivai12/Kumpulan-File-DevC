#include <iostream>
using namespace std;

main(){
	char pilih;
	int i = 1;
	int baris;
		
	int nilai1,nilai2, hasil;
	cout<<"Input Nilai 1	:";cin>>nilai1;
	cout<<"Input Nilai 2	:";cin>>nilai2;
	
	cout<<"Input Baris	:";cin>>baris;
	cout<<endl;
	
	
	while( i <= baris){
		cout<<i<<". ";
	if (nilai1 == 0){
		cout<<"Hasilnya Adalah 0";
	}else{
		hasil=nilai1*nilai2;
		cout<<"Hasilnya Adalah "<<hasil<<endl;
	}
	i++;
}
}