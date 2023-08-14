#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int b;
	float t, imt;
	
	cout << "Masukkan berat badan (kg) : ";
	cin >> b;
	cout << "Masukkan tinggi badan (m) : ";
	cin >> t;
	
	imt = b / (t*t);
	
	if(imt <= 18.5)
	{
		printf("Nilai IMT anda %.2f Anda termasuk kriteria Kurus", imt);
	}
	else if (imt <= 25)
	{
		printf("Nilai IMT anda %.2f Anda termasuk kriteria Normal", imt);
	}
	else if (imt <= 30)
	{
		printf("Nilai IMT anda %.2f Anda termasuk kriteria Gemuk", imt);
	}
	else if (imt > 30)
	{
		printf("Nilai IMT anda %.2f Anda termasuk kriteria Kegemukan", imt);
	}
	return 0;
}
