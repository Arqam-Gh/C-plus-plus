/*
                                                            -ˋˏ ༻𖤓༺ ˎˊ-
                                                               QUESTION

Attempt the following by writing C++ code and do not use conditional operators determine:
1. Whether the character entered through the keyboard is a lower-case alphabet or not.
2. Whether a character entered through the keyboard is a special symbol or not.
3. Write a program without using conditional operators to determine whether a year
entered through the keyboard is a leap year or not.

                                                    ‧͙⁺˚*･༓☾　SOLUTION　☽༓･*˚⁺‧͙
*/
#include <iostream>
using namespace std;
int result1,result2,result3,year;
char lalpha,salpha;
int t_1(){
    cout<<"**Lower Case Alphabet Check."<<endl;
    cout<<"Enter the character here: ";
    cin>>lalpha;
    result1=(lalpha>='a') && (lalpha<='z');
    cout<<"Lower Case Alphabet (1->YES , 0->NO): "<<result1<<endl<<endl;
}
int t_2(){
    cout<<"**Special Symbol check."<<endl;
    cout<<"Enter the character here: ";
    cin>>salpha;
    result2=!(((salpha>='0') && (salpha<='9'))||((salpha>='a') && (salpha<='z'))||((salpha>='A') && (salpha<='Z')));
    cout<<"Special Symbol (1->YES , 0->NO): "<<result2<<endl<<endl;
}
int t_3(){
    cout<<"**Leap year test."<<endl;
    cout<<"Enter the YEAR here: ";
    cin>>year;
    result3=(year%400==0)||((year%4==0)&&(year%100!=0));
    cout<<"Leap Year (1->YES , 0->NO): "<<result3<<endl<<endl;
}
int main(){
    t_1();
    t_2();
    t_3();
    return 0;
}