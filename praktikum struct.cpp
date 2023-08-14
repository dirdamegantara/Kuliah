#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct Mahasiswa{
	string Nim;
	string Nama;
	float Ipk;
	bool Aktif;
};

int main()
{
	Mahasiswa M[10];
	int Jumlah = 0;
	int Total = 0;
	int Pilihan = 0;
	while (Pilihan != 3)
	{
		system("cls");
		cout << "Input data mahasiswa\n\n";
		cout << "1. Input data\n2. Tampil data\n3. Exit\n\nPilihan: ";
		cin >> Pilihan;
		switch (Pilihan)
		{
			case 1:
				if ((Total) != 10)
				{
					cout << "Jumlah: ";
					cin >> Jumlah;
					if ((Jumlah+Total) < 11)
					{
						Jumlah += Total;
						for (int i = Total; i < Jumlah; i++)
						{
							cout << "\n";
							cout << "\tMahasiswa ke-" << i + 1 << "\n";
							cout << "\t\tNim: ";
							cin >> M[i].Nim;
							cout << "\t\tNama: ";
							cin >> M[i].Nama;
							cout << "\t\tIpk: ";
							cin >> M[i].Ipk;
							cout << "\t\t[0]Active, [1]NonActive: ";
							cin >> M[i].Aktif;
							Total++;
						}
						cout << "\n";
						cout << "\t\tSelesai " << Jumlah;
						_getch();
					}
					else
					{
						cout << "Data tidak cukup..";
						_getch();
					}
				}
				else
				{
					cout << "Data penuh..";
					_getch();
				}
				break;
			case 2:
				if (Jumlah != 0)
				{
					for (int i = 0; i < Jumlah; i++)
					{
						cout << "\n";
						cout << "\tMahasiswa ke-" << i + 1 << "\n";
						cout << "\t\tNim: " << M[i].Nim << "\n";
						cout << "\t\tNama: " << M[i].Nama << "\n";
						cout << "\t\tIpk: " << M[i].Ipk << "\n";
						if (M[i].Aktif == 0)
						{
							cout << "\t\tAktif: Active\n";
						}
						else
						{
							cout << "\t\tAktif: NonActive\n";
						}
					}
					cout << "\n";
					cout << "\t\tSelesai " << Jumlah;
					_getch();
				}
				else
				{
					cout << "\n";
					cout << "Data kosong";
				}
				break;
			default:
				break;
		}
	}
	cout << "Terima Kasih..";
	_getch();
}



