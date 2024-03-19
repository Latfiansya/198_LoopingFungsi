#include <iostream>
using namespace std;

int sisi;

void inputdata() {
	cout << "Masukkan sisi ; ";
	cin >> sisi;
}

int hitungluas() {
	return sisi * sisi;
}

void display() {
	cout << "Luas persegi :" << hitungluas() << endl;
}

int main() {
	inputdata();
	display();
}


