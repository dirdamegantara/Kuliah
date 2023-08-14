#include <iostream>
using namespace std;

int main()
{
	char nama[20], alias;
	int usia;
	cout << "Masukkan nama lengkap >> ";
	cin.getline(nama, 20);
	cout << "Masukkan usia >> ";
	cin >> usia;
	cout << "Masukkan nama panggilan >> ";
	cin >> alias;
	cout << "Namanya " << nama << " alias " << alias << " usia " << usia << " tahun";
	
	return 0;
}


