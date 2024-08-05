/*
Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the Reverse N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

*****
 ***
  *
*/


#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i=1; i<=n; i++){
        for (int j=n; j>n-i+1; j--){
            cout << " ";
        }
        for (int j=2*n-1; j>=2*i - 1; j--){
            cout << "*";
        }
        for (int j=n; j>n-i+1; j--){
            cout << " ";
        }
        cout << endl;
    }
}