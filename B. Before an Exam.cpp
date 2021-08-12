#include<iostream>

using namespace std;

int main()
{
    int d,sumTime;
    cin>>d>>sumTime;
    int minTime[d],maxTime[d],summin=0,summax=0;

    for(int i=0;i<d;i++)
    {
        cin>>minTime[i]>>maxTime[i];
        summin+=minTime[i];
        summax+=maxTime[i];
    }

    if(sumTime>summax||sumTime<summin)
    {
        cout<<"NO";
        return 0;
    }
    else
    {
        cout<<"YES"<<endl;
        int remain=sumTime-summin;
        for(int i=0;i<d;i++)
        {
            int temp=maxTime[i]-minTime[i];
            if(remain>=temp)
            {
                minTime[i]+=temp;
                remain-=temp;
            }
            else
            {
                minTime[i]+=remain;
                break;
            }
        }

        for(int i=0;i<d;i++)
            cout<<minTime[i]<<" ";
    }
    return 0;
}
