#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
       string s;
       cin>>s;

       ll res=0,value=2,pls=0,mins=0;

       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='+')
           {
               pls++;
           }
           else if(s[i]=='-')
           {
               mins++;
           }
           if(s[i]=='-')
           {
               if(pls>0)
               {
                   pls--;
                   res++;
               }
               else
               {
                   res+=value;
               }
           }
           else if(s[i]=='+')
           {
               res++;
           }
           value++;
       }

       cout<<res<<endl;

       /*int res=0;
       for(int j=0;j<=INT_MAX;j++)
       {
           int cur=j;
           bool ok=true;
           for(int i=0;i<s.length();i++)
           {
               res+=1;
               if(s[i]=='+') cur++;
               else cur--;
               if(cur<0)
               {
                   ok=false;
                   break;
               }
           }
           if(ok) break;
       }
       cout<<res<<endl;*/
    }

    return 0;
}
