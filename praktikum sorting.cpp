#include <iostream>
#include <string>

using namespace std;

void Display(int arr[], int x, string s){
	cout << s;
	for (int i = 0; i < x + 1; i++)
	{
		cout << arr[i] << ". ";
	}
}

void Insertion_Sort(int arr[], int x)
{
	int j, temp;
	for (int i = 1; i < x + 1; i++)
	{
		j = i;
		while (j > 0 && arr[j] < arr[j-1])
		{
			temp = arr[j];
			arr[j] = arr[j-1];
			arr [j-1] = temp;
			j--;
		}
	}
	Display(arr, x, "\nData Setelah sorting: ");
}

int main()
{
	int arr[10] = { 4,2,7,8,9,6,3,5,10,1 };
	int x = (sizeof(arr) / arr[0] - 1);
	Display(arr, x, "Data awal: ");
	Insertion_Sort(arr, x);
	cout << "\n";
	system("PAUSE");
}


