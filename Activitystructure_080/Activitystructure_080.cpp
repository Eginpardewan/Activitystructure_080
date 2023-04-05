#include <iostream>
using namespace std;

struct mahasiswa
{
	string nim;
	string nama;
	string alamat;
	int umur;
};


int main() {
	mahasiswa mhs, mhs2;

	mhs.nim = "20220140090";
	mhs.umur = 20;
	mhs.nama = "Egin Pardewan";
	mhs.alamat = "Palembang";

	cout << "masukan NIM : ";
	cin >> mhs2.nim;
	cout << "masukan Umur : ";
	cin >> mhs2.umur;
	cout << "masukan Nama :";
	cin >> mhs2.nama;
	cout << "masukan Alamat : ";
	cin >> mhs2.alamat;

	cout << "NIM : " << mhs.nim;
	cout << "\nUmur : " << mhs.umur;
	cout << "\nNama : " << mhs.nama;
	cout << "\nAlamat : " << mhs.alamat;

	cout << "\n\nNIM : " << mhs.nim;
	cout << "\nUmur : " << mhs2.umur;
	cout << "\nNama : " << mhs2.nama;
	cout << "\nAlamat : " << mhs2.alamat;

}