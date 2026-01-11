/*

Scenario: The legendary Chronomancer's Observatory is protected by a magical lattice that
projects a complex, scaled pattern onto the ground. This pattern, known as the "Hexagonal
Key", combines a rigid, detailed inner frame with an outer hexagonal geometry that indicates
its size. The pattern must be generated precisely based on a single size input, N.
Write a single C++ program that prompts the user for a size N (e.g., 5, which corresponds to
the example image) and generates the symmetrical, multi-section Hexagonal Observatory
Frame pattern.

*/
#include <iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter the number here: ";
	cin>>n;
	int n1=n;
    int n2=n;
	int val=((n*10)+1); //for elements in a row.
    int val1=(val-8)/n;
    int val4=val1;
    int size=val-6;
    if(n%2!=0)val1=(n/2+1)*val1;
    else val1=(n/2)*val1;
    double b=0;
    int k=2;
    int val2=5;
    int size1=(size/2)-8;
	//Building the roof.
    for(int c1=1;c1<=n;c1++){
        if(c1==1){
        for(int c2=1;c2<=size/2;c2++){
            cout<<" ";
            }
        cout<<"/"<<c1<<"\\";
        }
        if(c1!=1 && c1!=n){
        for(int c2=1;c2<=size1+2;c2++){
            cout<<" ";
            }
        cout<<"/"<<c1;
        for(int c2=1;c2<=val2;c2++){
            cout<<" ";
            }
            cout<<c1<<"\\";
            size1=size1-4;
        }
        if(c1==n){
            for(int c2=1;c2<=4;c2++){
                cout<<" ";}
            cout<<"/"<<c1;
            for(int c2=1;c2<=size-6;c2++){
                cout<<" ";}
                cout<<c1<<"\\";
            }
            
            val2=val2+8;
            cout<<endl;
        }                                                               
    //Building the Body
for(int c1=1;c1<=(n+n/2 +1);c1++){ //n+n/2 is the num of rows and c1 is row number.
     //1st row
    if(c1==1){
    cout<<"|"<<"*"<<"  ";
    for(int c4=1;c4<=(val-8);c4++){
    cout<<"^";
    }
    cout<<"  "<<"*"<<"|";
    }
    //2nd to n-1th  row
    //2nd row
    if(c1==2){
        cout<<"|"<<"*"<<" <"<<"  ";
    for(int c4=1;c4<=(n*4)-4;c4++){
    cout<<"*";
    }
    for(int c4=1;c4<=2*n-3;c4++){
    cout<<" ";
    }
    for(int c4=1;c4<=(n*4)-4;c4++){
    cout<<"*";
    }
    cout<<"  "<<"> "<<"*"<<"|";
    }
    //next rows.
    if(c1!=1 && c1!=2 && c1<(n/2 + 2)){
    for(int c1=1;c1<=n/2;++c1){
        cout<<"|"<<"*"<<" <"<<"  *";
        for(int c4=1;c4<=(n*4)-6;c4++){
            cout<<" ";
        }
        cout<<"*";
        for(int c4=1;c4<=2*n-3;c4++){
        cout<<" ";
        }
        cout<<"*";
        for(int c4=1;c4<=(n*4)-5;c4++){
        cout<<" ";
        }
    cout<<"  "<<"> "<<"*"<<"|";
    if(c1!=(n/2))cout<<endl;
    }
}
//The letter closing rows.
    if(c1==(n/2 + 3)){
        cout<<"|"<<"*"<<" <"<<"  ";
    for(int c4=1;c4<=(n*4)-4;c4++){
    cout<<"*";
    }
    for(int c4=1;c4<=n-2;c4++){
    cout<<" ";
    }
    cout<<"o";
    for(int c4=1;c4<=n-2;c4++){
    cout<<" ";
    }
    for(int c4=1;c4<=(n*4)-4;c4++){
    cout<<"*";
    }
    cout<<"  "<<"> "<<"*"<<"|";
    }
//the legs of letters 
    if(c1!=1 && c1!=2 && c1>(n/2 + 3) ){
    for(int c1=1;c1<=n/2 - 1;c1++){
        cout<<"|"<<"*"<<" <"<<"  *";
        for(int c4=1;c4<=(4*n+2*n-8);c4++){
        cout<<" ";
        }
        cout<<"*";
        for(int c4=1;c4<=(n*4)-5;c4++){
        cout<<" ";
        }
    cout<<"  "<<"> "<<"*"<<"|";
    if(c1!=n/2 -1 )cout<<endl;
    }}
//the ending
    if(c1==n+ n/2 + 1){
    cout<<endl<<"|"<<"*"<<"  ";
    for(int c4=1;c4<=(val-8);c4++){
    cout<<"v";
    }
    cout<<"  "<<"*"<<"|";
    }
    cout<<endl;
}
//bottom
int val3=size-16;
int size2=8;
for(int c1=1;c1<=n;c1++){
        if(c1==n){
        for(int c2=1;c2<=size/2;c2++){
            cout<<" ";
            }
        cout<<"\\"<<"1"<<"/";
        }
        if(c1!=1 && c1!=n){
        for(int c2=1;c2<=size2;c2++){
            cout<<" ";
            }
        cout<<"\\"<<n-c1+1;
        for(int c2=1;c2<=val3;c2++){
            cout<<" ";
            }
            cout<<n-c1+1<<"/";
            size2=size2+4;
            val3=val3-8;
        }
        if(c1==1){
            for(int c2=1;c2<=4;c2++){
                cout<<" ";}
            cout<<"\\"<<n;
            for(int c2=1;c2<=size-6;c2++){
                cout<<" ";}
                cout<<n<<"/";
            }
            
            val2=val2+8;
            cout<<endl;
        }

}
