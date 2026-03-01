#include<bits/stdc++.h>

using namespace std;

int main()
{
int arr[20],brr[20];
for(int i=0;i<20;i++)
{
    cin>>arr[i];
}

for(int j=0;j<20;j++)
{
    brr[j]=arr[19-j];
    cout<<"N["<<j<<"] = "<<brr[j]<<endl;
}

return 0;
}
