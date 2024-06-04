#include <iostream>
#include <vector>

using namespace std;

/*
Class digunakan untuk mendefinisikan tipe data baru yang menggabungkan data
(anggota data) dan fungsi (anggota fungsi) menjadi satu unit
*/

class Mahasiswa {
    //? Access Modifier
    private:
        string nama, nim;
        float nilai;

    //? Access Modifier
    public:
        //? Constructor -> Fungsi yang langsung dipanggil ketika class diinstansiasi
        Mahasiswa(string nama, string nim, float nilai) {
            //? this->, merujuk pada properties yg dimiliki oleh class Mahasiswa, bukan pada parameter
            this->nama = nama;
            this->nim = nim;
            this->nilai = nilai;
        }

        //? Getter Function -> berfungsi untuk mengembalikan data sebuah variabel yang memiliki akses private
        string getName() {
            return this->nama;
        }

        //? Method untuk menampilkan data
        void display() {
            cout << "Nama   : " << this->nama << endl;
            cout << "NIM    : " << this->nim << endl;
            cout << "Nilai  : " << this->nilai << endl;
        }
};

int main() {
    system("cls");

    //? Membuat objek siswa1 dari class Mahasiswa
    Mahasiswa siswa1("Andi", "231401111", 45.6);
    siswa1.display();

    //! Error, karena access modifier properties di classnya private
    cout << siswa1.nama << endl;
    siswa1.nama = "Budi";
    cout << siswa1.nama << endl;

    cout << siswa1.getName() << endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    string nama, nim;
    float nilai;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get();
        cout << "Masukkan nama : ";
        getline(cin, nama);

        cout << "Masukkan NIM : ";
        cin >> nim;

        cout << "Masukkan nilai : ";
        cin >> nilai;

        //? Membuat objek mhs, lalu memasukkannya kedalam vector
        Mahasiswa mhs(nama, nim, nilai);
        mahasiswa.push_back(mhs);
    }
    //? Menampilkan data tiap mahasiswa
    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        mahasiswa[i].display();
    }

    return 0;
}