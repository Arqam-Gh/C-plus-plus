/*
The Tribonacci Scroll of Power
Scenario: A brave young Knight seeks the legendary Tribonacci Scroll of Power. To unlock
its secrets, they must input a magic number. The Scroll validates the number against the
Tribonacci Sequence (starting 0, 0, 1, 1, 2, 4, 7...), sums all the sequence numbers up to the
input, and projects a right-triangle pattern based on the sum's digits.
Write a C++ program that prompts the user for a number.
1. Verify if the number is a Tribonacci number.
2. If valid, calculate the sum of all Tribonacci numbers up to the input, yielding a large integer S.
3. Display a right-aligned, right-triangle pattern where each row is the sequence of digits of S,
truncated to the row length.
Note: DO IT USING WHILE LOOP ONLY.
*/
#include <iostream>
using namespace std;

int main() {
    int num,count=5,sum=1,c1=0,c2=0,c3=1,nxt=0;
    cout<<"Enter the number here: ";
    cin >> num;
    if (num==0||num==1){
        cout<<"Entered number belongs to tribonacci sequence, but is from first three numbers, so no pattern can generated."<<endl;
    }else{
        while(nxt<num){ 
            nxt=c1+c2+c3;
            c1=c2;
            c2=c3;
            c3=nxt;
        }
        if(nxt==num) {
            cout<<"Number belong to tribonacci sequence"<<endl;
        } else {
            cout<<"Number not belong to tribonacci sequence"<<endl;
        }
    }
    if(nxt==num){
        int c1=0,c2=0,c3=1,nxt=0;
        cout<<"Number : ";
    while(1){
        nxt=c1+c2+c3;
        if(nxt>num){
        cout<<c1<<" ";
        cout<<c2<<" ";
        cout<<c3;
        break;}
        cout<<c1<<" ";
        c1=c2;
        c2=c3;
        c3=nxt;
        sum=sum+nxt;
        count++;
    }
    cout<<endl;
    cout<<"Accumulated Sum: "<<sum;
    int a1=1,a=1,a3=1;
    int co1=count-1;
    while(a1<count){
    a=1;
    while(a<co1){
    if(sum<10) cout<<" ";
    if(sum>=10) cout<<"  ";
    ++a;
    }
    a3=1;
    while(a3<a1){
    cout<<sum;
    ++a3;
    }
    a1++;
    --co1;
    cout<<endl;
    }
    }
    return 0;
}
