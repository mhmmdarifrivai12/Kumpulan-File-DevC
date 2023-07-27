#include <iostream>
#include <ctime>
using namespace std;

struct usia{
	int tanggal, bulan, tahun;
};

usia tnggllahir(){
	int hasil;
	usia u;
	cout<<"Tanggal Lahir	:";
	cin>>u.tanggal;
	cout<<"Bulan Lahir	:";
	cin>>u.bulan;
	cout<<"Tahun Lahir	:";
	cin>>u.tahun;
	hasil=2022-u.tahun;
	cout<<"Usianya Adalah	:"<<hasil;
	return(u);
}
void waktu(){
	time_t now = time(0);
	tm *ltm = localtime(&now);
	cout<<endl<<"==Waktu Sekarang=="<<endl;
	cout << " Time    : "<< ltm->tm_hour << ":";
	cout << ltm->tm_min << ":";
	cout << ltm->tm_sec << endl;
}
main(){
	usia tgllhr =tnggllahir();
	waktu();
	

return 0;
}