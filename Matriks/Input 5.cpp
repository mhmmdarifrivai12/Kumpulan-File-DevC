#include <iostream>
using namespace std;

main(){
	int input;
	cout<<"Input Ukuran Matriks : ";
	cin >> input;
	
	int nilai[input][input];
	for(int i=0; i<input;i++){
		for(int j=0; j<input; j++){
			if(nilai[i]>=nilai[j]){
			nilai[i][j]=1;
			}else{
			nilai[i][j]=0;
		}
		}
	}
	for(int i=0; i<input;i++){
		for(int j=0; j<input; j++){
			cout<<nilai[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

