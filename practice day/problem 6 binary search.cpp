#include<bits/stdc++.h>
using namespace std;

int binary_search_function(int ar[],int n,int target)
{
    int low =0;
    int high = n-1;
    int mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        int mid_val = ar[mid];
        if(mid_val==target) return mid;
        else if(target<mid_val) high = mid-1;
        else if(target>mid_val) low = mid+1;
    }
    return -1;
}
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
    int n;
//    cout<<"number of element:";
    cin>>n;
    int target;
//    cout<<"value that you want to search: ";
    cin>>target;
    int ar[n];
//    cout<<"enter the values that you are looking for  :";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    int index = binary__search(ar,n,target);
//    cout<<index<<endl;
    if(index!=-1)
    {
        cout<<index+1<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    return 0;
}

