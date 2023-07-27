#include <iostream>
using namespace std;

main(){
	
	int nilai;
	cout<<"Input	:";
	cin>>nilai;
	
	for(int i=1;i<=nilai;i++){
		for(int b=1;b<=nilai;b++){
			if(i<=1||i==nilai||b<=1||b==nilai){
				cout<<"0 ";
			}else{
				cout<<"1 ";
			}
		}cout<<endl;
	}
	return 0;
}