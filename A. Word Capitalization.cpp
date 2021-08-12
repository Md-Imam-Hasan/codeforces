#include<iostream>
#include<string>

using namespace std;

int main()
{
    string A;
    cin>>A;
    int Length,i;
    Length=A.length();

    if(A[0]>=65&&A[0]<=90)
    {
        for(i=0;i<Length;i++)
        {
            cout<<A[i];
        }
        cout<<"\n";
    }

    else
    {
        A[0]=A[0]-32;
        for(i=0;i<Length;i++)
        {
            cout<<A[i];
        }
        cout<<"\n";
    }

    return 0;
}
