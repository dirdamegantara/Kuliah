#include <iostream>
using namespace std;

int main()
{
	int data_lulus[3][4];
	char jur [10][3] = {"TI", "MI", "TK"};
	int thn[4] = { 2012, 2013, 2014, 2015 };
	int jurusan, tahun;
	for (int baris = 0; baris < 3; baris++)
	{
		for(int kolom = 0; kolom < 4; kolom++)
		{
			cout << "Masukkan jumlah lulusan " << jur[baris] << " tahun " <<
			thn[kolom] << " : "; cin >> data_lulus[baris][kolom];
		}
	}
		while(1)
		{
			cout << "Masukkan Jurusan (0 = TI, 1 = MI, 2 = TK) : ";
			cin >> jurusan;
			if (jurusan == 0 || jurusan == 1 || jurusan == 2)
			{
				break;
			}
		}
		while(1)
		{
			cout << "Masukkan Tahun (" << thn[0] << " - " << thn[3] << ") : ";
			cin >> tahun;
			if (tahun >= thn[0] && tahun <= thn[3])
			{
				tahun -= thn[0]; // konversi jadi index 0,1,2, atau 3
				break;
			}
		}
		cout << "Jumlah yang lulus = " << data_lulus[jurusan][tahun] << "\n";
		system("PAUSE");
	}





