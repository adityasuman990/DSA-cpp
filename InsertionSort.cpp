#include <iostream>

using namespace std;

int main() {
    int n, i;

    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    
    int arr[n];
    
    cout << "Enter the elements: " << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

   for(i=1;i<n;i++){
       int current=arr[i];
       int j=i-1;
       while(arr[j]>current &&j>=0){
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=current;
   }
   

    cout << "Sorted array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
