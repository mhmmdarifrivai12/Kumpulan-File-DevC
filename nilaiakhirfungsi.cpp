#include <iostream>

using namespace std;

float nilaiakhir(float arr[], float len){
	float htgnilai;
	for (int i=0; i<=len; i++){
		switch (i){
			case 0 : htgnilai+=arr[i]*0.40;
			break;
			case 1 : htgnilai+=arr[i]*0.10;
			break;
			case 2 : htgnilai+=arr[i]*0.25;
			break;
			case 3 : htgnilai+=arr[i]*0.25;
			break;
		}
	}
return htgnilai;
}
char nilaimutu(int htgnilai){
	char n;
	if (htgnilai >= 90){
		n = 'A';
	} else if ((htgnilai >= 80) && (htgnilai < 89)){
		n = 'B';
	} else if ((htgnilai >= 70) && (htgnilai < 79)){
		n = 'C';
	} else if ((htgnilai >= 60) && (htgnilai < 69)){
		n = 'D';
	} else if ((htgnilai >= 0) && (htgnilai < 59)){
		n = 'E';
	} else {
		n = 'Salah Nilai';
 	}

	return n;
}
main(){
	int totalnilai, n;
	int nilai[4];
	
	cout<<"Input nilai tugas	: ";
	cin>>nilai[0];
	cout<<"Input nilai kuis	: ";
	cin>>nilai[1];
	cout<<"Input nilai UTS		: ";
	cin>>nilai[2];
	cout<<"Input nilai UAS		: ";
	cin>>nilai[3];

	totalnilai = nilaiakhir(nilai, sizeof(nilai)/sizeof(nilai[0]));
	cout<<"Nilai akhir "<<totalnilai<<endl;
	cout<<"Nilau mutu "<<nilaimutu(totalnilai);

}
