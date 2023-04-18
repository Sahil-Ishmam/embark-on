#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int ar[n];
    int counter[1000] = {0};
    int distinct = 0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        counter[ar[i]]++;
        if(counter[ar[i]]==1) distinct++;
    }
    cout<<distinct<<endl;






    return 0;
}

