/*
The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following 
formula -

    F(n) = F(n - 1) + F(n - 2), 
    Where, F(1) = 1, F(2) = 1


Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 
'n' = 2 by using conditionals like if else and return what's expected.

"Indexing is start from 1"
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

        int num, start, next, result;
        cin >> num;
        start = 0;
        next = 1;
        if (num==1){
                result = 1;
        } else {
                        for (int i=1; i<num; i++) {
                                result = start + next;
                                start = next;
                                next = result;
        }
        }

        cout << result;
}