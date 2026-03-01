#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int minimum = INT_MAX;
    int position;
     for(int i=0;i<n;i++)
    {
        if(arr[i]<=minimum)
    {
        minimum=arr[i];
        position = i+1;
    }
    }
    cout<<position<<endl;
    return 0;
}
