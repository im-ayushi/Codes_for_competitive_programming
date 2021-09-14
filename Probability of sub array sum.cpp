#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>


using namespace std;
double countSubarray(int arr[],int n, int k)
{
	int count = 0; 
	double t=n*(n+1)/2;
	for (int i = 0; i < n; i++) 
	{
		int sum = 0;
		for (int j = i; j < n; j++) 
		{
        	if (sum + arr[j] <= k) 
			{
				sum = arr[j] + sum;
				count++;
			}
			else 
			{
				break;
			}
		}
	}
    double ne;
    ne=(double)count/t;
	return ne;
}
int main()
{
	
	int n,k;
	cin>>n>>k;
	int array[n];
	for(int i=0;i<n;i++)
	{
	    cin>>array[i];
	}
	int size = sizeof(array) / sizeof(array[0]);
	double count = countSubarray(array, size, k);
	std::cout << std::fixed;
    std::cout << std::setprecision(8);
	std::cout << count << "\n";
}
