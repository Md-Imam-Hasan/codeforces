#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

   A:
    while(t--)
    {
        ll n,i,j,k,flag=0,flag0=0;
        cin>>n;
        string s;
        cin>>s;
        string a="";
        int ones=0,zeros=0;
        int ones1=0,zeros1=0;
        if(n==1)
        {
            cout<<s<<endl;
            goto A;
        }

        for(i=0;i<n;i++)
        {
            if(s[i]=='0') zeros1++;
            else break;
        }
        if(zeros1<n)
        {
            for(j=n-1;j>=0;j--)
            {
                if(s[j]=='1') ones1++;
                else break;
            }
        }

        /*for(i=0;i<n;i++)
        {
            if(s[i]=='0'&&!flag)
                continue;
            else if(s[i]=='1'&&!flag0)
            {
                if(!flag) flag=1;
                ones++;
            }
            else if(s[i]=='0'&&flag)
            {
                zeros++;
                flag0=1;
            }
            else if(s[i]=='1'&&flag0)
            {

                //a+='0';
                ones=1;
                flag=1;
                zeros=0;
                flag0=0;
                //i--;
            }
        }*/
        if(ones1==n)
        {
            cout<<s<<endl;
            goto A;
        }
        if(zeros1==n)
        {
            cout<<s<<endl;
            goto A;
        }
        if(zeros1+1>0&&j>i)
        {
            for(i=1;i<=zeros1+1;i++)
            {
                a+='0';
            }
        }
        else if(zeros1>0)
        {
            for(i=1;i<=zeros1;i++)
            {
                a+='0';
            }
        }
        if(ones1>0)
        {
            for(i=1;i<=ones1;i++)
            {
                a+='1';
            }
        }

        cout<<a<<endl;
    }

    return 0;
}
