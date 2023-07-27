#include <iostream>
using namespace std;

int fibonacci(int a){
	if(a==0||a==1){
		return a;
	}else{
		return(fibonacci(a-1)+fibonacci(a-2));
	}
}

main(){
	int batas, i, j = 0;
	cout<<"Batas deret :";
	cin>>batas;
	cout<<"Deret Fibonacci :"<<endl;
	for(i=1;i<=batas;i++){
		cout<<i<<"\t";
		cout<<fibonacci(j)<<endl;
		j++;
	}
	
return 0;
}
