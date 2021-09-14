#include <iostream>
using namespace std;
void printRepeatingEven(int arr[], int n)
{
	long long _xor = 0L;
	long long p;
	int count=0;
	for( int i = 0; i < n; ++i)
	{
		p = 1 << arr[i];
		_xor ^= p;
	}
	for (int i = 0; i < n; ++i)
	{
		p = 1 << arr[i];
		if (!(p & _xor))
		{
			count++;
			_xor ^= p;
		}
	}
	if(count!=0)
	cout << count;
	else
	cout << "-1";
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++)
	cin>>arr[i];
	int ne = sizeof(arr) / sizeof(arr[0]);

	printRepeatingEven(arr, n);

	return 0;
}
