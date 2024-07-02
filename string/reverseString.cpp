#include <iostream> 
#include <string> 
using namespace std; 


string reverse_string(string str) {
    int length = str.length();
    string back=str;
    int j=0;
for (int i=length-1;i>0;i--){
    str[j]=back[i];
    j++;
}
return str;
}

int main() 
{
	cout << "Original string: w3resource"; 
	cout << "\nReverse string: " << reverse_string("w3resource"); 

	cout << "\n\nOriginal string: Python"; 
	cout << "\nReverse string: " << reverse_string("Python"); 

	return 0; 
}
