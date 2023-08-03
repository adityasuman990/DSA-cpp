// A palindrome number is a number that is same after reverse.
//  For example 121, 34543, 343, 131, 48984 are the palindrome 
//  numbers.


#include <iostream>  
using namespace std;  
int main()  
{  
  int n,r,sum=0,temp;    
  cout<<"Enter the Number=";    
  cin>>n;    
 temp=n;    
 while(n>0)    //algorithm to reverse a number!!!
{    
 r=n%10;    
 sum=(sum*10)+r;    
 n=n/10;    
}    
if(temp==sum)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.";   
  return 0;  
}  