#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

// Function to reverse a string
void reverseStr(string& str,int n)
{

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}


int main()
{
    int n,i;
    cin>>n;
    string t;
    cin>>t;
}
