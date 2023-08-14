#include <iostream>
#include <string.h>

using namespace std;

struct mahasiswa
{
	char nim[128][128];
	char nama[128][128];
	char mk[128][128];
	float tugas[128];
	float uts[128];
	float uas[128];
	float nilaiakhir[128];
//	char nilaihuruf[128][128];
};

int main()
{
	mahasiswa mhs;
	int pilihan;
	cout << "=====================" << endl;
	cout << "Program Penilaian Mahasiswa" << endl;
	cout << "=====================" << endl;
	for(int i = 1; i <= 2; i++)
	{
		cout << "1. Input Data Nilai Mahasiswa \n";
		cout << "2. Data Nilai Akhir dan Huruf Mahasiswa \n";
		cout << "3. Keluar \n";
		cout << "Masukkan no. pilihan menu anda (1-3) : ";
		cin >> pilihan;
		int banyakdata;
		if(pilihan == 1)
		{
			cout << "Masukkan banyak data : ";
			cin >> banyakdata;
			
			cout << "\n";
			cout << "=====================" << endl;
			cout << "Input Data Nilai Mahasiswa" << endl;
			cout << "=====================" << endl;
			for(int i = 1; i <= banyakdata; i++)
			{
				cout << i << "." << endl;
				cout << "NIM : ";
				cin.ignore();
				cin.getline(mhs.nim[i], 128);
				cout << "Nama : ";
				cin.getline(mhs.nama[i], 128);
				cout << "Nama MK : ";
				cin.getline(mhs.mk[i], 128);
				cout << "Tugas : ";
				cin >> mhs.tugas[i];
				cout << "UTS : ";
				cin >> mhs.uts[i];
				cout << "UAS : ";
				cin >> mhs.uas[i];
				mhs.nilaiakhir[i] = mhs.tugas[i]*40/100 + mhs.uts[i]*30/100 + mhs.uas[i]*30/100;
			}
		}
		else if(pilihan == 2)
		{
			cout << "\n";
			cout << "=====================" << endl;
			cout << "Data Nilai Mahasiswa" << endl;
			cout << "====================="<< endl;	
			for(int i = 1; i <= banyakdata; i++)
			{
				cout << i << "." << endl;
				cout << "NIM : " << mhs.nim[i] << endl;
				cout << "Nama : " << mhs.nama[i] << endl;
				cout << "Nama MK : " << mhs.mk[i] << endl;
				cout << "Nilai Akhir : " << mhs.nilaiakhir[i] << endl;
				cout << "Nilai Huruf : ";
				if(mhs.nilaiakhir[i] < 45)
				{
					cout << "E \n";
				}
				else if(mhs.nilaiakhir[i] < 55)
				{
					cout << "D \n";
				}
				else if(mhs.nilaiakhir[i] < 60)
				{
					cout << "C \n";
				}
				else if(mhs.nilaiakhir[i] < 65)
				{
					cout << "C+ \n";
				}
				else if(mhs.nilaiakhir[i] < 75)
				{
					cout << "B \n";
				}
				else if(mhs.nilaiakhir[i] < 80)
				{
					cout << "B+ \n";
				}
				else if(mhs.nilaiakhir[i] > 80)
				{
					cout << "A \n";
				}
			}
		}
		else if(pilihan == 3)
		{
			cout << "Selesai";
			break;
		}
		
	}
}
