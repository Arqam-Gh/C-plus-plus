/* 
                                             ""**Drawing Ali’s House**""
Q1 : Drawing Ali’s House.

Ali stood in the street outside his little home in Islamabad, gazing at its charming structure.
The triangular roof sloped perfectly, like a textbook example of symmetry. The rectangular
walls below felt strong and welcoming. He wanted this image to live forever not just in his
memory, but inside his first big C++ project.
“If I can draw my house with just code, I’ll never forget this moment,” he
thought.
Your task is to draw Ali’s house using only setw() and setfill(), without loops for freehand
printing everything must be aligned using spacing control.
● Use setfill() to create borders and empty spaces.
● Use setw() to center and align the parts of the house.
● Use console colors Example is already provided there.
*/



#include <iostream>
#include <iomanip>
using namespace std;

int main() {

     cout << "\033[1;33m"<<setfill(' ')<< setw(14)<<"' \" ." << endl <<setfill(' ')<< setw(14)<<"." << setw(2) << setfill('.') <<"'" << endl <<setfill(' ')<< setw(14)<<""<<"\033[1;34m"<< "|"<< setw(4) << setfill('@') << "|" <<"\033[0m"<<"\033[1;33m"<< setw(12) << setfill(' ') << "" << endl << setfill(' ')<< setw(7)<<""<<setw(7) << setfill('_') << "" <<"\033[0m"<<"\033[1;34m"<< "|"<< setw(4) << setfill('@') <<"|" <<"\033[0m"<<""<<"\033[1;33m"<< setw(45) << setfill('_') << "" << endl

     <<setfill(' ')<< setw(6)<<""<< "/" << setw(7) << setfill('-') << "" <<"\033[0m"<<"\033[1;34m"<< "|"<< setw(3) << setfill('@') << "" <<"|" <<"\033[0m"<<"\033[1;33m"<< setw(44) << setfill('-') << "" << "/\\" << endl<<setfill(' ')<< setw(5)<<""<< "/" << setw(8) << setfill('-') << "" <<"\033[0m"<<"\033[1;34m"<< "|"<< setw(3) << setfill('@') << "" <<"|" <<"\033[0m"<<"\033[1;33m" <<""<< setfill('-') << setw(47) <<"/  \\" << endl <<setfill(' ')<< setw(4)<<""<< "/" << setw(9) << setfill('-') << "" <<"\033[0m"<<"\033[1;34m"<< "|"<< setw(4) << setfill('@') <<"|" <<"\033[0m"<<"\033[1;33m"<< setw(42) << setfill('-') << "" << "/    \\" << endl

     <<setfill(' ')<< setw(3)<<""<< "/" << setw(56) << setfill('-') << "" << "/      \\" << endl<<setfill(' ')<< setw(2)<<""<< "/" << setw(56) << setfill('-') << "" << "/"<< setw(8) << setfill(' ') << "" <<"\\" << endl<<setfill(' ')<< setw(1)<<""<< "/" << setw(56) << setfill('_') << "" << "/"<< setw(10) << setfill('_') << "" <<"\\" << endl<<setfill(' ')<< setw(2)<<""<<"\033[0m"<<"\033[1;32m"<<"|" << setw(54) << setfill(' ') << "" << "|" << setw(12) << setfill(' ') << "|" << endl

     <<setfill(' ')<< setw(2)<<""<< "|" << setw(54) << setfill(' ') << "" << "|" << setw(12) << setfill(' ') << "|" << endl<<setfill(' ')<< setw(2)<<""<< "|" << setw(21) << setfill(' ') << "" << setw(12) << setfill('_') << "" << setw(21) << setfill(' ') << "" << "|" << setw(12) << setfill(' ') << "|" << endl<<setfill(' ')<< setw(2)<<""<< "|" << setw(3) << setfill(' ') << "" <<  setw(15) << setfill('_') << ""<< setw(3) << setfill(' ') << "" << "|" << setw(10) << setfill(' ') << "" << "|" << setw(3) << setfill(' ') << "" << setw(15) << setfill('_') << "" << setw(3) << setfill(' ') << "" << "|" << setw(12) << setfill(' ') << "|" << endl

     << setfill(' ')<< setw(2)<<""<<"|" << setw(3) << setfill(' ') << "" << "|" << setw(7) << setfill(' ') << "|" << setw(7) << setfill(' ') << "|" << setw(3) << setfill(' ') << "" << "|" << setw(10) << setfill(' ') << "" << "|" << setw(3) << setfill(' ') << "" << "|" << setw(7) << setfill(' ') << "|" << setw(7) << setfill(' ') << "|" << setw(3) << setfill(' ') << "" << "|" << setw(12) << setfill(' ') << "|" << endl<<setfill(' ')<< setw(2)<<""<< "|" << setw(3) << setfill(' ') << "" << "|" << setw(2) << setfill(' ') << "" << "//" << setw(2) << setfill(' ') << "" << "|" << setw(7) << setfill(' ') << "|" << setw(3) << setfill(' ') << "" << "|" << setw(10) << setfill(' ') << "" << "|" << setw(3) << setfill(' ') << "" << "|" << setw(2) << setfill(' ') << "" << "//" << setw(2) << setfill(' ') << "" << "|" << setw(7) << setfill(' ') << "|" << setw(3) << setfill(' ') << "" << "|" << setw(12) << setfill(' ') << "|" << endl

     <<setfill(' ')<< setw(2)<<""<< "|" << setw(3) << setfill(' ') << "" << "|" << setw(6) << setfill('-') << "" << "|" << setw(6) << setfill('-') << "" << "|" << setw(3) << setfill(' ') << "" << "|" << setw(10) << setfill(' ') << "" << "|" << setw(3) << setfill(' ') << "" << "|" << setw(6) << setfill('-') << "" << "|" << setw(6) << setfill('-') << "" << "|" << setw(3) << setfill(' ') << "" << "|" << setw(12) << setfill(' ') << "|" << endl<<setfill(' ')<< setw(2)<<""<< "|" << setw(3) << setfill(' ') << "" << "|" << setw(7) << setfill(' ') << "|" << setw(2) << setfill(' ') << "" << "//" << setw(2) << setfill(' ') << "" << "|" << setw(3) << setfill(' ') << "" << "|" << setw(10) << setfill(' ') << "" << "|" << setw(3) << setfill(' ') << "" << "|" << setw(7) << setfill(' ') << "|" << setw(2) << setfill(' ') << "" << "//" << setw(2) << setfill(' ') << "" << "|" << setw(3) << setfill(' ') << "" << "|" << setw(12) << setfill(' ') << "|" << endl

     << setfill(' ')<< setw(2)<<""<<"|" << setw(3) << setfill(' ') << "" << "|" << setw(6) << setfill('_') << "" << "|" << setw(6) << setfill('_') << "" << "|" << setw(3) << setfill(' ') << "" << "|" << setw(2) << setfill(' ') << "" << "O" << setw(7) << setfill(' ') << "" << "|" << setw(3) << setfill(' ') << "" << "|" << setw(6) << setfill('_') << "" << "|" << setw(6) << setfill('_') << "" << "|" << setw(3) << setfill(' ') << "" << "|" << setw(12) << setfill(' ') << "|" << endl<<setfill(' ')<< setw(2)<<""<< "|" << setw(22) << setfill(' ') << "|" << setw(11) << setfill(' ') << "|" << setw(22) << setfill(' ') << "|"<< setw(11) << setfill(' ') << "" << setw(1) << setfill('|') << ""  << endl

     <<setfill(' ')<< setw(2)<<""<< "|" << setw(22) << setfill(' ') << "|" << setw(11) << setfill(' ') << "|" << setw(22) << setfill(' ') << "|"<< setw(8) << setfill(' ') << "" << setw(3) << setfill('_') << ""<< setw(1) << setfill('|') << ""  << endl<<setfill(' ')<< setw(2)<<""<< "|" << setw(21) << setfill('_') << "" << "|" << setw(10) << setfill('_') << "" << "|" << setw(21) << setfill('_') << "" << "|" << setw(3) << setfill('_') << "" << "-----" <<"\033[0m"<< endl;
    
     return 0;


}