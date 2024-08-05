/*
Problem statement
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Letter Triangle.

Example:
Input: ‘N’ = 3

Output: 

A
A B
A B C
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i<n; i++){
        for (char c='A'; c<='A'+i; c++){
            cout << c << " ";
        }
        cout << endl;
    }

}
