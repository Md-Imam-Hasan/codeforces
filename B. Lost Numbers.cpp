#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int ar[6]={4,8,15,16,23,42};
    int a,b,c,d;
    cout<<"? 1 2\n? 1 3\n? 4 5\n? 4 6"<<endl;
    cin>>a>>b>>c>>d;

    while(1)
    {
        if(ar[0]*ar[1]==a&&ar[0]*ar[2]==b&&ar[3]*ar[4]==c&&ar[3]*ar[5]==d)
        {
            cout<<"!";
            for(int i=0;i<6;i++) cout<<" "<<ar[i];
            cout<<endl;
            break;
        }
        else next_permutation(ar,ar+6);
    }
    return 0;
}

