/*
                                                            -ˋˏ ༻𖤓༺ ˎˊ-
                                                               QUESTION

An integer N is rumored to be “trapped” inside a binary paradox if, and only if, the
following three cryptic laws are fulfilled, breaking even a single law will free it from the trap.
Law 1: The Gatekeepers
● The binary representation of N, when written without leading zeros, must begin and
terminate with the digit 1.
● In other words, the most significant bit (MSB) and the least significant bit (LSB)
are both set.
Tip: “Begin” refers to the leftmost bit; “terminate” refers to the rightmost bit.
Law 2: The Prime Balance
● Let C be the count of all 1 bits in this binary form.
● The number C must itself be a prime greater than 2 (i.e., C = 3, 5, 7, 11...).
● Prime checking must be done algorithmically, hardcoding is forbidden.
Law 3: The Mirror Test
● Reverse the sequence of bits in the binary form.
● If the reversed sequence matches the original sequence exactly, N is immediately
declared free (not trapped).
● Only if the reversed and original sequences differ is the law satisfied.
Mandatory Restrictions:
● Checking MSB/LSB must be done strictly via bitwise operations, no string-based
solutions, no array indexing.
● The count of 1 bits must be determined manually using shifting/masking logic,
built-in bit-count functions are banned.
● Palindrome checking must be performed without converting the binary number to a
string.

                                                    ‧͙⁺˚*･༓☾　SOLUTION　☽༓･*˚⁺‧͙
*/

#include <iostream>
using namespace std;
int num ,l1 ,l2 ,l3 ,C ,b0 ,b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18, b19, b20, b21, b22, b23, b24, b25, b26, b27, b28, b29, b30, b31, r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31, ch;
int basic(){
    cout<<"Enter the number here: ";
    cin>>num;
    return num;
}
int law_1(){
    if((num&1)==1)
        {cout<<"The Number has Fulfilled LAW 01(The Gatekeepers). "<<endl;
        l1=1;}
    else cout<<"The Number has Broked LAW 01(The Gatekeepers). "<<endl;
    return l1;
}
int law_2(){
    C += (num >> 0)&1;
    C += (num >> 1)&1;
    C += (num >> 2)&1;
    C += (num >> 3)&1;
    C += (num >> 4)&1;
    C += (num >> 5)&1;
    C += (num >> 6)&1;
    C += (num >> 7)&1;
    C += (num >> 8)&1;
    C += (num >> 9)&1;
    C += (num >> 10)&1;
    C += (num >> 11)&1;
    C += (num >> 12)&1;
    C += (num >> 13)&1;
    C += (num >> 14)&1;
    C += (num >> 15)&1;
    C += (num >> 16)&1;
    C += (num >> 17)&1;
    C += (num >> 18)&1;
    C += (num >> 19)&1;
    C += (num >> 20)&1;
    C += (num >> 21)&1;
    C += (num >> 22)&1;
    C += (num >> 23)&1;
    C += (num >> 24)&1;
    C += (num >> 25)&1;
    C += (num >> 26)&1;
    C += (num >> 27)&1;
    C += (num >> 28)&1;
    C += (num >> 29)&1;
    C += (num >> 30)&1;
    C += (num >> 31)&1;
    if(C<=2){cout<<"The Number has Broked LAW 02(The Prime Balance). "<<endl;}
    else if (C ==3 || C==5){cout<<"The Number has Fulfilled LAW 02(The Prime Balance). "<<endl;
                            l2=1;}
        else if(C%2!=0 && C%3!=0 && C%5!=0)
        {cout<<"The Number has Fulfilled LAW 02(The Prime Balance). "<<endl;
        l2=1;}
            else cout<<"The Number has Broked LAW 02(The Prime Balance). "<<endl;
}
int law_3(){
b0  = (num >> 0) &  1;
b1  = (num >> 1) &  1;
b2  = (num >> 2) &  1;
b3 =  (num >> 3) &  1;
b4 =  (num >> 4) &  1;
b5 =  (num >> 5) &  1;
b6 =  (num >> 6) &  1;
b7 =  (num >> 7) &  1;
b8 =  (num >> 8) &  1;
b9 =  (num >> 9) &  1;
b10 = (num >> 10) & 1;
b11 = (num >> 11) & 1;
b12 = (num >> 12) & 1;
b13 = (num >> 13) & 1;
b14 = (num >> 14) & 1;
b15 = (num >> 15) & 1;
b16 = (num >> 16) & 1;
b17 = (num >> 17) & 1;
b18 = (num >> 18) & 1;
b19 = (num >> 19) & 1;
b20 = (num >> 20) & 1;
b21 = (num >> 21) & 1;
b22 = (num >> 22) & 1;
b23 = (num >> 23) & 1;
b24 = (num >> 24) & 1;
b25 = (num >> 25) & 1;
b26 = (num >> 26) & 1;
b27 = (num >> 27) & 1;
b28 = (num >> 28) & 1;
b29 = (num >> 29) & 1;
b30 = (num >> 30) & 1;
b31 = (num >> 31) & 1;
r0  = b31;
r1  = b30;
r2  = b29;
r3  = b28;
r4  = b27;
r5  = b26;
r6  = b25;
r7  = b24;
r8  = b23;
r9 = b22;
r10 = b21;
r11 = b20;
r12 = b19;
r13 = b18;
r14 = b17;
r15 = b16;
r16 = b15;
r17 = b14;
r18 = b13;
r19 = b12;
r20 = b11;
r21 = b10;
r22 = b9;
r23 = b8;
r24 = b7;
r25 = b6;
r26 = b5;
r27 = b4;
r28 = b3;
r29 = b2;
r30 = b1;
r31 = b0;
if (r0==b0 && r1==b1 && r2==b2 && r3==b3 && r4==b4 && r5==b5 && r6==b6 && r7==b7 && r8==b8 &&  r9==b9 && r10==b10 && r11==b11 && r12==b12 && r13==b13 && r14==b14 && r15==b15 && r16==b16 &&  r17==b17 && r18==b18 && r19==b19 && r20==b20 && r21==b21 && r22==b22 && r23==b23 && r24==b24 && r25==b25 && r26==b26 && r27==b27 && r28==b28 && r29==b29 && r30==b30 && r31==b31){
    cout<<"The Number has Broked Law 03(The Mirror Test) "<<endl;}
else {cout<<"The Number has Fulfilled LAW 03(The Mirror Test) "<<endl;
        l3=1;}
}
int check(){
    ch=l1+l2+l3;
    if(ch==3){cout<<"The Number is TRAPPED inside a binary paradox as the three laws are fulfilled by the Number."<<endl;}
    else cout<<"The Number is FREE OF THE TRAPS inside the binary paradox as not all the laws are fulfilled by the Number."<<endl;
}
int main(){
    basic();
    law_1();
    law_2();
    law_3();
    check();
    return 0;
}
