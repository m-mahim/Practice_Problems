#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr[5],cnt=0;
        cin>>n;
        for(int i=0;i<5;i++){
            cin>>arr[i];
            if(arr[i]==n)
            cnt++;
        }
        cout<<cnt<<endl;
    

    return 0;
}