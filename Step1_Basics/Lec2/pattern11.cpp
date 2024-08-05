/*
Problem statement
Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the 
N-Binary Number Triangle.
You are required to print the pattern as shown in the examples below.

Example:
Input: ‘N’ = 3

Output: 

1
0 1
1 0 1
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int start=1;
    for (int i=0; i<n; i++){
        
        if (i%2==0) start=1;
        else start=0;
        for (int j=0; j<=i; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout<< endl;
    }
}
