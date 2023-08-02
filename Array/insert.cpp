// to run this file in cpp 
// g++ insert.cpp 
// ./a.out

#include <iostream>
using namespace std;
int main()
{
    int x, y, i, n, p,q;
    int a[] = {1, 2, 3, 4, 5};
    n = sizeof(a) / sizeof(a[0]);

    cout << "Array Elements are:" << endl;
    for (i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
    cout << endl;
    cout << "total no of elements in array:" << endl;
    cout << n << endl;
    cout << "enter the element you want to insert:" << endl;
    cin >> x;
    cout << "enter the position you want to insert:\n Make sure you enter the value less than " << n << endl;
    cin >> y;
    y--;
       p=a[y];
        a[y]=x;
    for(i=y;i<n+1;i++){
    q=a[y+1];
     a[y+1]=p;
    }
    cout<<"new array:"<<endl;
for ( i = 0; i < n+1; i++)
{
    
    cout<<a[i]<<" ";
}
cout<<endl;

    return 0;
}
