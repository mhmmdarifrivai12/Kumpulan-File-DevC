#include <iostream>
using namespace std;


main(){
string c,i;
string A[6]={"a","b","e","j","i","k"};

cout<<"\nMasukan angka yang dicari : ";
cin>>c;
i=0;
while(i<5 && A[i]!=c){
 i++;
}
if (A[i]!=c){
 cout<<"Hasil false";
}else if(A[i]=i+1)
   cout<<"Hasil true";
}