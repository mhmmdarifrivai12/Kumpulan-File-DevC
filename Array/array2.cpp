#include <iostream>
using namespace std;

main(){
	string nama[10][10] ;
	
	for(int i=0;i<2;i++){
		for(int o=0;o<4;o++){
			cout<<"Masukan isi array index ke - ["<<i<<"]["<<o<<"]:";
			cin>>nama[o][i];
		}
		cout<<endl;
	}


	cout<<"Hasil Penggabungan "<<endl;
	for(int i=0;i<4;i++){
		for(int o=0;o<4;o++){
			cout<<nama[i][o]<<" ";
		}
		cout<<endl;
	}
	
}