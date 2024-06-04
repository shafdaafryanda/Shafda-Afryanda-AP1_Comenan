#include <iostream>

using namespace std;

int main() {
    int nilai;

    cout << "Masukkan Nilai: ";
    cin >> nilai;

    // Pernyataan If
    // Memeriksa apakah nilai 'nilai' kurang dari atau sama dengan 65
    if (nilai <= 65) {
        cout << "Anda TIDAK Lulus" << endl;
    }

    // Pernyataan If-Else
    // Memeriksa apakah nilai 'nilai' kurang dari atau sama dengan 65
    // Jika benar, mencetak "Anda TIDAK Lulus"; jika tidak, mencetak "Anda Lulus"
    if (nilai <= 65) {
        cout << "Anda TIDAK Lulus" << endl;
    } else {
        cout << "Anda Lulus" << endl;
    }

    // Pernyataan If-Else-If
    // Memeriksa apakah 'nilai' sama dengan 100, mencetak "Anda Hebat"
    // Jika tidak, jika 'nilai' kurang dari atau sama dengan 65, mencetak "Anda TIDAK Lulus"
    // Jika tidak, mencetak "Anda Lulus"
    if (nilai == 100) {
        cout << "Anda Hebat" << endl;
    } else if (nilai <= 65) {
        cout << "Anda TIDAK Lulus" << endl;
    } else {
        cout << "Anda Lulus" << endl;
    }

    // Pernyataan If Bersarang
    // Memeriksa apakah 'nilai' kurang dari atau sama dengan 65, mencetak "Anda TIDAK Lulus"
    // Jika tidak, memeriksa apakah 'nilai' sama dengan 100, mencetak "Anda Lulus dan Anda Hebat"
    // Jika tidak, mencetak "Anda Lulus"
    if (nilai <= 65) {
        cout << "Anda TIDAK Lulus" << endl;
    } else {
        if (nilai == 100) {
            cout << "Anda Lulus dan Anda Hebat" << endl;
        } else {
            cout << "Anda Lulus" << endl;
        }
    }

    // Switch Case
    // Mencetak hari dalam minggu berdasarkan nilai 'nilai' (1 sampai 7)
    // Jika 'nilai' tidak dalam rentang 1 sampai 7, mencetak "Inputan TIDAK VALID"
    switch (nilai) {
        case 1:
            cout << "Senin" << endl;
            break;
        case 2:
            cout << "Selasa" << endl;
            break;
        case 3:
            cout << "Rabu" << endl;
            break;
        case 4:
            cout << "Kamis" << endl;
            break;
        case 5:
            cout << "Jumat" << endl;
            break;
        case 6:
            cout << "Sabtu" << endl;
            break;
        case 7:
            cout << "Minggu" << endl;
            break;
        default:
            cout << "Inputan TIDAK VALID" << endl;
            break; // Opsional
    }

    // Switch Case Untuk Rentang
    // Memeriksa rentang nilai 'nilai' dan mencetak nilai huruf yang sesuai
    switch (nilai) {
        case 85 : 100;
            cout << "A" << endl;
            break;
        case 80 : 84;
            cout << "B+" << endl;
            break;
        case 75 : 79;
            cout << "B" << endl;
            break;
        case 70 : 74;
            cout << "C+" << endl;
            break;
        case 65 : 69;
            cout << "C" << endl;
            break;
        case 60 : 64;
            cout << "D" << endl;
            break;
        default:
            cout << "E" << endl;
            break;
    }

    // Operator Ternary
    // Memeriksa apakah 'nilai' genap atau ganjil, menetapkan "Genap" atau "Ganjil" ke 'checkNum'
    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    cout << nilai << " adalah bilangan " << checkNum << endl;
}