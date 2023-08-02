#include <iostream>
using namespace std;
int main(){
    int i,a;
int count;
count=0;
    cout<<"Enter the Number you want to check for:"<<endl;
    cin>>a;
    for(i=1;i<a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count<=2){
        cout<<"Number is a prime number"<<endl;
    }
    else cout<<"Not a prime number"<<endl;
    return 0;
}