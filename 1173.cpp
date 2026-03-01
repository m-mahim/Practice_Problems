#include<bits/stdc++.h>

using namespace std;

int main()
{
int n, arr[10];

    cin>>n;

for(int i=0;i<10;i++)
{
    arr[i]=n*(pow(2,i));
    cout<<"N["<<i<<"] = "<<arr[i]<<endl;
}

return 0;
}


