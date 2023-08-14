#include <iostream>

using namespace std;

int main()
{
	int matriks1[2][2];
	int matriks2[2][2];
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << "Data Matriks1[" << i << "][" << j << "] = ";
			cin >> matriks1[i][j]; 
		}
	}
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << "Data Matriks2[" << i << "][" << j << "] = ";
			cin >> matriks2[i][j]; 
		}
	}
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << matriks1[i][j] << " * " << matriks2[i][j] << " = "
			<< matriks1[i][j] * matriks2[i][j] << endl;
		}
	}
	system("PAUSE");
}





