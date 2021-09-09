#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>

using namespace std;

// Function that checks if sum
// is prime or not
bool isPrimeString(string str)
{
	int len = str.length(), nodd = 0,neven=0, abssum=0;
	for (int i = 0; i <len; i++)
	{
		if(i%2==0)
		neven += (int)str[i];
		else
		nodd += (int)str[i];
	}
		abssum=abs(neven-nodd);
	if (abssum % 3 == 0 || abssum % 5 == 0 || abssum % 7 == 0)
		return true;
	else
			return false;

	return true;
}

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	string str;
	cin>>str;
	if (isPrimeString(str))
		cout << "Prime String" << endl;
	else
		cout << "Casual String" << endl;
	}
}
