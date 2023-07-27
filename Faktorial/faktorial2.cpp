 #include <iostream>
 
 using namespace std;
 
 int faktorial(int n){
 	//n=numb
 	if(n<=1){
 		return (1);
	 }
	else{
		return(n*faktorial(n-1));
	}
 }
 main(){
 	
 	int hasil=faktorial(5);
 	cout<<hasil;
 	
 }