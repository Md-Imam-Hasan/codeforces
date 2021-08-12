// Simple method to compute n! % p
#include <bits/stdc++.h>
using namespace std;

// Returns value of n!! % p
int modFact(int n, int p)
{
	if (n >= p)
		return 0;

	int result = 1;
	for (int i = (n%2==0?2:1); i <= n; i+=2)
		result = (result * i) % p;

	return result;
}

// Driver program
int main()
{
	int input;
	cin>>input;
	int n = input/1000, p = input-(n*1000);
	int x=modFact(n, p);
	cout<<x<<endl;
	return 0;
}
