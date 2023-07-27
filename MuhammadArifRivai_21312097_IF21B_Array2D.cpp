#include <iostream>
using namespace std;

int main(){
	
	int nilai[3][5] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			cout<<nilai[i][j];
		}
		cout<<endl;
	}

    return 0;
}
