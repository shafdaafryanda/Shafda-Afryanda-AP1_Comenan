#include <iostream>  // Library standar input dan output

using namespace std;  // Menggunakan namespace std untuk menghindari penulisan std:: secara berulang

int main() {
    // Goto Label
    a:  // Label a
        cout << "Hello World" << endl;
        goto d;  // Melompat ke label d
    b:  // Label b
        cout << "Universitas Sumatera Utara" << endl;
        return 0;  // Mengakhiri program
    c:  // Label c
        cout << "Fasilkom-TI" << endl;
        goto b;  // Melompat ke label b
    d:  // Label d
        cout << "Ilmu Komputer" << endl;
        goto c;  // Melompat ke label c

    // Looping menggunakan goto
    int i = 1;  // Deklarasi dan inisialisasi variabel i
    genap:  // Label genap
        if (i % 2 == 0) {
            cout << i << " ";  // Mencetak angka genap
        }
        i++;
    if (i <= 10) {
        goto genap;  // Melompat ke label genap selama i <= 10
    }
    cout << endl;  // Pindah baris setelah looping selesai

    // While loop
    i = 1;  // Inisialisasi ulang variabel i
    while(i <= 10) {
        if (i % 2 == 0) {
            cout << i << " ";  // Mencetak angka genap
        }
        i++;
    }
    cout << endl;  // Pindah baris setelah looping selesai

    // Do-While loop
    i = 1;  // Inisialisasi ulang variabel i
    do {
        cout << i << endl;  // Mencetak nilai i
    } while(i <= 0);  // Kondisi do-while, tidak akan mengulang karena i > 0

    // For loop
    for(int i = 1; i <= 10; i+=2) {
        cout << "Hello World" << endl;  // Mencetak "Hello World" setiap iterasi
    }

    // Nested for loop untuk mencetak persegi
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << "* ";  // Mencetak bintang dalam bentuk persegi
        }
        cout << endl;  // Pindah baris setelah setiap baris selesai
    }

    // Nested for loop untuk mencetak segitiga
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";  // Mencetak bintang dalam bentuk segitiga
        }
        cout << endl;  // Pindah baris setelah setiap baris selesai
    }

    return 0;  // Mengakhiri program dengan sukses
}