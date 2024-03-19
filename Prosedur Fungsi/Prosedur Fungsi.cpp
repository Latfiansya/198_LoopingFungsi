#include <iostream>
using namespace std;

int panjang, lebar;

void inputdata()
{
	cout << "Masukkan nilai panjang : ";
	cin >> panjang;
	cout << "Masukkan nilai lebar : ";
	cin >> lebar;
}

int hitungluas()
{
	return panjang * lebar;
}

void bebas()
{
	cout << "Luasnya adalah : " << hitungluas() << endl;
}

int main()
{
	inputdata();
	bebas();
}
