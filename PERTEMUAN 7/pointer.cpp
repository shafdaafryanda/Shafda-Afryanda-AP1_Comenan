#include <iostream>

using namespace std;

void penjumlahan(int a, int b) {
    cout << a + b << endl;
}

void penjumlahanPointer(int* a, int* b) {
    *a += *b;
    cout << *a << endl;
}

void doubleValue(int* a) {
    *a *= 2;
}

int main() {
    system("cls");  // Membersihkan layar konsol (umumnya digunakan di lingkungan Windows)

    int number = 35;
    int* pointer_number = &number;

    cout << "Isi variabel number = " << number << endl;
    cout << "Alamat memori variabel number = " << &number << endl;
    cout << "Isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;

    // Operasi Pointer
    *pointer_number = 25;
    cout << "Isi variabel number = " << number << endl;
    cout << "Alamat memori variabel number = " << &number << endl;
    cout << "Isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;

    // Pointer in Array
    int num[] = {1, 2, 3, 4, 5};
    int* pointer_num = num;

    cout << "Isi variabel num = " << num[0] << endl;
    cout << "Alamat memori variabel num = " << &num[0] << endl;
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori vairabel pointer_num = " << &pointer_num << endl;

    *pointer_num += 5;
    cout << "Isi variabel num = " << num[0] << endl;
    cout << "Alamat memori variabel num = " << &num[0] << endl;
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori vairabel pointer_num = " << &pointer_num << endl;

    // Pointer in Parameter
    int num1 = 5;
    int num2 = 7;

    penjumlahan(num1, num2);  
    cout << num1 << endl;     // num1 tidak berubah
    cout << num2 << endl;     // num2 tidak berubah

    penjumlahanPointer(&num1, &num2);  // Pass by pointer
    cout << num1 << endl;     // num1 berubah sesuai dengan fungsi penjumlahanPointer
    cout << num2 << endl;     // num2 berubah sesuai dengan fungsi penjumlahanPointer

    // Pointer in Pointer
    int score = 4;
    int* pointer_score = &score;
    int** ptr_pointer_score = &pointer_score;
    cout << "Isi variabel score " << score << " dan alamat memorinya " << &score << endl;
    cout << "Isi variabel pointer_score " << pointer_score << " isi variabel yang ditunjuk oleh pointer_score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    cout << "Isi variabel ptr_pointer_score " << pointer_score << " isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori ptr_pointer_score " << &ptr_pointer_score << endl;

    int* ptr = new int;  // Lokasi Memori
    *ptr = 30;
    cout << "Isi variabel ptr " << *ptr << " alamat variabel ptr " << &ptr << endl;
    delete ptr;  
    int n;
    cout << "Masukkan sebuah angka : ";
    cin >> n;

    doubleValue(&n);  
    cout << "Nilai angka setelah dikali 2 = " << n << endl;

    return 0;
}