#include <iostream>
#include <conio.h>
using namespace std;

float rtrtarr(float arr[5], int len){

	float hasil, ratarata, jumlah;

	
	for (int i = 0; i <5 ; i++)
        {
           jumlah += arr[5];
        }
        ratarata=jumlah/5;
        
	return ratarata;
}


int main()
  {
  	float nilai[10]={10,10,10,10,10,10,10,10,10,10};
  	
	cout<<rtrtarr(nilai, sizeof(nilai)/sizeof(nilai[0])); 	
  }
