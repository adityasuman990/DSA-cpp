// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 
 
 void swap(int array[]){
      for(int i=0;i<8;i+=2){
         int n=array[i];
        array[i]=array[i+1];
        array[i+1]=n;
    }
 }
 void print(int ar[]){
       for(int i=0;i<8;i++){
        cout<<ar[i]<<endl;
    }
 }


int main() {
    
    // int n;
    int array[8]= {1,2,3,4,5,6,7,8 };
   swap(array);
   print(array);
  

    return 0;
}
