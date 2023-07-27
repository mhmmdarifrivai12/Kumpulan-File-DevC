#include <iostream>

using namespace std;

int myFunction(int x, int y) {
  return x + y;
}

int main() {
	int angka, angka2;
	
	cout<<"masukan 1 :";
	cin>>angka;
	cout<<"masukan 1 :";
	cin>>angka2;
	
  cout << myFunction(angka, angka2);
  return 0;
}

