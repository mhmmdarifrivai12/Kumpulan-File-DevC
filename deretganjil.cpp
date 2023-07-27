#include <iostream>
using namespace std;

int main(){
	int batas;
	
	cout<<"Masukan Batas : ";
	cin>>batas;
	cout<<endl;
	
	cout<<"Deret Bilangan Ganjil"<<endl;
		for(int i=1;i<=batas;i++){
		if (i%2!=0)
		cout<<i<<" ";
	      }

}