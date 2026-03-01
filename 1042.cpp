#include<bits/stdc++.h>

using namespace std;

int main(){
int a[3];
for(int i=0;i<3;i++)
{
    cin>>a[i];
}
sort (a[0],a[2]);

for(int i=0;i<3;i++)
{
    cin>>a[i];
}

for(int i=0;i<3;i++)
{
    cout<<a[i]<<endl;
}
return 0;

}
