/*
                                                            -ˋˏ ༻𖤓༺ ˎˊ-
                                                               QUESTION

In a prototype encryption-enabled arithmetic device, every calculation between two
integers is performed in logic mode instead of normal math mode. The device only accepts
two unsigned integers A and B, each restricted to a 4-bit value (0 to 15).
Its decision engine executes a series of non-linear steps to determine a result code, and then
uses that result to classify the signal as "HIGH" or "LOW".
Your task is to simulate the exact behavior of this decision engine, strictly following the
operational sequence below.
No iteration (loops), arrays, or built-in bit utilities are allowed.
Only if-else statements, bitwise operators (&, |, ^, ~, <<, >>), and the conditional
(ternary) operator may be used.

Operational Rules
1. Symmetric Equality Check
○ If the bitwise AND of A and B is exactly equal to the bitwise XOR of A and
B,
the result code is assigned the value of the bitwise NOT of A,
but restricted to 4 bits (mask appropriately).
2. Full Spread Match with Parity Agreement
○ Else, if the bitwise OR of A and B produces the maximum 4-bit value
and the least significant bit (LSB) of A is identical to the LSB of B,
the result code is assigned the bitwise OR of:
■ A left-shifted by 1 bit
■ B right-shifted by 1 bit

3. Offset Dominance Rule
○ Else, if the result of (A XOR 0b1010) is greater than the result of (B AND
0b1100),
the result code is assigned the bitwise XOR of A and B.

4. Fallback Differential Rule
○ Otherwise, the result code is assigned:
■ (A + B) masked to 4 bits if A is greater than B,
■ Otherwise (A - B) masked to 4 bits.
(This choice must be made using the conditional operator.)

After computing the result code:

● If the most significant bit (MSB) of the result code is 1, output "HIGH".
● Otherwise, output "LOW".

                                                    ‧͙⁺˚*･༓☾　SOLUTION　☽༓･*˚⁺‧͙
*/
#include <iostream>
using namespace std;
unsigned int A,B;
unsigned int res,r1,r2,r3;
int basic(){
    cout<<"Enter the value of A here: ";
    cin>>A;
    cout<<"Enter the value of B here: ";
    cin>>B;
    return A,B;

}
int rr1(){if((A&B)==(A^B)){
        r1=1;}
        return r1;}
int r_1(){
    if((A&B)==(A^B)){
        res=~A;
        res=res&15;
        return res;
    }
}
int rr2(){if(((A|B)==15))
        r2=1;
        return r2;}
int r_2(){
    if(((A|B)==15)){
        if(((A&1)==(B&1))){
            res=((A<<1)|(B>>1));}
            res=res&15;
            return res;
    }
}
int rr3(){if(((A|B)==15))
        r3=1;
        return r3;}
int r_3(){
    if((A ^ 0b1010)>(B & 0b1100)){
        res=A^B;
        return res;
    }
}
int r_4(){
    if(A>B){
    res=A+B;
    res=res<<28;
    res=res>>28;}
    else {res=A-B;
    res=res&15;}
    return res;
}
int check(){
    if(((res>>3) & 1)==1){
        cout<<"\"High\"";
    }
    else cout<<"\"Low\"";
}
int main(){
    basic();
    rr1();
    rr2();
    rr3();
    if(15>=A){
        if(15>=B){
            if(r1==1){r_1();}
            else if(r2==1){r_2();}
            else if(r3==1){r_3();}
            else{r_4();}
}}
check();
    return 0;
}