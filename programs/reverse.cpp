#include <iostream>
using namespace std;
int main(){
    cout<<"enter the Number:"<<endl;
    int n;
    cin>>n;
    int number,i,rev;
    rev=0;
    while(n>0){
        i=n%10;
        rev=rev*10+i;
        n=n/10;
    }
    cout<<rev<<endl;
    return 0;
}