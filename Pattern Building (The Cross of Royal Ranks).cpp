/*

Scenario: The King designs a royal banner based on the rank of his Knights. The banner is a
square N x N grid. The center is marked '0'. The numbers increase outwards, representing the
distance from the center.
Write a C++ program using FOR loops only that prompts the user for an odd number N and
prints an N x N numerical pattern where each cell's value is the distance (Manhattan distance)
from the exact center cell.
*/
#include <iostream>
using namespace std;
int main(){
    int num,f1=1,l;
    cout<<"Enter Number (Number should be odd): ";
    cin>>num;
    l=num;
    int m=(num+1)/2;
    int v=m-l+1;
    if(num%2==0){
    cout<<"Number Entered is not an odd number."<<endl;    
    f1=0;
    }
    if(f1!=0){
    for (int i=1;i<=num;i++){
        for (int j=1;j<=num;j++){
        if(i<=j && i<=(num-j+1))
          {l=i;}
        else if(j<=i && j<=(num-i+1))
          {l=j;}
        else if(i>=j && i>=(num-j+1))
         {l=num-i+1;}
        else {l=num-j+1;}
        cout<<"  "<<v;}
    cout << endl;
    }}
    return 0;
}

