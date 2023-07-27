 #include <iostream>
 
 using namespace std;
 
 faktorial(int n){
 	
 	int hasil=1;
 	for(int i=1;i<=n;i++){
 		hasil=hasil*i;
 		
	 }
 	return hasil;
 }
 main(){
 	
 	int hasil=faktorial(4);
 	cout<<hasil;
 	
 }