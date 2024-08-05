/*
Problem statement
Sam is planting trees on the upper half region (separated by the left diagonal) of the square 
shared field.
For every value of ‘N’, print the field if the trees are represented by ‘*’.

Example:
Input: ‘N’ = 3

Output: 
* * *
* *
*
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {

		  for (int j=n; j>i; j--) {
			  cout << "* ";
		}
		cout << endl;
    }
}