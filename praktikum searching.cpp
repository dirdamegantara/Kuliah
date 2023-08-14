#include <iostream>
#include <string.h>

using namespace std;

void Binary(int arr[], int x, int y)
{
	bool found = false;
	int tengah, awal = 0, akhir = x-1;
	while (found == false && awal <= akhir)
	{
		tengah = (awal + akhir) / 2;
		if (arr[tengah] > y)
		{
			akhir = tengah - 1;
		}
		else if (arr[tengah] < y)
		{
			awal = tengah + 1;
		}
		else 
		{
			found = true;
		}
	}
	if(found)
	{
		cout << "Data ditemukan!\n";	
	}
	else
	{
		cout << "Data tidak ditemukan!\n";
	}
}

int main()
{
	int arrr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int x = sizeof(arrr)/sizeof(arrr[0]);
	int y;
	cout << "Data yang ingin dicari: ";
	cin >> y;
	Binary(arrr, x, y);
	system("PAUSE");
}


