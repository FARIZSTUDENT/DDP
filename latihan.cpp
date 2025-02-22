#include <iostream>
using namespace std;

struct Penulis
{
    string nama;
};

struct Buku
{
    int id;
    string judul;
    Penulis penulis;
    int harga;
};

void tambahBuku(Buku bukuList[], int &jumlahBuku)
{
    int jumlahBuku;
    cout << endl;
    cout << "Masukkan Jumlah Data Buku : ";
    cin >> jumlahBuku;

    for (int i = 0; i < jumlahBuku; i++)
    {
        cout << endl;
        cout << "Masukkan Data Buku ke-" << i + 1 << endl;
        cout << "ID Buku : ";
        cin >> bukuList[i].id;
        cout << "Judul Buku : ";
        cin.ignore();
        cin >> bukuList[i].judul;
        cout << "Nama Penulis : ";
        cin.ignore();
        getline(cin, bukuList[i].penulis.nama);
        cout << "Harga Buku : ";
        cin >> bukuList[i].harga;
    }
}

void tampilkanBuku(Buku bukuList[], int)

    int main()
{
    int pilih;
    cout << "===SELAMAT DATANG DI MENU TOKO BUKU===\n";
    cout << "1. Tambah Buku\n";
    cout << "2. Tampilkan Daftar Buku\n";
    cout << "3. Ubah Data Buku\n";
    cout << "4. Hapus Buku\n";
    cout << "5. Hitung Total Harga Buku\n";
    cout << "6. Keluar\n";
    cout << "Pilih Menu : ";
    cin >> pilih;

    switch (pilih)
    {
    case 1:

        break;

    default:
        break;
    }
}