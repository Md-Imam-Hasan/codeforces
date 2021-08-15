#include<iostream>
#include<string>

using namespace std;

int main()
{
    string H="hello";
    string T;
    cin>>T;
    int H_length,T_length,i,j,k=0,value=0;
    H_length=H.length();
    T_length=T.length();

    for(i=0;i<H_length;i++)
    {
        for(j=k;j<T_length;j++)
        {
            if(H[i]==T[j])
                {
                    k=j+1;
                    value++;
                    break;
                }
        }
    }

    if(value==H_length)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
