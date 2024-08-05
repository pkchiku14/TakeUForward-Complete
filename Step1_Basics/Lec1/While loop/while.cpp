/*
While loop is another loop like for loop but unlike for loop it only checks for one condition.
Here, we will use a while loop and print a number n's table in reverse order.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, num;
    num = 10;
    cout << "Enter the input: ";
    cin >> t;
    while (num > 0) {
        cout << num*t << " ";
        num--;
    }
}