#include<bits/stdc++.h>

using namespace std;

int main(){

    int height,pipes,cnt=0;
    cin>>height>>pipes;
    int arr[pipes],arr1[pipes-1];
    for(int i=0;i<pipes;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<pipes-2;i++)
    {
        arr1[i]=abs(arr[i]-arr[i+1]);
        if(arr1[i]>height)
            cnt=1;
    }
    if(cnt==0)
        cout<<"YOU WIN\n";
    else{
        cout<<"GAME OVER\n";
    }
    return 0;
}

