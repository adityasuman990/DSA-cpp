//selection short

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,i;
    
    cout<<"enter the number of elements in array:"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;}
        }
    }
    
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
}
