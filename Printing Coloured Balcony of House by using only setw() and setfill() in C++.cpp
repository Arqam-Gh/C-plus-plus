
/* 
                                              ""**Drawing Ali’s Balcony**""
Q3: Drawing Ali’s Balcony.

In the early morning, Ali stepped onto his balcony with a cup of tea in his hand. The railing
was his favorite part, it had a repeating diamond-and-bar pattern, almost like a repeating
algorithm.
Ali thought, “If loops can repeat code, they can also repeat this pattern!” But for this task, he
must space the railing design perfectly using setw() and setfill().

Your task is to:
● Draw the balcony floor and railing using only formatted spacing (setw() + setfill()).
● Create a repeating pattern for the railing.
● Using colors is an option You can make it from B&W to W&B.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout<<"\033[1;36m"<<setfill('_')<<setw(50)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(48)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(48)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(12)<<""<<setfill(' ')<<setw(1)<<""<<setfill('_')<<setw(22)<<""<<setfill(' ')<<setw(1)<<""<<setfill(' ')<<setw(12)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(13)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(9)<<""<<setfill('|')<<setw(2)<<""<<setfill(' ')<<setw(9)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(13)<<""<<setfill(' ')<<setw(0)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(13)<<""<<setfill('|')<<setw(1)<<""<<setfill('-')<<setw(9)<<""<<setfill('|')<<setw(2)<<""<<setfill('-')<<setw(9)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(13)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(13)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(9)<<""<<setfill('|')<<setw(2)<<""<<setfill(' ')<<setw(9)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(13)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(13)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(9)<<""<<setfill('|')<<setw(2)<<""<<setfill(' ')<<setw(9)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(13)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(13)<<""<<setfill('|')<<setw(1)<<""<<setfill('-')<<setw(9)<<""<<setfill('|')<<setw(2)<<""<<setfill('-')<<setw(9)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(13)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(13)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(8)<<""<<setfill('O')<<setw(1)<<""<<setfill('|')<<setw(2)<<""<<setfill('O')<<setw(1)<<""<<setfill(' ')<<setw(6)<<""<<setfill(' ')<<setw(2)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(13)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill('_')<<setw(13)<<""<<setfill('|')<<setw(1)<<""<<setfill('_')<<setw(9)<<""<<setfill('|')<<setw(2)<<""<<setfill('_')<<setw(9)<<""<<setfill('|')<<setw(1)<<""<<setfill('_')<<setw(13)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(7)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(10)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(10)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(10)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(7)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(7)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(10)<<""<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(10)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(10)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(7)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(7)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(10)<<""<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(10)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(10)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(7)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(7)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(10)<<""<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(10)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(10)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(7)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(7)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(10)<<""<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(10)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(10)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(7)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill('_')<<setw(7)<<""<<setfill('|')<<setw(1)<<""<<setfill('_')<<setw(10)<<""<<""<<setfill('|')<<setw(1)<<""<<setfill('_')<<setw(10)<<""<<setfill('|')<<setw(1)<<""<<setfill('_')<<setw(10)<<""<<setfill('|')<<setw(1)<<""<<setfill('_')<<setw(7)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(48)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill('|')<<setw(1)<<""<<setfill('_')<<setw(48)<<""<<setfill('|')<<setw(1)<<""<<endl;
    cout<<setfill(' ')<<setw(2)<<""<<setfill('|')<<setw(1)<<""<<setfill('_')<<setw(44)<<""<<setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(2)<<"\033[0m"<<endl;
    return 0;
}