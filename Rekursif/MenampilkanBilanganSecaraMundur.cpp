#include <iostream>
using namespace std;

 void cetakmundur(int a, int =1){
	for (int i=a;i>=1;i--){
		if(i==1){
			cout<<"Berhenti";
			break;
		}
		cout<<i<<" ";
	}
}
main(){
	int a;
	cout<<"Input Nilai	:";
	cin>>a;
	cetakmundur(a, 1);
	
return 0;
}
