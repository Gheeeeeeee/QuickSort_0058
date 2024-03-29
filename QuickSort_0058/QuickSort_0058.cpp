

#include <iostream>
using namespace std;

//array integers ( deklarasi golba)
int arr[20];
int cmp_count = 0; // jumlah perbandingan
int mov_count = 0; // jumlah data yang tertukar
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array :";
		cin >> n;

		if (n <= 20)
		break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;

	}
}
int main()
{
 
}

