#include<iostream>
#include<conio.h> 

using namespace std;
int x;
void nilaiModus(float bil[], int n, float proses[]){

	int total[100];
	int k=1;
	x=0;

//untuk mengurutkan secara ascending

	for(int i=0;i<n;i++){
		
		for(int i=(n-1);i>=0;i--){
			
			if(bil[i]<bil[i-1]){
				int temp;
				temp=bil[i];
				bil[i]=bil[i-1];
				bil[i-1]=temp;
			}
		}
	}
//menghitung berapa kali muncul tiap angka

	for(int i=0;i<n;i++){

		total[i]=0;
		for(int i=0;i<n;i++){

			if(bil[i]==bil[i]){
				total[i]++;
			}
		}
	}
//menentukan nilai yang paling sering muncul

	for(int i=0;i<n;i++){
	
	if(total[i]>k){

		k=total[i];
		}
	}

//jika modus lebih dari satu

	for(int i=0;i<n;i++){
	if(x==0)
	proses[x]=0;
	else
	proses[x]=proses[x-1];

	if(total[i]==k){
		if(bil[i]!=proses[x]){
			proses[x]=bil[i];
			x++;
			}
		}
	}

//Jika Semua angka muncul sama banyak

	int z=0;
	for(int i=0;i<n;i++){

	if(total[i]==k){
		z++;
		}
	}
	if(z==n){
	x=0;
	}
}
main(){
	int nilai;
	float bil[100];
	float proses[100];
	cout<<"Banyak Nilai : ";
	cin>>nilai;

	for(int i=0;i<nilai;i++){ 
		cout<<"Nilai "<<(i+1)<<" : ";cin>>bil[i];
		}
	cout<<endl;
	
	nilaiModus(bil,nilai,proses);
	
	if (x==0)
	cout<<"Tidak Ada Modus!"<<endl;
	else{
	cout<<"Modus : ";
	for(int i=0;i<x;i++){
	cout<<proses[i]<<" ";
		}
	}
	
	
return 0;
}
