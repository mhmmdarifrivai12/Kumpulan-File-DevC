#include <iostream>
#include <ctime>
using namespace std;
  int main() {
   time_t now = time(0);
   tm *ltm = localtime(&now);
   
   cout << "\n Tahun   : " << 1900 + ltm->tm_year<<endl;
   cout << " Bulan   : "<< 1 + ltm->tm_mon<< endl;
   cout << " Hari    : "<<  ltm->tm_mday << endl;
   cout << " Time    : "<< ltm->tm_hour << ":";
   cout << ltm->tm_min << ":";
   cout << ltm->tm_sec << endl;
}