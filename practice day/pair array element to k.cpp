#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int cnt = 0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]+ar[j]==k)
            {
                cout<<ar[i]<<"  "<<ar[j]<<endl;
                cnt++;
            }

        }
    }
    cout<<cnt<<endl;
    return 0;
}

