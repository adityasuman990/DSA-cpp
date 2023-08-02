#include <iostream>
using namespace std;
void sarray(int arr[],int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}


int main(){
// int arr[20];

int i,a,b;
int arr[20]={1,2,3,4,5,6,7,8,10,9,11,23,43,54,65,23,43,32,54,34};
int n=sizeof(arr) / sizeof(arr[0]);
// for(i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
sarray(arr,n);
// cout<<n<<endl;
cout<<"Enter the number you want to update"<<endl;
cin>>a;
cout<<"enter the number you want to edit with:"<<endl;
cin>>b;
for(i=0;i<n;i++){
    if(a==arr[i]){
        arr[i]=b;
        // break;
    }
}
sarray(arr,n);
    return 0;
}