// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main(){
    int T,n;
    long long int fib[100];
    
        fib[0]=0;
        fib[1]=1;
    for(int j = 2;j <= 60;j++){
        fib[j]=fib[j-2]+fib[j-1];
    }
    cin>>T;
    for(int i = 0;i < T;i++){
        cin>>n;
        cout<<"Fib("<<n<<") = "<<fib[n]<<endl;
    }

    return 0;
}