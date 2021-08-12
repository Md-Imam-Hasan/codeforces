#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,cnt=0,flag=0,i;
        cin>>n;
        bool p;
        if((n%2==1)&&n>1)
        {
           cout<<"Ashishgup";
        }
        else if(n==1)
        {
            cout<<"FastestFinger";
        }
        else if(n==2)
        {
            cout<<"Ashishgup";
        }
        else
        {
            while(n%2==0)
            {
                cnt++;
                n/=2;
            }
            if(n>1&&cnt>1)
            {
                cout<<"Ashishgup";
                flag=1;
            }
            else
            {
                for(i=2;i*i<=n;i++)
                {
                    if(n%i==0)
                    {
                        cout<<"Ashishgup";
                        flag=1;
                        break;
                    }
                }
            }
            if(!flag)
            {
                cout<<"FastestFinger";
            }
        }
        if(t) cout<<"\n";
    }

    return 0;
}
