#include <iostream>
using namespace std;
int main(){
cout<<"Enter the Number:"<<endl;
int n;
cin>>n;
int i,sum,p;
sum=0;
while(n>0){
    p=n%10;
    sum=sum+p;
n=n/10;

}
cout<<"sum:"<<sum<<endl;
    return 0;
}