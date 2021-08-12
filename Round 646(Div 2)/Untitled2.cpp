#include<bits/stdc++.h>
#define ll long long int

using namespace std;
string s,s1;

bool isSubSequence(string str1, string str2, int m, int n)
{
    // Base Cases
    if (m == 0) return true;
    if (n == 0) return false;

    // If last characters of two strings are matching
    if (str1[m-1] == str2[n-1])
    {
        if((m-1)==1)
        {
            if(s[n-1]=='0') s[n-1]='1';
            else s[n-1]='0';
        }
        return isSubSequence(str1, str2, m-1, n-1);
    }


    // If last characters are not matching
    return isSubSequence(str1, str2, m, n-1);
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string x,y;
        cin>>s;
        s1=s;
        x="101";
        y="010";
        int m=3,cnt1=0,cnt2=0;
        int i,j=0,k=0,l,a0=0,b1=0,ans=INT_MAX;
        l=s.length();
        //cout<<l<<endl;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                j++;
            }
            if(s[i]=='1')
            {
                k++;
            }
        }

        ans=min(j,k);

        for(i=0;i<l;i++)
        {
            if(s[i]=='0')
            {
                a0++;
                j--;
            }
            else if(s[i]=='1')
            {
                b1++;
                k--;
            }
            //ans=min(ans,a0+k);
            cout<<ans<<endl;
            //ans=min(ans,b1+j);
            cout<<ans<<endl;
        }
        cout<<ans;

            /*while(true)
            {
                if(isSubSequence(y,s,3,l))
                {
                    cnt1++;
                }
                else break;
            }
            s=s1;

            while(true)
            {
                if(isSubSequence(x,s,3,l))
                {
                    cnt2++;
                }
                else break;
            }

        if(j==k)
        {
            if(cnt1==0&&cnt2==0) cout<<"0";
        else if(cnt1==0&&cnt2>0) cout<<cnt2;
        else if(cnt1>0&&cnt2==0) cout<<cnt1;
        else if(cnt1>0&&cnt2>0) cout<<min(cnt1,cnt2);
        }
        else if(j<k)
        {
            cout<<cnt2;
        }
        else cout<<cnt1;*/

        if(t) cout<<"\n";
    }

    return 0;
}

