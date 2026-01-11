/*

Scenario: A scholar is cataloging celestial events using a system that supports bases up to
Base 36 (using digits 0-9 and letters A-Z).
Write a C++ program that converts a decimal number to a user-specified base between 2 and
36.
1. Use a WHILE loop for conversion.
2. If the target base is greater than 10, use 'A' for 10, 'B' for 11, ..., up to 'Z' for 35.
3. Validate the target base (2-36).
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
int dec, base;
cout << "Enter Decimal Number: ";
cin >> dec;
if(dec < 0) {
cout << "Enter a positive Number.\n";
return 0;
}
cout << "Enter Target Base : ";
cin >> base;
if(base < 2 || base > 36) {
cout << "Invalid base, Base must be between 2 and 36." << endl;
return 0;
}
if(dec == 0) {
cout<<dec<<" in Base "<<base<<" is: 0"<<endl;
return 0;
}
string res = "";
int val = dec;
while(val != 0) {
int mod = val % base;
char sym;
if(mod < 10) {
sym=mod+'0';
} else{
sym = (mod-10) + 'A';
}
res = sym + res;
val /= base;
}
cout<<dec<<" in Base "<<base<<" is: "<<res<<endl;
return 0;
}
