/*
                                                            -ˋˏ ༻𖤓༺ ˎˊ-
                                                               QUESTION

Mathematicians often debate the concept of special numbers that look ordinary but secretly
follow unusual patterns. In this problem, your task is to determine whether a given number
deserves the title of Special according to a set of unconventional rules.
A number n (where n is a positive integer) will qualify as Special only if all the following
primary and secondary conditions are satisfied in the given order:
Primary Conditions (must pass unless exceptions apply)
1. Digit Sum Parity Rule

○ Find the sum of all decimal digits of n.
○ If this sum is odd, you pass Rule 1.
○ If this sum is even, you instantly fail Rule 1... unless you qualify for the
Palindrome Exception (see below).

2. Square-Sum Divisibility Rule

○ Calculate the sum of the squares of all digits of n.
○ If n is divisible by this value (no remainder), you pass Rule 2.
○ If not, you fail Rule 2 and the number is immediately disqualified from being
Special, even if other rules pass.

3. Minimum Size Rule

○ Numbers less than 10 (single-digit numbers) are never considered Special
under any circumstances, even if they pass other rules.

Secondary Condition (applies after primary rules)
4. Palindrome Exception

○ If the number reads the same forwards and backwards (palindromic number),
then the Digit Sum Parity Rule can be ignored (Rule 1 is treated as passed) but
only if Rules 2 and 3 are still satisfied.

What to Do in the Program
● Input an integer n.
● Apply the rules in the order above.
● Clearly display which rules passed and which failed.
● At the end, print either:
○ "Special Number" — if it meets all criteria (or meets criteria after exception is
applied)

○ "Not Special" — otherwise.

Important Restrictions
● Palindrome check must be done mathematically (no string reversal).
● Your program must use separate functions for each rule check.
● You must evaluate rules in the correct sequence, reordering them changes the logic
and will be marked wrong.
● Conditional statements (if-else) must be used for all decision-making.

                                                    ‧͙⁺˚*･༓☾　SOLUTION　☽༓･*˚⁺‧͙
*/


#include <iostream>
using namespace std;
    int num,dig1,dig2,dig3,dig4,dig5,dig6,dig7,dig8,dig9,dig10,orig_num,sum1,sum2,r1,r2,r3,s1,d1,d2,d3,d4,d5,d6,d7,d8,d9,d,digit;
    int rule1(){
    sum1=dig1+dig2+dig3+dig4+dig5;
    if(sum1%2!=0){
        cout<<"The number passed rule 01 (Digit Sum Parity Rule)."<<endl;
        r1=1;}
    else {
        cout<<"The number failed rule 01 (Digit Sum Parity Rule)."<<endl;
        r1=0;}
    return r1;
    }
    int rule2(){
        dig1=dig1*dig1;
        dig2=dig2*dig2;
        dig3=dig3*dig3;
        dig4=dig4*dig4;
        dig5=dig5*dig5;
        dig6=dig6*dig6;
        dig7=dig7*dig7;
        dig8=dig8*dig8;
        dig9=dig9*dig9;
        dig10=dig10*dig10;
        sum2=dig1+dig2+dig3+dig4+dig5+dig6+dig7+dig8+dig9+dig10;
        if(orig_num%sum2==0){
            cout<<"The number has passed rule 02 (Square-Sum Divisibility Rule)."<<endl;
            r2=1;}
        else {cout<<"The number has failed rule 02 (Square-Sum Divisibility Rule)."<<endl;
            r2=0;}
        return r2;
    }
    int rule3(){
        if(orig_num<10){
            cout<<"The number is less than 10, and has failed rule03 (Minimum Size Rule)."<<endl;
            r3=0;}
        else{
            cout<<"The number is greater than 10, and has passed rule03 (Minimum Size Rule)."<<endl;
            r3=1;}
        return r3;
        }
    int sec_test(){
        if(digit=10 && dig1==dig10 && dig2==dig9 && dig3==dig8 && dig4==dig7 && dig5==dig6){
            cout<<"The Number is Palindromic Number so Rule01(Digit Sum Parity Rule) is considered to be passed"<<endl;
            s1=1;
            return s1;}
        if(digit=9 && dig1==dig9 && dig2==dig8 && dig3==dig7 && dig4==dig6){
            cout<<"The Number is Palindromic Number so Rule01(Digit Sum Parity Rule) is considered to be passed"<<endl;
            s1=1;
            return s1;}
        if(digit=8 && dig1==dig8 && dig2==dig7 && dig3==dig6 && dig4==dig5){
            cout<<"The Number is Palindromic Number so Rule01(Digit Sum Parity Rule) is considered to be passed"<<endl;
            s1=1;
            return s1;}
        if(digit=7 && dig1==dig7 && dig2==dig6 && dig3==dig5){
            cout<<"The Number is Palindromic Number so Rule01(Digit Sum Parity Rule) is considered to be passed"<<endl;
            s1=1;
            return s1;}
        if(digit=6 && dig1==dig6 && dig2==dig5 && dig3==dig4){
            cout<<"The Number is Palindromic Number so Rule01(Digit Sum Parity Rule) is considered to be passed"<<endl;
            s1=1;
            return s1;}
        if(digit=5 && dig1==dig5 && dig2==dig4){
            cout<<"The Number is Palindromic Number so Rule01(Digit Sum Parity Rule) is considered to be passed"<<endl;
            s1=1;
            return s1;}
        if(digit=4 && dig1==dig4 && dig2==dig3){
        cout<<"The Number is Palindromic Number so Rule01(Digit Sum Parity Rule) is considered to be passed"<<endl;
        s1=1;
        return s1;}
        if(digit=3 && dig1==dig3){
        cout<<"The Number is Palindromic Number so Rule01(Digit Sum Parity Rule) is considered to be passed"<<endl;
        s1=1;
        return s1;}
        if(digit=2 && dig1==dig2){
            cout<<"The Number is Palindromic Number so Rule01(Digit Sum Parity Rule) is considered to be passed"<<endl;
            s1=1;
            return s1;}
        }
    int basic(){
    cout<<"Enter the number here: ";
    cin>>orig_num;
    dig1=orig_num%10;
    d=1;
    if(orig_num>=10){num=orig_num/10;
                dig2=num%10;
                d1=1;}
    if(num>=10){num=num/10;
                dig3=num%10;
                d2=1;}
    if(num>=10){num=num/10;
                dig4=num%10;
                 d3=1;}
    if(num>=10){num=num/10;
               dig5=num%10;
                d4=1;}
    if(num>=10){num=num/10;
                dig6=num%10;
                d5=1;}
    if(num>=10){num=num/10;
                dig7=num%10;
            d6=1;}
    if(num>=10){num=num/10;
                dig8=num%10;
                d7=1;}
    if(num>=10){num=num/10;
                dig9=num%10;
                d8=1;}
    if(num>=10){num=num/10;
                dig10=num%10;
                d9=1;}
    digit=d1+d2+d3+d4+d5+d6+d7+d8+d9+d;
    return dig1,dig2,dig3,dig4,dig5,dig6,dig7,dig8,dig9,dig10,digit;}
    void check(){
        if(r2==1 && r3==1 && (r1==1 || s1==1))
        cout<<"The Number You Entered is \"A SPECIAL NUMBER\""<<endl;
        else cout<<"The Number You Entered is \"NOT A SPECIAL NUMBER\""<<endl;
    }
    int main(){
    basic();
    cout<<endl<<"          **Primary Conditions Check** "<<endl<<endl;
    rule1();
    rule2();
    rule3();
    cout<<endl<<"          **Secondary Conditions Check** "<<endl<<endl;
    sec_test();
    cout<<endl;
    check();
    return 0;}
