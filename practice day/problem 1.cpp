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
    sort(ar,ar+n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    int minimum = ar[k-1];
    int maximum = ar[n-k];
    cout<<endl  <<minimum<<" "<<maximum<<endl;
    return 0;
}


