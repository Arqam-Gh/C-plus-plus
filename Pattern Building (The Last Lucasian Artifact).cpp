/*

Scenario: Once upon a time, a scholarly King discovered an ancient scroll. The scroll
described a secret treasure hidden behind a magical door that only unlocks if the King can
prove a number is part of the Lucas Sequence (starting 2, 1, 3, 4, 7...) and then use the
accumulated sequence values to etch a diamond pattern on the door. You are the King's royal
programmer.
Write a C++ program that prompts the user for a number.
1. Verify if the number belongs to the Lucas Sequence.
2. If it does, accumulate all Lucas numbers up to the input into a single integer.
3. Utilize this single accumulated number and the modulo operator to display a
symmetrical diamond pattern.
Note: DO IT USING WHILE LOOP ONLY.

*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i=2,j=1,ctr=2,coutra,num,result,Acc_num=2,non;
    cout<<"Enter the number here: ";
    cin>>num;
    //Lucas Testing and Accumulation.
    while(i<num && j<num){
        result=i+j;
        ctr++;
        if(num==result)cout<<num<<" is in Lucas Series"<<endl;
        if(i!=2){
            if(i<10)Acc_num=(Acc_num*10+i);
                if(10<=i && i<100){
                    Acc_num=(Acc_num*100+i);
                    ++ctr;}
                if(100<=i && i<1000){
                    Acc_num=(Acc_num*1000+i);
                    ++ctr;
                    ++ctr;}
        }
        if(result==num){
                if(j<10)Acc_num=(Acc_num*10+j);
                if(10<=j && j<100){
                    Acc_num=(Acc_num*100+j);
                    ++ctr;}
                if(100<=j && j<1000){
                    Acc_num=(Acc_num*1000+j);
                    ++ctr;
                    ++ctr;}
                if(num<10)Acc_num=(Acc_num*10+result);
                if(10<=num && num<100){
                    Acc_num=(Acc_num*100+result);
                    ++ctr;}
                if(100<=num && num<1000){
                    Acc_num=(Acc_num*1000+result);
                    ++ctr;
                    ++ctr;
                }
                }
            i=j;
            j=result;
        }
        cout<<"Number is: "<<Acc_num<<endl;
        non=Acc_num;
    //Diamond shape formation.
    long int resultant_digit,a=1,b=1,c=1,d=1,z=1;
    while(a<=((2*ctr)-1)){
        b=1,c=1;
        int coutr=a;
        while(b<=(ctr-a) || ((a>ctr) &&(b<=(a-ctr)))){
            cout<<" ";
            ++b;
            coutra=(2*ctr) - a;
        }
        while((a<=ctr && c<=(2*a)-1) || (a>ctr && c<(4*ctr-2*a))){
            Acc_num=non;
            if(a<=((2*ctr-1)/2)+1){int base=10,i=1,exp=coutr;
            while(i<=coutr){
            resultant_digit=Acc_num % base;
                Acc_num/=10;
                ++i;
            }
            if(c< (((2*a-1)/2)+1))--coutr;
            if(c>=(((2*a-1)/2)+1)) ++coutr;
            cout<<resultant_digit;}
            if(a>((2*ctr-1)/2)+1){
                int base=10,i=1;
            while(i<=coutra){
            resultant_digit=Acc_num % base;
                Acc_num/=10;
                ++i;
            }
            int Mid_value_downrow=(2*ctr) - a;
            if(c<Mid_value_downrow) --coutra;
            if(c>=Mid_value_downrow) ++coutra;
            cout<<resultant_digit;
        }
        ++c;
    }
        cout<<endl;
        ++a;
    }
    }
