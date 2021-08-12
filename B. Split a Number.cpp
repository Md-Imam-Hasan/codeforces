#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
string findSum(string str1, string str2)
{
    // Before proceeding further, make sure length
    // of str2 is larger.
    if (str1.length() > str2.length())
        swap(str1, str2);

    // Take an empty string for storing result
    string str = "";

    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();

    // Reverse both of strings
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        // Do school mathematics, compute sum of
        // current digits and carry
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');

        // Calculate carry for next step
        carry = sum/10;
    }

    // Add remaining digits of larger number
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    // Add remaining carry
    if (carry)
        str.push_back(carry+'0');

    // reverse resultant string
    reverse(str.begin(), str.end());

    return str;
}
int main()
{
    fast_io;
    int t=1,kase=1;
    ///cin>>t;

    while(t--)
    {
        ll n,i,j,k,l,r;
        cin>>n;
        l=n/2-1;
        r=n/2;
        string s,p,q;
        string sum[2];
        cin>>s;
        for(i=n%2?n/2:n/2-1;i>0&&s[i]=='0';i--);
        for(j=n%2?n/2+1:n/2;j<n&&s[j]=='0';j++);
        sum[0]=findSum(s.substr(0,i),s.substr(i,n-i));
        sum[1]=findSum(s.substr(0,j),s.substr(j,n-j));
        sort(sum,sum+2);
        if(sum[0].length()>sum[1].length()) cout<<sum[1]<<endl;
        else cout<<sum[0]<<endl;
    }

    return 0;
}

