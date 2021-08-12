#include <bits/stdc++.h>
#define ll long long

using namespace std;
float pi =3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        float n,i,j,k;
        cin>>n;
        float sq;
        j=pi/(2*n);
        sq=1/(tan(j));
        cout<<std::fixed<<setprecision(9)<<sq;

        if(t) cout<<"\n";
    }

    return 0;
}

