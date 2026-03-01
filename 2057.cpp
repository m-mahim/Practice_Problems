#include<bits/stdc++.h>

using namespace std;

int main(){
    int dep,trav,des,sum = 0;
    cin>> dep>> trav>> des;

    sum = dep + trav + des;
    if(sum<24 && sum>=0){
        cout<<sum<<endl;
    }
    if(sum<0){
        cout<<24+sum<<endl;
    }
    if(sum>24){
        cout<<sum-24<<endl;
    }
    if(sum == 24){
        cout<<0<<endl;
    }

    return 0;

}

