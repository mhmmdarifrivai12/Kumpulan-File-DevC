#include <iostream>
using namespace std;

int main(){
	
	int n=10; int *p; p=&n; *p=3; *p =*p+*p;
	
	cout<<n;
    return 0;
}
