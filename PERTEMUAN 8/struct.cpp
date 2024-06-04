#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Struct Declaration
struct Mahasiswa {
    string nama, nim;
    float nilai;
};

int main() {
    system("cls");

    // Struct Initialization
    Mahasiswa mhs;
    vector<Mahasiswa> mahasiswa;
    int n;

    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        
        cin.get();  // Clearing the newline character from the input buffer
        cout << "Masukkan nama : ";
        getline(cin, mhs.nama);

        cout << "Masukkan NIM : ";
        cin >> mhs.nim;

        cout << "Masukkan nilai : ";
        cin >> mhs.nilai;

        mahasiswa.push_back(mhs);
    }

    // Displaying Mahasiswa data
    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "NIM : " << mahasiswa[i].nim << endl;
        cout << "Nilai : " << mahasiswa[i].nilai << endl;
    }

    return 0;
}