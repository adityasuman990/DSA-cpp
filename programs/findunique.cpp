#include<iostream>
using namespace std;
int num(int ar[],int s){
    int n=0;
    int p=0;
    for(int i=0;i<s;i++){
        p=0;
        for(int j=i+1;j<s;j++){
            if(ar[i]==ar[j]){
                p++;
            }
        }
        if(p<1){
            n=i;
            break;
        }
    }
    return n;
    
    }
    
    
    int main(){
    int array[9]= {1,3,5,7,8,5,1,3,7};
    cout<<num(array,9);
    
    
    return 0;
}
