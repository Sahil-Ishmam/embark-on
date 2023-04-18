#include<bits/stdc++.h>
using namespace std;


void prefix_sum(int ar[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(ar[i]>=0)
        {
            ar[i] = ar[i]+ar[i-1];
        }
        else
        {
            ar[i] = ar[i-1];
        }
//        ar[i] = ar[i]+ar[i-1];
    }
}
void printArray(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    prefix_sum(ar,n);
//    printArray(ar,n);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int lb,ub;
        cin>>lb>>ub;
        if(lb!=1)
        {
            cout<<ar[ub-1]-ar[lb-2]<<endl;
        }
        else
        {
            cout<<ar[ub-1]<<endl;
        }
    }


    return 0;
}


