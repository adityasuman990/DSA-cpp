#include <iostream>
using namespace std;

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 9, 11, 23, 43, 54, 65, 23, 43, 32, 54, 34};
    int i, a, b, n;

    n = sizeof(arr) / sizeof(arr[0]);

    displayArray(arr, n);

    cout << "Enter the number you want to update: ";
    cin >> a;
    cout << "Enter the number you want to edit with: ";
    cin >> b;

    for (i = 0; i < n; i++) {
        if (a == arr[i]) {
            arr[i] = b;
            break;
        }
    }

    displayArray(arr, n);

    return 0;
}
