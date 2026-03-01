// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int num,arr1[5],arr2[5],cnt1=0,cnt2=0;
    for(int i = 0;i < 15;i++){
        cin>>num;
        if(num%2==0){
            arr1[cnt1] = num;
            cnt1++;
            
        }
        if(num%2!=0){
            arr2[cnt2] = num;
            cnt2++;
        }
        if(cnt2==5||i==14){
            for(int j=0;j<cnt2;j++){
                cout<<"impar["<<j<<"] = "<<arr2[j]<<endl;
                
            }
            cnt2=0;
        }
        if(cnt1==5||i==14){
            for(int k=0;k<cnt1;k++){
                cout<<"par["<<k<<"] = "<<arr1[k]<<endl;
                
            }
            cnt1=0;
        }
    }

    return 0;
}