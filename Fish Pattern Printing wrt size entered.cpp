/*

Scenario: In a remote oceanic kingdom, the royal constellations depict a majestic,
wide-bodied fish with a crystalline tail . The Royal Astronomer requires a program that can
project this constellation onto the night sky at any size N, using only the flickering light of a
single star (*) and the darkness of space ( ). You, the Court Programmer, must design this
visualizer, rigorously adhering to the ancient programming constraints.
Write a single C++ program that prompts the user for a size N and generates the symmetrical
Fish Pattern consisting of a diamond-shaped body and a corresponding triangular tail.
Constraints (MANDATORY):
1. The primary mechanism for printing the pattern must be loops (nested for or while
loops).
2. No Arrays or Functions are allowed.
3. No direct string output of the pattern is allowed. You must construct the pattern
character-by-character within the loops.
4. The output must scale proportionally based on the user-provided integer N.

*/
#include<iostream>
using namespace std;
int main(){
    int n,b;
    cout<<"Enter size here: ";
    cin>>n;
    cout<<endl<<endl;
    float wid=n/7.6;
    int gap=n/2;
    int spc=n/1.53;
    int dot=n/50;
    int eRow=(n*0.23)/3;
    int eCol=n/9-2;
    int r=1;
    while(r<=(b=n*0.23)/2){
        int x=1;
        while(x<=gap-1){
            cout<<" ";
            x++;
        }
        int y=1;
        while(y<=wid){
            if(r==eRow && (y>=eCol && y<=eCol+4))
                cout<<" ";
            else if(r==eRow+1 && (y>=eCol+3 && y<=eCol+7))
                cout<<" ";
            else if(r==eRow+2 && (y>=eCol+6 && y<=eCol+10))
                cout<<" ";
            else
                cout<<"*";
            y++;
        }
        int z=1;
        while(z<=spc){
            cout<<" ";
            z++;
        }
        int w=9;
        while(w<=dot){
            cout<<"*";
            w++;
        }
        cout<<endl;
        spc-=6;
        dot+=3;
        gap-=3;
        wid+=6;
        r++;
    }
    int x=1;
    while(x<=(n/3)){
        cout<<" ";
        x++;
    }
    int y=1;
    while(y<=(n/1.135)){
        cout<<"*";
        y++;
    }
    cout<<endl;
    r=((n*0.23)/2);
    while(r>=1){
        gap+=3;
        wid-=6;
        spc+=6;
        dot-=3;
        x=1;
        while(x<=gap-1){
            cout<<" ";
            x++;
        }
        y=1;
        while(y<=wid){
            cout<<"*";
            y++;
        }
        int z=1;
        while(z<=spc){
            cout<<" ";
            z++;
        }
        int w=9;
        while(w<=dot){
            cout<<"*";
            w++;
        }
        cout<<endl;
        r--;
    }
    cout<<endl<<endl;
    return 0;
}
