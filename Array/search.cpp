#include <iostream>
using namespace std;

int main() {
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 21, 32, 4, 3, 54, 65, 45, 65, 43};
    int i, b;
    bool a = false; // Initialize a as false (not found)
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter the number you want to search:" << endl;
    cin >> b;

    for (i = 0; i < n; i++) {
        if (b == arr[i]) {
            a = true; 
            break;    // No need to continue searching once found
        }
    }

    if (a) {
        cout << "Number Found at position " << i << endl;
    } else {
        cout << "Number not found" << endl;
    }

    return 0;
}
