#include <iostream>  // Library standar input dan output

using namespace std;  // Menggunakan namespace std untuk menghindari penulisan std:: secara berulang

int main() {
    float luas, p, l;  // Deklarasi variabel untuk menyimpan luas, panjang, dan lebar

    //? const float PHI = 3.14;  
    
    cout << "Masukkan panjang : ";
    cin >> p;  // Membaca input float untuk panjang

    cout << "Masukkan lebar : ";
    cin >> l;  // Membaca input float untuk lebar

    luas = p * l;  // Menghitung luas dengan mengalikan panjang dan lebar

    cout << "Luas = " << luas << endl;  // Mencetak hasil perhitungan luas

    return 0;  // Mengembalikan nilai 0 menandakan program berakhir dengan sukses
}