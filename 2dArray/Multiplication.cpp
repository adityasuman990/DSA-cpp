#include <iostream>
using namespace std;

int main() {
    int q, r; // Rows and columns for the matrices
    int i, j, k; // Loop counters

    cout << "Enter the array dimensions (e.g., 2X2):" << endl;
    cin >> q >> r;

    int a[q][r];
    int b[q][r];
    int c[q][r];

    cout << "Enter the first array:" << endl;
    for (i = 0; i < q; i++) {
        for (j = 0; j < r; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter the second array:" << endl;
    for (i = 0; i < q; i++) {
        for (j = 0; j < r; j++) {
            cin >> b[i][j];
        }
    }

    for (i = 0; i < q; i++) {
        for (j = 0; j < r; j++) {
            c[i][j] = 0;
            for (k = 0; k < r; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Answer:" << endl;
    for (i = 0; i < q; i++) {
        for (j = 0; j < r; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
