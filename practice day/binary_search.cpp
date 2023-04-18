#include<bits/stdc++.h>
using namespace std;
int binary__search(int ar[],int n, int target)
{
    int low = 0;
    int high = n-1;
    int mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(ar[mid]==target)
        {
            return mid;
        }
        else if(target<ar[mid])
        {
            high = mid-1;
        }
        else if(target>ar[mid])
        {
            low = mid+1;
        }

    }
    return -1;
}
int main()
{
    int n=10;
    int ar[n] = {1,4,66,2,65,6,8,12,89,10};
    sort(ar,ar+10);
//    for(int i=0;i<10;i++)
//    {
//        cout<<ar[i]<<" ";
//    }
    int target;
    cout<<"enter element to search : ";
    cin>>target;
    int is_found = binary__search(ar,n,target);
    cout<<is_found<<endl;
    if(is_found!=-1)
    {
        cout<<"element found at index :"<<is_found<<" "<<endl;
    }
    else{
        cout<<"element not found "<<endl;
    }
    return 0;
}


