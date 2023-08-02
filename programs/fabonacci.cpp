#include <iostream>
using namespace std;
int main(){
    int a,b,i,j,q;
    cout<<"Welcome to fabonacci Series \n Enter the desired number of terms:"<<endl;
    cin>>q;
   a=0;
   b=1;
   cout<<a<<" "<<b<<" ";
    for (i=2;i<q;i++){
j=a+b;
cout<<j<<" ";
a=b;
b=j;

    }
    return 0;
}