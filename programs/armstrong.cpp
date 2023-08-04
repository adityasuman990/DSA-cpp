#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number:"<<endl;
int n;
int r,sum,p;
sum=0;
cin>>n;
 while(n>0)    //algorithm to reverse a number!!!
{   
     
 r=n%10;    
 p=r*r*r; 
 sum=sum+p;   
 n=n/10;    
} 
cout<<sum;
// if(sum==n){
//     cout<<"Armstrong Number"<<endl;
// }
// else cout<<"Not an Armstrong Number"<<endl;
//     return 0;
}
