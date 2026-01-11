/*

Scenario: An Alchemist is decoding a cipher written in an inward spiral. The key is to
determine if each number is a Composite number ('C') or a Prime number ('P'). The numbers
spiral inward from N^2 down to 1.
Write a C++ program that generates an inward spiral pattern for a given N. The spiral should
run from N^2 down to 1. For each position, print 'C' if the number is composite, 'P' if it is
prime, and '.' for 1.
Note: Arrays are not allowed.

*/
#include<iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter N: ";
    cin >> size;
    int curr = size * size;
    for(int r = 1; r <= size; r++) {
        for(int c = 1; c <= size; c++) {
            if(curr == 1) {
                cout << ".";
            } else {
                int isPrime = 1;
                
                if(curr <= 1)
                    isPrime = 0;
                if(curr == 2)
                    isPrime = 1;
                    
                for(int i = 2; i * i <= curr && isPrime == 1; i++) {
                    if(curr % i == 0) {
                        isPrime = 0;
                    }
                }
                if(isPrime == 1) {
                    cout << "P";
                } else {
                    cout << "C";
                }
            }
            curr--;
        }
        cout<<endl;
    }
    return 0;
}
