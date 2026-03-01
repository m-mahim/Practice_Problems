
#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,x;
int sum =1;
cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>x;
    if( x>0 )
    {
        for(int j=2;j<=x/2;j++)
        {
            if(x%j == 0)
                sum+=j;
        }

        if(sum == x){
            cout<<x<<" eh perfeito"<<endl;
        }
        else{
            cout<<x<<" nao eh perfeito"<<endl;
        }
    }
    else{
        cout<<x<<" nao eh perfeito"<<endl;
    }
}
return 0;
}



