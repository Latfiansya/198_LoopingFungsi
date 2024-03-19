#include <iostream>
using namespace std;

int main()
{
	int i;
	int arr[5];

	for (i = 60; i > 10; i -= 10)
	{
		cout << "Selamat Pagi Dunia" << endl;
	}
	for (i = 0; i < 5; i++)
	{
		cout << "Masukkan Nilai Index ke-" << i << " : ";
		cin >> arr[i];
	}
	for (i = 0; i < 5; i++)
	{
		cout << "Data Array ke-" << i << " :" << arr[i] << endl;
	}
	return 0;
}

