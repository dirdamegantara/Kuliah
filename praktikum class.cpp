#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Persegi{
	public:
		int PanjangSisi;
		int Luas(){
			return PanjangSisi * PanjangSisi;
		}
		int Keliling(){
			return 4 * PanjangSisi;
		}
		void Tampilkan(){
			cout << "Luas Persegi: " << Luas() << ", Keliling: " << Keliling();
		}
};

class Kubus: public Persegi{
	public:
		Kubus(int K){
			PanjangSisi = K;
		}
		int Volume(){
			return PanjangSisi * PanjangSisi * PanjangSisi;
		}
		int LuasPermukaan(){
			return 6 * Luas();
		}
		void Tampilkan(){
			cout << "Luas Permukaan Persegi: " << LuasPermukaan() << ", Volume: " << Volume();
		}
};

int main()
{
	Kubus K(10);
	K.Tampilkan();
	_getch();
}



