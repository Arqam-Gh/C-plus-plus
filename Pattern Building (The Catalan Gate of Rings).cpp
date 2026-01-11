/*

Scenario: A mythical Gate is guarded by a wizard who demands proof of ingenuity. The
proof is a number that belongs to the mysterious Catalan sequence (1, 1, 2, 5, 14, 42...). Once
verified, the index 'n' of the Catalan number must be used to print an hourglass pattern of
runes (#).
Write a C++ program that prompts the user for a number.
1. Verify if the number is a Catalan number.
2. If valid, find the index n such that Catalan number equals the input.
3. Use the index n to generate an hourglass pattern of the character '#'.
Note: DO IT USING WHILE LOOP ONLY.

*/
#include <iostream>
using namespace std;
int position = 0;
int factorial (int n) {
	if (n == 0){
		return 1;
	}
	if (n == 1){
		return 1;
	}
	else {
		int fact = 1;
		int i = 1;
		while (i<=n){
			fact*=i;
			i++;
		}
		return fact;
	}

}
bool isCat(int num) {
	int i = 1;
	while (i<num){
		int cat = (factorial(2*i))/(factorial(i+1)*factorial(i));
		if (cat == num){
			position = i;
			return true;
		}
		else if (cat>num){
			return false;
		}
		else {
			i++;
		}
		
		
	}
	return false;

}

int main () {
	int num;
	cout<<"Enter a number: "<<endl;
	cin>>num;


	if (isCat(num) == true){
		int i =1;
		int mid = ((position*2+1)/2) +1;
		
		while (i<=position* 2 + 1 ){
			int left = i;
			int right = (position * 2 +1 ) - i +1;
			int j = 1;
			while (j<=position * 2  + 1){
				if (i == 1|| i == (position * 2) + 1){
					cout<<"#";
				}
				else if (j == left){
					cout<<"#";
					
				} 
				else if ( j == right){
					cout<<"#";
				}
				else if ((j == mid) && (i == mid)){
					cout<<"#";
				}
				
				
				
				else {
					cout<<" ";
				}
			j++;
			}
		cout<<endl;
		i++;
		}
		
	
	}
	else {
		cout<<"not a catalan numebr";
	}	
	
	



}
