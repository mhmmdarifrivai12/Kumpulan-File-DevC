#include <iostream>
#include <conio.h>
using namespace std;

void cetakarray(int ar[],int len){
	for (int i=0;i<len;i++){
		cout<<ar[i]<<endl;
	}
}
main(){
	int nilai[8]={1,2,3,4,5,6,7,8};
	
	cetakarray(nilai, sizeof(nilai)/sizeof(nilai[0]));
getch();
}
