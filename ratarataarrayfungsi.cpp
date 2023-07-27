#include <iostream>

using namespace std;

float meanarr(float arr[], int len){

	float hasil;
	float rata;
	for(int i=0; i<sizeof(arr); i++){
		rata += arr[i];
	}
	hasil = rata / 5 ;

	return hasil;
}
main(){
	
		float mean[5]={5,5,5,5,5};
	
	cout<<meanarr(mean, sizeof(mean)/sizeof(mean[0]));
}
