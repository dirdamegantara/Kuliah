#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct Mahasiswa{
	string Nim;
	string Nama;
	int jumlahip;
	float ip[10];
	float totalip;
	float Ipk;
};
	Mahasiswa M[10];
	int Jumlah = 0;
	int jumlahip = 0;
	int Total = 0;
	int Pilihan = 0;

float hitungipk()
{
	for(int i = 0; i < Jumlah; i++)
	{
		M[i].Ipk = (M[i].totalip / M[i].jumlahip);
	}
}

int main()
{
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
							cin.ignore();
							cout << "\t\tNama: ";
							getline(cin, M[i].Nama);
							cout << "\t\tJumlah Matakuliah: ";
							cin >> M[i].jumlahip;
							for(int j = 0; j < M[i].jumlahip; j++)
							{
								cout << "\t\tIP matakuliah ke-" << j+1 << ": ";
								cin >> M[i].ip[j];
								M[i].totalip += M[i].ip[j];
							}
							cout << "\t\tTotal IP: " << M[i].totalip;
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
						hitungipk();
						cout << "\t\tIPK :" << M[i].Ipk << "\n";
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



