#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
    int sum=1;
    cin>>x;
    if(x>0){
        for(int j=2;j<=x/2;j++)
        {
            if(x%j == 0)
                sum+=j;
        }

        if(sum == 1){
            cout<<x<<" nao eh perfeito"<<endl;
        }
        else if(sum == x){
            cout<<x<<" eh perfeito"<<endl;
        }
        else{
            cout<<x<<" nao eh perfeito"<<endl;
        }
        sum=0;
}
        else{
    cout<<x<<" nao eh perfeito"<<endl;
}
}
return 0;
}

