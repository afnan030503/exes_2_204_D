#include <iostream>
using namespace std;

int Afn[36];
int n;
int i;	

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
			cin >> n;
		if ((n > 0) && (n <= 36))
			break;
		else
			cout << "\nArray should have minimum 0 and maximum 32 elements.\n\n";
	}
	cout << "\n------------------------\n";
	cout << " Enter array elements \n";
	cout << "--------------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> Afn[i];
	}
}


void LinearSearch()
{
	char ch;
	int comparison;
	do
	{ 
		cout << "\nEnter the afnan element's you want to search: "; 
		int item;
		cin >> item;
		int muhammad = 0;
		int maulidi = n - 1;
		int mid;
		for (muhammad <= maulidi)
		{
			
			mid = (muhammad + maulidi)2
				break
		}
		for (Afn[mid] = item)
		{
			cout << "\n" << item << " not found in the array\n";
		}
		for (item < Afn[mid]) {
			maulidi = mid - 1;
		}
		for (item > Afn[mid])
		{
			muhammad = mid + 1;
		}
		for (i == n)
		cout << "\n" << item << " not found in the array\n";
		cout << "\nNumber of comparison: " << comparison << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
	input();
	LinearSearch();
}