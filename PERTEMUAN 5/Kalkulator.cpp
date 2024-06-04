#include <iostream>
#include <math.h>  // Library untuk fungsi matematika (misalnya pow())
#include <cctype>  // Library untuk fungsi toupper()

using namespace std;

// Deklarasi prototipe fungsi
void garis();  // Fungsi untuk mencetak garis pembatas
void bintang();  // Fungsi untuk mencetak bintang sebagai pembatas
void menu();  // Fungsi untuk menampilkan menu operasi kalkulator
int tambah(int a, int b);  // Fungsi untuk operasi penambahan
int kurang(int a, int b);  // Fungsi untuk operasi pengurangan
int kali(int a, int b);  // Fungsi untuk operasi perkalian
float bagi(int a, int b);  // Fungsi untuk operasi pembagian
int modulo(int a, int b);  // Fungsi untuk operasi modulo
int pangkat(int a, int b);  // Fungsi untuk operasi perpangkatan

int main() {
    char cont;

    do {
        system("cls");  // Membersihkan layar konsol (hanya untuk Windows)

        menu();  // Memanggil fungsi menu untuk menampilkan pilihan operasi

        int operation, a, b, hasil;
        cout << "Masukkan operasi : ";
        cin >> operation;  // Meminta pengguna untuk memilih operasi

        cout << "Masukkan angka pertama : ";
        cin >> a;  // Meminta pengguna untuk memasukkan angka pertama

        cout << "Masukkan angka kedua : ";
        cin >> b;  // Meminta pengguna untuk memasukkan angka kedua

        switch(operation) {  // Memilih operasi berdasarkan input pengguna
            case 1:
                hasil = tambah(a, b);
                break;
            case 2:
                hasil = kurang(a, b);
                break;
            case 3:
                hasil = kali(a, b);
                break;
            case 4:
                hasil = bagi(a, b);
                break;
            case 5:
                hasil = modulo(a, b);
                break;
            case 6:
                hasil = pangkat(a, b);
                break;
        }

        cout << "Hasil = " << hasil << endl;  // Menampilkan hasil operasi

        bintang();  // Memanggil fungsi bintang untuk menampilkan garis bintang

        cout << "Apakah Anda ingin melanjutkan? [Y/N] : ";
        cin >> cont;  // Meminta pengguna untuk memasukkan pilihan untuk melanjutkan

    } while(toupper(cont) == 'Y');  // Melakukan pengulangan jika pengguna ingin melanjutkan

    cout << "Terima kasih telah menggunakan program kalkulator" << endl;  // Pesan terima kasih saat program selesai
    return 0;
}

// Implementasi fungsi-fungsi yang telah dideklarasikan sebelumnya

void garis() {
    cout << "====================================" << endl;  // Mencetak garis pembatas
}

void bintang() {
    cout << "************************************" << endl;  // Mencetak bintang sebagai pembatas
}

void menu() {
    garis();  // Memanggil fungsi garis untuk mencetak garis pembatas
    cout << "Selamat Datang di Program Kalkulator" << endl;  // Menampilkan pesan selamat datang
    garis();  // Memanggil fungsi garis lagi untuk mencetak garis pembatas
    cout << "1. Tambah \n2. Kurang \n3. Kali \n4. Bagi \n5. Modulo \n6. pangkat" << endl;  // Menampilkan menu operasi kalkulator
    garis();  // Memanggil fungsi garis lagi untuk mencetak garis pembatas
}

// Implementasi fungsi-fungsi operasi matematika

int tambah(int a, int b) {
    return a + b;  // Mengembalikan hasil penambahan a dan b
}

int kurang(int a, int b) {
    return a - b;  // Mengembalikan hasil pengurangan a dan b
}

int kali(int a, int b) {
    return a * b;  // Mengembalikan hasil perkalian a dan b
}

float bagi(int a, int b) {
    return static_cast<float>(a) / static_cast<float>(b);  // Mengembalikan hasil pembagian a dan b (dalam bentuk float)
}

int modulo(int a, int b) {
    return a % b;  // Mengembalikan hasil modulo a dan b
}

int pangkat(int a, int b) {
    return pow(a, b);  // Mengembalikan hasil a pangkat b menggunakan fungsi pow() dari <math.h>
}