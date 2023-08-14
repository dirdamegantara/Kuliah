#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int pilihan;
int tebakan[10];
int x;
int minnumber;
int maxnumber;
int percobaan;

int menuawal()
{
	cout << endl;
	cout << "1. Mulai" << endl;
	cout << "2. Keluar" << endl;
	cout << "Silahkan memilih menu (1-2) : ";
	cin >> pilihan;
return 1;
}

int menumulai()
{
	cout << endl;
	cout << "Pilih tipe permainan: " << endl;
	cout << "1. Mudah (angka 1-10)" << endl;
	cout << "2. Sedang (angka 1-20)" << endl;
	cout << "3. Sulit (angka 1-50)" << endl;
	cout << "4. Mustahil (angka 1-100)" << endl;
	cout << "Silahkan memilih menu (1-4) : ";
	cin >> pilihan;
return 1;
}

int mulaimain()
{
	cout << endl;
	cout << "Anda hanya diberikan 10 kali kesempatan untuk menebak." << endl;
	cout << "Tebak angka dari " << minnumber << " - " << maxnumber << " : ";
	srand(time(0)); 
    x = rand() % maxnumber + minnumber;
    for(percobaan = 1; percobaan <= 11; percobaan++)
	 {
        cin >> tebakan[percobaan];
        if (x < tebakan[percobaan]) 
		{
            cout << "x lebih kecil dari angka yang kamu tebak" << endl;
            cout << "Tebakan (" << percobaan << "/10) : ";
        } 
		else if (x > tebakan[percobaan] && percobaan < 11) 
		{
            cout << "x lebih besar dari angka yang kamu tebak" << endl;
            cout << "Tebakan (" << percobaan << "/10) : ";
        } 
		else if (x == tebakan[percobaan] )
		{
            cout << "Selamat! Kamu menebak angka " << x << " dengan benar." << endl;
            break;
        }
        if(tebakan[percobaan] > maxnumber || tebakan[percobaan] < minnumber)
        {
        	cout << "Angka diluar jangkauan (" << minnumber <<"-" << maxnumber << ")" << endl;
		}
		else if(cin.fail())
		{
			cout << "Anda memasukkan input yang salah." << endl;
		}
		if(percobaan == 11)
		{
			cout << "Kamu kalah. Angka yang benar adalah " << x << endl;
		}
	}
	system("PAUSE");
	system("CLS");
	cout << endl;
	cout << "================" << endl;
	cout << "Hasil Permainan" << endl;
	cout << "================" << endl;
	cout << endl;
	cout << "X = " << x << endl;
	cout << "Tebakan terakhir = " << tebakan[percobaan] << endl;
	cout << endl;
	cout << "Riwayat Tebakan" << endl;
	for(int i = 1; i <= percobaan; i++)
	{
	cout << i << ". " << tebakan[i] << endl;
	}
	cout << endl;
	cout << "Terima kasih telah memainkan permainan tebak angka." << endl;
	cout << endl;
	cout << "Dibuat oleh" << endl;
	cout << "Dirda Megantara (F55122026)" << endl;
	cout << endl;
	system("PAUSE");
return 1;
}

int main() 
{
	cout << endl;
	cout << "===================================" << endl;
	cout << "Selamat datang di game tebak angka!" << endl;
	cout << "===================================" << endl;
	menuawal();
	if(pilihan == 1)
	{
		menumulai();	
		if(pilihan == 1)
		{
			minnumber = 1;
	 		maxnumber = 10;
	 		mulaimain();
	 	}
	 	else if(pilihan == 2)
	 	{
	 		minnumber = 1;
	 		maxnumber = 20;
	 		mulaimain();
	 	}
	 	else if(pilihan == 3)
	 	{
	 		minnumber = 1;
	 		maxnumber = 50;
	 		mulaimain();
	 	}
	 	else if(pilihan == 4)
	 	{
	 		minnumber = 1;
	 		maxnumber = 100;
	 		mulaimain();
	 	}
		}
	else if(pilihan == 2)
	{
		cout << endl;
		cout << "Terima kasih telah memainkan permainan tebak angka." << endl;
		cout << endl;
		cout << "Dibuat oleh" << endl;
		cout << "Dirda Megantara (F55122026)" << endl;
		cout << endl;
		system("PAUSE");
	}
    return 0;
}

