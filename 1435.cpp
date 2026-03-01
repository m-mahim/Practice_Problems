// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
    int n;
    while(1){
        cin>>n;
        if(n==0){
            break;
        }else{
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                 if(i==1||i==n||j==1||j==n){
                     cout<<1;
                        if(j==n){
                            cout<<endl; 
                                }
                        if(j!=n){
                            cout<<" ";
                                }
                    }else{
                        if(i==2||i==n-1||j==2||j==n-1){
                     cout<<2;
                        if(j==n){
                            cout<<endl; 
                                }
                        if(j!=n){
                            cout<<" ";
                                }
                    }else{
                        if(i==3||i==n-2||j==3||j==n-2){
                     cout<<3;
                        if(j==n){
                            cout<<endl; 
                                }
                        if(j!=n){
                            cout<<" ";
                                }
                    }
                        else{cout<<i;
                        if(j==n){
                            cout<<endl; 
                                }
                        if(j!=n){
                            cout<<" ";
                                }
                        }
                    }
                    }
                    
            }
          }
        }
    }
    return 0;
}