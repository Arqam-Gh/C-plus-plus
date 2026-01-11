/*

Scenario: To secure his kingdom, the King plans a network of guard towers on a square N x
N grid. All positions on the main and anti-diagonals are marked '0', as they are the oldest
paths. All other positions are marked with the shortest distance to either of the two diagonals.
Write a C++ program using FOR loops only that prompts the user for an odd number N and
prints an N x N numerical pattern where each number represents the minimum Manhattan
distance to either the main diagonal or the anti-diagonal.

*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter odd side length (N): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Not an odd number." << endl;
        return 0;
    }

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {

            int d1, d2;

            if (row >= col)
                d1 = row - col;
            else
                d1 = col - row;

            int sum = row + col;
            if (sum >= n + 1)
                d2 = sum - (n + 1);
            else
                d2 = (n + 1) - sum;

            int layerDiff;
            if (d1 < d2)
                layerDiff = d1;
            else
                layerDiff = d2;

            cout << "  " << layerDiff; 
        }
        cout << endl;
    }

    return 0;
}

