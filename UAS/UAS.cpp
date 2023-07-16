#include <iostream>
#include <string>
using namespace std;
//isi disini
const int MAX_MAHASISWA = ;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;


void tambahMahasiswa() {
	int nim;
	string nm;
	string jurusan;
	int tahunmasuk;

	cout << "\ntambahkan nim Mahasiwa ";
	cin >> nim;
	cout << "\ntambahkan nama: ";
	cin >> nama;
	cout << "\ntambahakan jurusan :";
	cin >> jurusan;
	cout << "\ntambahkan tahunmasuk :";
	cin >> tahunmasuk;
}



void tampilkanSemuaMahasiswa();
//isi disini
void algorithmacariMahasiswaByNIM();
//isi disini
void algorithmaSortByTahunMasuk();
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;

		cin.ignore();
		switch (pilihan)
		
		{
		case 1:
			obj.tambahMahasiswa();
			break;
		case 2:
			obj.tampilkanSemuaMahasiswa();
			break;
		case 3:
			obj.algorithmacariMahasiswaByNIM();
			break;
		case 4:
			obj.algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}


// 2. Algoritma yang digunakan double linked list,

// 3. Algorithma Stack adalah menyimpan data dengan ditumpuk yang hanya bisa diakses diatas/TOP
// elemen di stack bisa dimasukan dan dihapus  menggunakan basis Lastin-First-Out (LIFO) atau masuk terakhir, keluar pertama.
// Algoritma Queue adalalah data elemen yang dihapus dari ujung, memiliki akses depan dan belakang
// elemen di Queue dapat dihapus menggunakan basis Firs-in-First-Out (FIFO) atau masuk pertama, keluar pertama.

//4. Algorithma stack digunakan saat menyimpan data yang menumpuk yang bisa diaplikasikan oleh Array atau Linked List
// oprasi yang dilakukanya dengan Push (masuk) dan pop (keluar). Selain itu juga ekemenya di stack bisa dimasukan
// dan dihapus  menggukan basis LIFO atau Last-in-First-Out.

//5. a. 


