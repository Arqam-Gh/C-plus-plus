/*
                                                            -ˋˏ ༻𖤓༺ ˎˊ-
                                                               QUESTION

You are given a security device that represents its lock state as an 8-bit binary number.
● Bit 7 (leftmost) represents the first LED.
● Bit 0 (rightmost) represents the last LED.
● Each bit is 1 if that LED is ON, and 0 if it is OFF.
The lock follows strict priority rules to decide the next LED state, but the catch is only the
first matching rule in the sequence is applied and the rest are ignored:
1. Fibonacci Count Rule
○ First, count how many LEDs are ON.
○ If this count happens to be a Fibonacci number (e.g., 0, 1, 2, 3, 5, 8), then
invert all bits of the lock state (1→0, 0→1).

2. Asymmetric Ends Rule
○ If Rule 1 didn’t apply, and the first LED is ON while the last LED is OFF,
then perform a left circular shift of the 8-bit pattern by exactly 3 positions.

3. Dual-End Swap Rule
○ If Rule 1 didn’t apply and Rule 2 also didn’t apply, but both the first and last
LEDs are ON, then swap the first four bits with the last four bits in their
respective positions.

4. Idle Rule
○ If none of the above apply, keep the state as it is.

Important:
● You must process the bits in 8-bit binary form (add leading zeros if needed).
● Only the first satisfied condition applies — once a rule is applied, the others are
skipped.
● Input will be an integer between 0 and 255 inclusive, output the resulting integer after
applying the rule.

                                                    ‧͙⁺˚*･༓☾　SOLUTION　☽༓･*˚⁺‧͙
*/
#include <iostream>
using namespace std;
unsigned short int num , Anum, binary , C , bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7,c1,c2,c3;
int basic(){
    cout<<"Enter Integer: ";
    cin>>num;
    if(num>=0 && num<=255){
    bit0 = (num >> 0) &  1;
    bit1 = (num >> 1) &  1;
    bit2 = (num >> 2) &  1;
    bit3 = (num >> 3) &  1;
    bit4 = (num >> 4) &  1;
    bit5 = (num >> 5) &  1;
    bit6 = (num >> 6) &  1;
    bit7 = (num >> 7) &  1;
    if(bit0 == 1)
    C++;
    if(bit1 == 1)
    C++;
    if(bit2 == 1)
    C++;
    if(bit3 == 1)
    C++;
    if(bit4 == 1)
    C++;
    if(bit5 == 1)
    C++;
    if(bit6 == 1)
    C++;
    if(bit7 == 1)
    C++;
else cout<<"Invalid Input."<<endl;}
    return C,bit0,bit1,bit2,bit3,bit4,bit5,bit6,bit7,num;}
int a1(){
    if((C == 0) || (C == 1) || (C == 2) || (C == 3) || (C == 5) || (C == 8))
    c1=1;}
int t1(){
    if((C == 0) || (C == 1) || (C == 2) || (C == 3) || (C == 5) || (C == 8)){
        bit0=!bit0;
        bit1=!bit1;
        bit2=!bit2;
        bit3=!bit3;
        bit4=!bit4;
        bit5=!bit5;
        bit6=!bit6;
        bit7=!bit7;

        Anum = bit0 + bit1*2 + bit2*4 + bit3*8 + bit4*16 + bit5*32 + bit6*64 + bit7*128;
        cout<<"Rule 01 Applied, Integer: ";
        cout<<Anum<<endl;
    }}
    int a2(){
    if((bit0 == 0) && (bit7 == 1))
    c2=1;}
    int t2(){if((bit0 == 0) && (bit7 == 1)) {
        Anum = bit5 + bit6*2 + bit7*4 + bit0*8 + bit1*16 + bit2*32 + bit3*64 + bit4*128;
        cout<<"Rule 02 Applied, Integer: ";
        cout<<Anum<<endl;}}
    int a3(){
        if((bit0 == 1) && (bit7 == 1))
        c3=1;
    }
    int t3(){ if((bit0 == 1) && (bit7 == 1)){
        Anum = bit4 + bit5*2 + bit6*4 + bit7*8 + bit0*16 + bit1*32 + bit2*64 + bit3*128;
        cout<<"Rule 03 Applied, Integer: ";
        cout<<Anum<<endl;}}
    
    int t4(){ {cout<<"No Change, Integer : ";
    cout<<num<<endl;}
    return 0;
    }
int main(){
    basic();
    a1();
    a2();
    a3();
    if(c1==1){t1();}
     else if(c2==1){t2();}
       else if(c3==1){t3();}
        else {t4();}

}

    