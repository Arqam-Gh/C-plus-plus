/*

Scenario: In a kinder version of the labyrinth, the wizard allows two people to survive. You
need to find the original 1-based positions of the last two remaining adventurers.
Write a C++ program to find the original 1-based positions of the last two people standing in
the Josephus Problem, given N (people) and K (step). Implement the program using an
iterative approach.
Note: Make it use WHILE LOOP only.

*/
#include<iostream>
using namespace std;
int main(){
int N,k;
cout<<"Enter number of people (N): ";
cin>>N;
cout<<"Enter step size (k): ";
cin>>k;
long long bm=(1<<N)-1;
int alive=N;
int pos=0;
int second_last=0;
int last=0;
while(alive>0){
int cnt=0;
while(cnt<k){
if(bm&(1<<pos)){
cnt++;
}
if(cnt<k){
pos=(pos+1)%N;
}
}
bm&=~(1<<pos);
if(alive==2)second_last=pos+1;
if(alive==1)last=pos+1;
alive--;
if(alive>0){
pos=(pos+1)%N;
while(!(bm&(1<<pos))){
pos=(pos+1)%N;
}
}
}
cout<<"Second last: "<<second_last<<endl;
cout<<"Last: "<<last<<endl;
return 0;
}
