

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

	cout << "\n------------------" << endl;
	cout << "nEnter Array Element" << endl;
	cout << "\n------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}	
//swaps the element at index x with the element at index y
void swap(int x, int y)
{
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
	mov_count++;


}

void q_short(int low, int high)
{


}

int main()
{
 
}

