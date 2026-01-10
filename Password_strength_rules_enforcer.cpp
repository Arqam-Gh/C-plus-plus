/*
                                                            -ˋˏ ༻𖤓༺ ˎˊ-
                                                               QUESTION

You are tasked with designing the final layer of a multi-stage security system for a
high-profile client. At this stage, the system will prompt the user to enter a “secure access
token” which is essentially a password but with very specific structural rules to ensure it
cannot be guessed or brute-forced easily.
The “secure access token” must satisfy all of the following:
1. The token length must be at least 6 characters (anything shorter will be instantly
rejected without further checks).
2. It must include both extremes of the alphabet:
○ At least one uppercase English letter (A–Z)
○ At least one lowercase English letter (a–z)
3. It must contain a digit (0–9) somewhere in the sequence (position does not matter).
The system should:
● Prompt the user to enter their secure access token.
● Apply the checks in the exact order above if any check fails, reject immediately
without performing the remaining ones.
● If all checks pass, display an “Access Granted” message; otherwise, give a precise
reason for rejection (not just “invalid”).
Hint: Consider the possibility that the user might enter characters outside the usual
alphanumeric range, or might satisfy one condition but fail others. Your logic must handle
these cases cleanly.

                                                    ‧͙⁺˚*･༓☾　SOLUTION　☽༓･*˚⁺‧͙
*/
#include <iostream>
using namespace std;
int l;
char token1,token2,token3,token4,token5,token6;
void basic(){
    cout<<"Enter The Secure Access Token here: ";
    cin>>token1>>token2>>token3>>token4>>token5>>token6;
}
int c_1(){
    if(((token1>='a' && token1<='z') || (token1>='A' && token1<='Z') || (token1>='0' && token1<='9')) && ((token2>='a' && token2<='z') || (token2>='A' && token2<='Z') || (token2>='0' && token2<='9')) && ((token3>='a' && token3<='z') || (token3>='A' && token3<='Z') || (token3>='0' && token3<='9')) && ((token4>='a' && token4<='z') || (token4>='A' && token4<='Z') || (token4>='0' && token4<='9')) && ((token5>='a' && token5<='z') || (token5>='A' && token5<='Z') || (token5>='0' && token5<='9')) && ((token6>='a' && token6<='z') || (token6>='A' && token6<='Z') || (token6>='0' && token6<='9'))){
    if(token1) l++;
    if(token2) l++;
    if(token3) l++;
    if(token4) l++;
    if(token5) l++;
    if(token6) l++;
    if(l==6){
        if(((token1>='a' && token1<='z') || (token2>='a' && token2<='z') || (token3>='a' && token3<='z') || (token4>='a' && token4<='z') || (token5>='a' && token5<='z') || (token6>='a' && token6<='z'))&&((token1>='A' && token1<='Z') || (token2>='A' && token2<='Z') || (token3>='A' && token3<='Z') || (token4>='A' && token4<='Z') || (token5>='A' && token5<='Z') || (token6>='A' && token6<='Z'))){
            if((token1>='0' && token1<='9') || (token2>='0' && token2<='9') || (token3>='0' && token3<='9') || (token4>='0' && token4<='9') || (token5>='0' && token5<='9') || (token6>='0' && token6<='9')){
                cout<<"ACCESS GRANTED."<<endl;
            }
            else cout<<"Rejected: Token must have at least one digit."<<endl;
        }
        else cout<<"Rejected: Token must have at least one uppercase and at least one lowercase alphabet."<<endl;

    }
    if(l<6) {cout<<"Rejected: Token must be at least 6 characters long."<<endl;}
    return 0;
    }
    else cout<<"Rejected: Token has some value other than Digit or Alphabet."<<endl;
}
int main(){
    basic();
    c_1();
    return 0;
}
