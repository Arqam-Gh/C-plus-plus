/*

Scenario: A jewelry designer envisions a necklace featuring two intersecting diamond rings.
The design must be generated using ASCII characters '+', '#', and '.' and must scale with an
input size N.
Write a C++ program to print a complex pattern of two intersecting diamond rings using '+',
'#', and '.' based on an input size N.

*/
#include <iostream>
using namespace std;
int main(){
int n,a=1,b=1,c=1,d=1,e=1;

cout<<"Enter the number here: ";
cin>>n;
int mdot=(2*n)-5;
int sdot=(n-2);
int mdot1=(2*n)-5;
for(int i=1;i<=(4*n-4);++i){
//upper side of pyramid 01.
if(i<=n){
for(int j=1;j<=(n-i);++j){
cout<<" ";}
if(i==1) cout<<"#"<<endl;
else {cout<<"#";
for(int k=1;k<=a && i<=n;++k){cout<<".";}
a=a+2;
cout<<"#";
cout<<endl;
}}
//lower side of pyramid 01.
if(i>n && i<=(n+n-2)){
for(int k=1;k<=c && i<=(n+n-2);++k){cout<<".";}
cout<<"#";
for(int j=1;j<=mdot;++j){cout<<".";}
cout<<"#";
for(int k=1;k<=c && i<=(n+n-2);++k){cout<<".";}
b=b+2;
++c;
mdot=mdot-2;
cout<<endl;}
//middle row
if((2*n)-2==i){
cout<<"+";
for(int k1=1;k1<=(2*n-3)/2;k1++) cout<<".";
cout<<"#";
for(int k1=1;k1<=(2*n-3)/2;k1++) cout<<".";
cout<<"+";
cout<<endl;
}
if(i>=(2*n)){
//upper side of pyramid 01.
if(i<=(2*n)-2+n){
for(int j=1;j<=sdot;++j){cout<<".";}
cout<<"#";
for(int k=1;k<=d;++k){cout<<".";}
d=d+2;
cout<<"#";
for(int j=1;j<=sdot;++j){cout<<".";}
cout<<endl;
sdot--;
}
//lower side of pyramid 01.
if(i>=(2*n)-2+n){
for(int k=1;k<=e;++k){cout<<" ";}
cout<<"#";
for(int j=1;j<=mdot1;++j){cout<<".";}
if(i!=(4*n-4))cout<<"#";
++e;
mdot=mdot-2;
mdot1=mdot1-2;
cout<<endl;}}}
}
