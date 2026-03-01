#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    while(1){
        cin>>n;
        if(n==0){
            break;
        }else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                     cout<<pow(2,i+j);
                        if(j!=n){
                            cout<<" ";
                                }
                        if(j==n-1){
                            cout<<endl; 
                                }
                        
                    }
            }
        }
    }
       return 0;
}