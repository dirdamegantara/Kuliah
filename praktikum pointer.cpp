#include <iostream>
#include <string>

using namespace std;

void reqursive(int x, int *y)
{
	x--;
	if (x == 1)
	{
		return;
	}
	*y = *y * x;
	reqursive(x, y);
}

int main()
{
	int x = 4;
	reqursive(x, &x);
	cout << x << "\n";
	system("PAUSE");
}




