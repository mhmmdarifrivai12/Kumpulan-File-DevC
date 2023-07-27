#include <iostream>
#include <conio.h>

using namespace std;

int nilaiakhir(int arr[], int len){
	int hitungnilai;
	for (int i=0; i<=len; i++){
		switch (i){
			case 0 : hitungnilai+=arr[i]*0.40;
			break;
			case 1 : hitungnilai+=arr[i]*0.10;
			break;
			case 2 : hitungnilai+=arr[i]*0.25;
			break;
			case 3 : hitungnilai+=arr[i]*0.25;
			break;
		}
	}
return hitungnilai;
}
string nilaimutu(int hitungnilai){
	string n;
	if (hitungnilai >= 90){
		n = 'A';
	} else if (hitungnilai <= 89 && hitungnilai >= 80){
		n = 'B';
	} else if (hitungnilai <= 79 && hitungnilai >= 70){
		n = 'C';
	} else if (hitungnilai <= 69 && hitungnilai >= 60){
		n = 'D';
	} else if (hitungnilai <= 59 && hitungnilai >= 0){
		n = 'E';
	} else {
		n = "Salah Nilai";
	}

	return n;
}
main(){
	int totalnilai;
	int nilai[4];
	
	cout<<"Input Nilai Tugas	: ";
	cin>>nilai[0];
	cout<<"Input Nilai Kuis	: ";
	cin>>nilai[1];
	cout<<"Input Nilai UTS		: ";
	cin>>nilai[2];
	cout<<"Input Nilai UAS		: ";
	cin>>nilai[3];
	
	cout<<endl;
	
	totalnilai = nilaiakhir(nilai, sizeof(nilai)/sizeof(nilai[0]));
	cout<<"Nilai akhir "<<totalnilai<<endl;
	cout<<"Nilau mutu "<<nilaimutu(totalnilai);	
	
	

}
                         