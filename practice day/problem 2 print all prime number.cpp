#include<bits/stdc++.h>
using namespace std;
long long is_prime(long long  n)
{

    if(n<2)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    if(n%2==0)
    {
        ///printf("asdfasd\n");
        return 0;
    }
    for(int i=3;i<sqrt(n);i+=2)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    long long  n;
    bool flag ;
    cin>>n;

    for( long long i =1;i<=n;i++)
    {
        int ans = is_prime(i);
        if(ans!=0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;


    return 0;
}


