#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Number :"<<endl;
    int a;
    cin>>a;
    int value;
    value=1;
    for(int i=1;i<=a;i++){
        value=value*i;
    }
    cout<<"The value is :"<<value;
return 0;
}