#include<iostream>
#include<string>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "Orang dibuat\n" << endl;
	}
	~orang() {
		cout << "Orang dihapus\n" << endl;
	}
}; 

class manusia {
public:
	string JenisKelamin;

	manusia(string pJenisKelamin) :
		JenisKelamin(pJenisKelamin) {
		cout << "Manusia dibuat\n" << endl;
	}
	~manusia() {
		cout << "Manusia dihapus\n" << endl;
	}
}; 

class pelajar : private manusia, public orang {
public:
	string sekolah;

	pelajar(string pNama, string pJenisKelamin, string pSekolah) :
		orang(pNama),
		manusia(pJenisKelamin),
		sekolah(pSekolah) {
		cout << "Pelajar dibuat\n" << endl;
	}
	~pelajar() {
		cout << "Pelajar dihapus\n" << endl;
	}
	string perkenalan() {
		return " Hallo, nama saya " + nama + " dengan jenis kelamin " + JenisKelamin + " dari sekolah" + sekolah + "\n\n";
	}
};

int main() {
	pelajar siswa("Andi Laksono", "Laki-Laki", "SMAN 1 Bantul");
	cout << siswa.perkenalan();

	return 0;
};
