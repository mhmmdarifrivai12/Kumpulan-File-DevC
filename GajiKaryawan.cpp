#include <iostream> 
#include <conio.h>
using namespace std;
main()
{
	float gajipokok, tunjangan, gajibersih;
	float pajak, bonus;
	
	cout<<"=================================\n\n";
	cout<<"Gaji Pokok :";
	cin>>gajipokok;
	tunjangan=gajipokok*20/100;
	cout<<"Total Tunjangan :"<<tunjangan<<endl;
	
	pajak=gajipokok*5/100;
	cout<<"Total Pajak :"<<pajak<<endl;
	
	bonus=(10/100*gajipokok)+tunjangan;
	cout<<"Total Bonus :"<<bonus<<endl;
	
	gajibersih=gajipokok+tunjangan+bonus-pajak;
	cout<<"Total Gaji Bersih :"<<gajibersih<<endl;
	
	cout<<"\n\n=================================\n\n";
	
	cout<<"Gaji Pokok :"<<gajipokok<<endl;
	cout<<"Tunjangan 20% :"<<tunjangan<<endl;
	cout<<"Pajak 5% dari Gaji Pokok :"<<pajak<<endl;
	cout<<"Bonus 10% :"<<bonus<<endl;
	cout<<"Gaji Bersih :"<<gajibersih<<endl;
	
	cout<<"\n=================================\n\n";
	
getch();	
}
