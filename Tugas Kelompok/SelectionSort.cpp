#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

void SelectionSort(int Array[],const int Size){
	int i, j, kecil,temp;
	for(i=0; i<Size;i++){
		kecil = i; 
		for(j=i+1; j<Size; j++ ){
			if (Array[kecil]>Array[j]){
				kecil = j;
			}
 		}
		temp = Array[i];
		Array[i] = Array[kecil];
		Array[kecil] = temp;
	}
 }
 
int main(){
	int nomorarray[10] = {100,40,10,90,50,20,70,30,60,80};

	cout<<"================================"<<endl;
	cout<<"          TUGAS AKHIR           "<<endl;
	cout<<"================================"<<endl;
	cout<<"      TEMA : SELECTION SORT     "<<endl;
	cout<<"================================"<<endl;
	cout<<"Data Sebelum diurutkan : \n";
	for(int d = 0; d <10; d++){
		cout<<setw(3)<<nomorarray[d]<<" ";
	}
	cout<<"\n\n";
 	
	SelectionSort(nomorarray, 10);
 
	cout<<"Data setelah diurutkan : \n";
	
	for(int j = 0; j<10; j++)
	cout<<setw(3)<<nomorarray[j]<<" ";
 
}