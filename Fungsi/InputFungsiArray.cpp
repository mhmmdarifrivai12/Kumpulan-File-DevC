#include <iostream>  
using namespace std;  

void myFunction(int myNumbers[2]) {
  for (int i = 0; i < 2; i++) {  
    cout << myNumbers[2] << "\n";    
  } 
}

int main() {  
  int myNumbers[2];
    
	cout<<"masukan 1 :";
	cin>>myNumbers[1];
	cout<<"masukan 1 :";
	cin>>myNumbers[2];
	
  myFunction(myNumbers);
  return 0;
}  

