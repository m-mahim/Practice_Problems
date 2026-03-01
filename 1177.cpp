// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main(){
    int num,cnt=0;
    cin>>num;
    for(int i = 0;i < 1000;i++){
        
        cout<<"N["<<i<<"] = "<<cnt<<endl;
        if(cnt<num-1){
            cnt++;
        }else{
            cnt=0;
        }
        
    }

    return 0;
}