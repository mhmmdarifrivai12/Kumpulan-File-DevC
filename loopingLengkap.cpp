#include <iostream>
#include <conio.h>
using namespace std;

main(){

    char ulangi = 'y';
    int counter = 0;
    
    cout<<endl<<endl;
    
	// perulangan while
    while(ulangi == 'y'){
        cout<<"Apakah kamu mau mengulang?\n";
        cout<<"Jawab (y/t): ";
        cin >> ulangi;

        // increment counter
        counter++;
    }

    printf("\n\n----------\n");
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %i kali.\n", counter);
    
    cout<<endl<<endl;
    //DO/WHILE
 char ulangii = 'y';
    int countr = 0;

    do {
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawab (y/t): ");
        cin >> ulangii;

        // increment counter
        countr++;
    } while(ulangi == 'y');

    printf("\n\n----------\n");
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %i kali.\n", counter);
    
    //Perulangan bersarang
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("Perulangan ke (%d, %d)\n", i, j);
        }
    }

getch();
}
