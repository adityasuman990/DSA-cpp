#include <iostream>
#include <vector>
using namespace std;
int binary(const vector<int>& arr, int target){
    int left=0;
    int right= arr.size()-1;
    
    while(left<=right){
        int mid= left+(right-left)/2;
        
        if(arr[mid]==target){
            return mid;
        }
        if(mid<target){
            left=mid+1;
        }
        else right=mid-1;
    }
    return -1;
}

int main()
{
    vector<int> arr={2,3,4,5,6,7,8,9};
    int target=8;
    int index=binary(arr,target);
    if(target==-1){
        cout<<"number not found"<<endl;
    }
    else cout<<"number found at index"<<index<<endl;
    

    return 0;
}
