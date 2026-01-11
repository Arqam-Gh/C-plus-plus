/*

Scenario: The Sphinx challenges adventurers with a 4-digit secret code, using only digits
1-6. Adventurers get 5 attempts. After each guess, the Sphinx only reveals the number of
'black pegs' (correct digit, correct position) and 'white pegs' (correct digit, wrong position).
Implement a simplified C++ Mastermind game:
1. The program generates a secret 4-digit code (digits 1-6, repetitions allowed).
2. Player gets 5 guesses.
3. After each guess, use loops to calculate and report the number of 'Black Pegs' and
'White Pegs'.
4. The game ends on a correct guess or after 5 turns.
Note: Arrays or Functions are not allowed.
Question no 04 : The Final Two Companions 10 Marks
Scenario: In a kinder version of the labyrinth, the wizard allows two people to survive. You
need to find the original 1-based positions of the last two remaining adventurers.
Write a C++ program to find the original 1-based positions of the last two people standing in
the Josephus Problem, given N (people) and K (step). Implement the program using an
iterative approach.
Note: Make it use WHILE LOOP only.

*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
int c1,c2,c3,c4,t,exact;
    srand(time(0));
    c1=(rand()%6)+1;
    c2=(rand()%6)+1;
    c3=(rand()%6)+1;
    c4=(rand()%6)+1;
    cout << "Sphinx chosen a secret code. You have only 5 attempts to solve it"<<endl;
    t=1;
    while(t<=5){
        cout<<"Enter Here: ";
        int p1,p2,p3,p4;
        cin >>p1>>p2>>p3>>p4;
        int exact=0,par=0;
        int C1=0,C2=0,C3=0,C4=0;
        int G1=0,G2=0,G3=0,G4=0;
        if(p1==c1){
        exact++;
        C1=1;
        G1=1;}
        if(p1==c2){exact++;
        C2=1;
        G2=1;}
        if(p3==c3){exact++;
        C3=1;
        G3=1;}
        if(p4==c4){
        exact++;
        C4=1;
        G4=1;}
        if(!G1) {
            if(!C1 && p1==c2){
            par++;
            C2=1;}
            else if(!C3 && p1==c3){
            par++;
            C3=1;}
            else if(!C4 && p1==c4){
            par++;
            C4=1;}
        }
        if(!G2){
            if(!C1 && p2==c1){
            par++;
            C1=1;}
            else if(!C3 && p2==c3){
            par++;
            C3 = 1;}
            else if(!C4 && p2==c4){
            par++;
            C4=1;}
        }
        if (!G3){
            if(!C1 && p3==c1){
            par++;
            C1=1;}
            else if(!C2 && p3==c2){
            par++;
            C2=1;}
            else if(!C4 && p3==c4){
            par++;
            C4=1;}
        }
        if (!G4) {
            if (!C1 && p4==c1){
            par++;
            C1=1;}
            else if (!C2 && p4==c2){
            par++;
            C2=1;}
            else if (!C3 && p4==c3){
            par++;
            C3=1;}
            }
        cout<<"Matched Black:"<<exact<<endl;
        cout<<"Matched White:"<<par<<endl;
        if(exact==4){
            cout<<"You Solved Sphinx Code"<<endl;
            break;}
        if(t==5) {
            cout<<"You Failed."<<endl;
            cout<<"Game End"<<endl;}
        t++;}
    return 0;
}

