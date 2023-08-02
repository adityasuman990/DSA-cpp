#include <iostream>
using namespace std;

int main(){
    int row,column;
    // int i,;
    cout<<"enter the no of rows:"<<endl;
    cin>>row;
    cout<<"enter the number of column:"<<endl;
    cin>>column;
    int arr[row][column];
    cout<<"enter the elements"<<endl;
     for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin>>arr[i][j];
        }
    }
    cout<<"the elements are:"<<endl;
 for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Your multiDimentional array in one-d Array"<<endl;
int n=row*column;
int arrone[n];
int r=0;


 for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            arrone[r]=arr[i][j];
            r++;
        }
        cout<<endl;
    }

    cout<<"in 2d array"<<endl;
    for(int q=0;q<n;q++){
        cout<<arrone[q]<<" ";
    }
    cout<<endl;
    return 0;
}