#include <iostream>
using namespace std;

struct Mahasiswa
{
	char STB[15];
	char Nama[50];
	char Kelas[5];
	float IPK;
};

int main()
{
	Mahasiswa mhs;
	cout << "Stambuk\t: ";
	cin.getline(mhs.STB, 15);
	cout << "Nama\t: ";
	cin.getline(mhs.Nama, 50);
	cout << "Kelas\t: ";
	cin.getline(mhs.Kelas, 5);
	cout << "IPK\t: ";
	cin>>mhs.IPK;
	cout << "\n\nInformasi yang anda masukkan:\n" <<
			"Stambuk\t: " << mhs.STB << "\n" <<
			"Nama\t: " << mhs.Nama << "\n" <<
			"Kelas\t: " << mhs.Kelas << "\n" <<
			"IPK\t: " << mhs.IPK << "\n";
			system("PAUSE");
}









