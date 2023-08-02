// // to run this file in cpp 
// // g++ deletion.cpp 
// // ./a.out

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x, y, i, n, p,q, count;
//     int a[] = {1, 2, 3, 4, 5};
//     n = sizeof(a) / sizeof(a[0]);

//     cout << "Array Elements are:" << endl;
//     for (i = 0; i < n; i++)
//     {

//         cout << a[i] << " ";
//     }
//     cout << endl;
//     cout << "total no of elements in array:" << endl;
//     cout << n << endl;
//     cout << "enter the element you want to delete:" << endl;
//     cin >> x;
//     for(i=0;i<n;i++){
//         if(x==a[i]){
//         count=i;}
//     }
//      for(i=count;i<n-1;i++){
//         a[i+1]==a[i];
        
//     }
    




    
  
// for ( i = 0; i < n-1; i++)
// {
    
//     cout<<a[i]<<" ";
// }
// cout<<endl;

//     return 0;
// }




#include <iostream>
using namespace std;

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int n = 5; // Initial number of elements in the array
    int pos;

    // Display the array before deletion
    cout << "Array before deletion:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Input the position of the element to delete
    cout << "Enter the position of the element to delete (1 to " << n << "): ";
    cin >> pos;

    if (pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
    } else {
        // Shift elements to the left to overwrite the element to be deleted
        for (int i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--; // Decrement the number of elements

        // Display the array after deletion
        cout << "Array after deletion:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}


