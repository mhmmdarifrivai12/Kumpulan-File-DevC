#include <iostream>
#include <conio.h>

using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "-- Menentukan Harga BBM Berdasarkan Kode --" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Kode   |   Produk   |   Harga   |" << endl;
    cout << "-------------------------------------------" << endl;
    cout << " 1     |  Pertamax  |   7500    |" << endl;
    cout << " 2     |  Premium   |   4500    |" << endl;
    cout << " 3     |  Solar     |   4300    |" << endl;
    cout << "-------------------------------------------" << endl;
}

// Function to calculate the total payment
int calculateTotalBayar(int harga, int liter) {
    return harga * liter;
}

// Function to display the final message
void displayTerimaKasih() {
    cout << "- Terima Kasih -";
}

int main() {
    int harga1 = 7500, harga2 = 4500, harga3 = 4300, liter, totalbayar;
    char kode;

    displayMenu();

    cout << "Pilih =";
    cin >> kode;

    if (kode == '1') {
        cout << "Produk = Pertamax" << endl;
        cout << "Pesan Berapa Liter =";
        cin >> liter;
        cout << "\n";
        totalbayar = calculateTotalBayar(harga1, liter);
        cout << "Total_Bayar =" << totalbayar << endl;

    } else if (kode == '2') {
        cout << "Produk = Premium" << endl;
        cout << "Pesan Berapa Liter =";
        cin >> liter;
        cout << "\n";
        totalbayar = calculateTotalBayar(harga2, liter);
        cout << "Total_Bayar =" << totalbayar << endl;

    } else if (kode == '3') {
        cout << "Produk = Solar" << endl;
        cout << "Pesan Berapa Liter =";
        cin >> liter;
        cout << "\n";
        totalbayar = calculateTotalBayar(harga3, liter);
        cout << "Total_Bayar =" << totalbayar << endl;
    }

    displayTerimaKasih();

    getch();
    return 0;
}

