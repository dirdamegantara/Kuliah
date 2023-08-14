#include <iostream>
using namespace std;

int bil1, bil2;
int tambah(int a, int b)
{
	return a + b;
}
int kurang(int a, int b)
{
	return a - b;
}
int kali(int a, int b)
{
	return a * b;
}
int bagi(int a, int b)
{
	return a / b;
}
void total()
{
	float hasil = 0;
	hasil = tambah(bil1, bil2) + kurang(bil1, bil2) + kali(bil1, bil2) + bagi(bil1, bil2);
	cout << "\nTotal = " << hasil;
}
int main()
{
	cout << "Masukkan bil1 : "; cin >> bil1;
	cout << "Masukkan bil2 : "; cin >> bil2;
	cout << "a + b = " << tambah(bil1, bil2) << "\n";
	cout << "a - b = " << kurang(bil1, bil2) << "\n";
	cout << "a * b = " << kali(bil1, bil2) << "\n";
	cout << "a / b = " << bagi(bil1, bil2) << "\n";
	total();
	cout << "\n"; system("PAUSE"); 
}



