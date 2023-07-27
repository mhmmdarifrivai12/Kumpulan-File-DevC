#include <iostream>
#include <conio.h>
using namespace std;

void cetakmundur(int,int);
int getmax(int,int);

void cetakmundur(int baw, int bak){
	for (int i=baw;i>=bak;i--){
		if(i==1){
			cout<<"Berhenti";
			break;
		}
		cout<<i<<" ";
	}
}
int getmax(int n1, int n2){
	int max;
	if(n1>n2){
		max=n1;
	}else{
		max=n2;
}
}

 
main(){
	int a, b;
cin>>a;
cin>>b;
cetakmundur(a,b);
cout<<getmax(80,10);
}
