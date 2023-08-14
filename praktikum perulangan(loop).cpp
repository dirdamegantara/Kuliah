#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	float x = 1, total = 0, rata = 0;
	while (x != 0)
	{
		n++;
		cout << "Data ke-" << n << " : ";
		cin >> x;
		total = total + x;
	}
	n--;
	rata = total / n;
	cout << "Ada " << n << " data\n";
	cout << "Total : " << total << "\n";
	cout << "Rata-rata : " << rata << "\n";
	system("Pause");
}


