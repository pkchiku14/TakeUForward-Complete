/*
Given an integer choice denoting the choice of the user and a list containing the single value R or two values L and B depending on the choice.
If the user's choice is 1, calculate the area of the circle having the given radius(R).  
Else if the choice is 2, calculate the area of the rectangle with the given length(L) and breadth(B).

Note : A list arr[], containing the single value R or the two values L and B, as input parameters. 
Return the area of the desired geometrical figure. Use Math.PI for the value of pi.
*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int main() {
    int choice;
    cout << "Get the input for choice: " <<endl;
    cin >> choice;
    switch (choice) {
        case 1:
            int r;
            cout << "Input the radius: " << endl;
            cin >> r;
            cout << "The area of the circle is: "<< M_PI*r*r << endl;
            // cout << setprecision(2) << fixed;
            break;
        case 2:
            int arr[2];
            cout << "Enter length: "<< endl;
            cin >> arr[0];
            cout << "Enter Breadth: " << endl;
            cin >> arr[1];
            cout << "The area of the rectangle is: " << arr[0]*arr[1] << endl;
            // cout << setprecision(2) << fixed;
            break;
    }
    return 0;
}