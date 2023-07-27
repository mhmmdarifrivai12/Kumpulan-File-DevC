#include <iostream>
#include <string>
using namespace std;

int main() {
    // Menampilkan tampilan jumlah saldo
    cout << "Jumlah saldo Anda: 21312097" << endl;

    // Meminta nomor rekening tujuan dan nominal transfer dari user
    string no_rek;
    double nominal;
    cout << "Masukkan nomor rekening tujuan: ";
    cin >> no_rek;
    cout << "Masukkan nominal transfer: ";
    cin >> nominal;

    // Meminta keterangan pembayaran dari user
    string keterangan;
    cout << "Masukkan keterangan pembayaran: ";
    cin.ignore(); // Mengabaikan karakter newline yang masih ada di buffer
    getline(cin, keterangan);

    // Proses transfer
    if (nominal > 21312097) { // Jika saldo tidak mencukupi
        cout << "Maaf, saldo Anda tidak mencukupi." << endl;
    } else { // Jika saldo mencukupi
        cout << "Proses transfer berhasil." << endl;
        cout << "Saldo sudah masuk ke rekening " << no_rek << " dan saldo rekening penerima bertambah " << nominal << endl;
    }

    return 0;
}
