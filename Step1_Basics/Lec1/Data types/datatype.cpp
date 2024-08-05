/*
Geek is learning a new programming language. As data type forms the most fundamental part of a language, Geek is learning them with focus and needs your help.
Given a data type, help Geek in finding the size of it in byte.

Data Type - Character, Integer, Long, Float and Double
*/



#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        if (str == "Character"){
            return 1;
        } else if (str == "Integer" || str == "Float"){
            return 4;
        } else {
            return 8;
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}