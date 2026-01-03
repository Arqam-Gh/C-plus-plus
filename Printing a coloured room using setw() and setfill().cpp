/* 
                                             ""**Drawing Ali’s Room**""
Q2: Drawing Ali’s Room

Inside the house, Ali’s room was his world. A square window faced the street, letting in just
enough sunlight for his study table in the corner. The door stood to the right, his gateway to
the rest of the house.
He imagined his room like a grid of perfect spacing, walls in straight lines, a centered
window, and a neat door, all precisely positioned using code.
Your task is to draw Ali’s room using only setw() and setfill():
● Walls should be drawn using symbols like _,\,/,# or |.
● The window and door must be aligned properly in relation to each other.
● Add console colors for example, blue for walls, yellow for the window, and brown for
the door.
● 5 Bonus marks will be for creativity :)
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
cout <<"\033[1;35m"<< setfill('_') << setw(120) << "" << endl
         << "|" << setfill(' ') << setw(118) << "" << setfill('|')<<setw(1)<<"" << endl
      << "|" << setfill(' ') << setw(118) << "" << setfill('|')<<setw(1)<<"" << endl
      << "|" << setfill(' ') << setw(118) << "" << setfill('|')<<setw(1)<<""<< endl
      << setfill('|')<<setw(1)<<"" << setfill(' ') << setw(3) << "" << setfill('-') << setw(16) << "" 
         << setfill(' ') << setw(60) << "" << setfill('_') << setw(27) << "" 
         << setfill(' ') << setw(12) << "" << setfill('|')<<setw(1)<<"" << endl
      << setfill('|')<<setw(1)<<"" << setfill('_') << setw(21) << "" << setfill(' ') << setw(58) << "" 
         << setfill('|')<<setw(1)<<"" << setfill(' ') << setw(12) << "" << setfill('|')<<setw(1)<<""<<setfill(' ')<< setw(12) << "" << setfill('|')<<setw(1)<<""<<setfill(' ')<< setw(12) << "" << setfill('|')<<setw(1)<<""<< endl
      << setfill('|') <<setw(1)   <<"" << setfill(' ') << setw(21) << "" << setfill('|')<<setw(1)<<"" <<      setfill(' ')<< setw(57) << "" << setfill('|')<<setw(1)<<"" << setfill(' ')<<   setw(12) << "" << setfill('|')<<   setw(1)<< "" << setfill(' ')<< setw(12) << "" << setfill('|')<<setw(1)<< ""<<setfill(' ')<<setw(12)<<""<<setfill('|')<<setw(1)<<""<< endl
      << setfill('|')<<setw(1)<<""  <<      setfill(' ') << setw(21) << "" << setfill('|')<<setw(1)<<"" << setfill(' ')<< setw(57) << "" << setfill('|')<<setw(1)<<"" << setfill(' ')<<  setw(12) << "" << setfill('|')<<setw(1)<< "" <<   setfill(' ')<< setw(12) << "" <<      setfill('|')<<setw(1)<< ""<<setfill(' ')<<setw(12)<<""<<setfill('|')<<setw(1)<<""<< endl
      << setfill('|')  <<setw(1)<<"" << setfill(' ') << setw(21) << "" <<     setfill('|')<<setw(1)<<"" <<setfill(' ')<< setw(57) << "" << setfill('|')<<setw(1)<<"" << setfill('-')<<setw(12)<<""<<setfill('|')<<setw(1)<<""<<setfill('-')<<setw(12)<<""<<setfill('|')<<setw(1)<< ""<<setfill(' ')<<setw(12)<<""<<setfill('|')<<setw(1)<<""<< endl
      << setfill('|')<<setw(1)<<"" << setfill(' ') << setw(21) <<    "" << setfill('|')<<setw(1)<<"" <<setfill(' ')<< setw(57) << "" << setfill('|')<<setw(1)<<"" << setfill(' ')<<setw(12) << ""   << setfill('|')<<setw(1)<< "" <<        setfill(' ')<< setw(12) << "" << setfill('|')<<setw(1)<< ""<<setfill(' ')<<setw(12)<<""<<setfill('|')<<setw(1)<<""<< endl
      << setfill('|')<<setw(1)<<"" <<   setfill(' ') << setw(21) <<    "" << setfill('|')<<setw(1)<<"" <<setfill(' ')<< setw(57) << "" << setfill('|')<<setw(1)<<"" << setfill(' ')<<setw(12) << "" << setfill('|')        <<setw(1)<< "" <<   setfill(' ')<< setw(12) << "" << setfill('|')<<setw(1)<< ""<<setfill(' ')<<setw(12)<<""<<setfill('|')<<setw(1)<<""<< endl
      << setfill('|')<<setw(1)<<"" << setfill(' ') <<     setw(21) << "" << setfill('|')<<setw(1)<<"" << setfill(' ')<<setw(10)<< "" << setfill('O')<<setw(1)<<""<< setfill(' ')<<setw(18)<< "" <<    setfill('_')     <<setw(8)<< ""    <<setfill(' ')<<setw(1)<<""<<setfill(' ')<<setw(19)<<""<<setfill('|')<<setw(1)<<""<<setfill('_')<<setw(12)<<""    <<setfill('|')<<setw(1)<<""<<setfill('_')<<setw(12)<<"" <<   setfill('|')<<setw(1)<<""<<setfill(' ')<<setw(12)<<""<<setfill('|')<<setw(1)<<""<<endl
      << "|" << setfill(' ') << setw(21) << "" << "|" << setfill(' ')   <<setw(10) << "" << "|" 
         << setw(16) << "" << "_("<<setfill('_')     <<setw(7)<<""<<"( " << setfill(' ')<<setw(16) << "" <<  setfill(' ')<<setw(42) << "" << "|" <<setfill(' ')<<setw(1)<<""<< endl
      << "|" << setfill(' ') << setw(21) << "" << "|" <<  setfill(' ')<<setw(10) << "" << "|" 
         << setfill(' ')<<setw(15) << "" << "("    <<setfill('_') <<setw(7)<<""<<"(" <<  setfill(' ')<<setw(18) << "" << setfill(' ')<<setw(43) << "" << "|" << endl
      << "|" << setfill(' ') << setw(18) <<     "" << "O  |" <<setfill(' ')<< setw(3) << "" << setfill('_') <<setw(7)<<""<<setfill('|') <<setw(1)<<""<<setfill('_') <<setw(15)<<""<<"("<<setfill('_') <<setw(7)<<""<<"("<<setfill('_') <<setw(2)<<"" 
         <<setfill(' ')<< setw(6) << "" << " _"    <<setfill(' ')<< setw(51) << "" << "|" << endl
      << "|" << setfill(' ') << setw(21) << "" << "|" << setw(3)   << "" << "|"<<setfill('_')<<setw(33)<<""<<setfill(' ')<<setw(0)<<""<<"|" 
         << setw(5) << "" << "|#|" << setw(50) << "" << "|" << endl
      << "|" << setfill(' ') << setw(21) << "" << "|"    << setw(7) << "" << "|" 
         << setw(26) << "" << "|" << setw(8) << "" << "|#|" << setw(50) << "" << "|" << endl
      << "|"<< setfill(' ') <<   setw(21) << "" <<    "|" << setw(7) << "" << "|" 
         << setw(26) << "" << "|" << setw(8)<< "" << "|#|" << setw(47) << "" << "_" << setw(1) << "" << " |" << endl
      << "|" << setfill(' ')    << setw(21) << "" << "|" << setw(7) << "" << "|" 
         <<   setw(26) << "" << "|" << setw(8) << "" <<"|#|" << setw(46) << ""      << "|#|" << setw(1) << "" << "|" << endl
      << "|" << setfill(' ') <<setw(21) << "" << "|" << setw(7) << "" << "|" 
         << setw(26)    << "" << "|" << setw(8) << "" <<     "|#|" << setfill('-') << setw(46) << "" << "|#|" << setfill(' ') << setw(1) << "" << "|" << endl
      << "|" << setfill(' ') << setw(21) << "" << "|" << setw(7) << "" << "|" 
         <<    setw(26) << "" << "|" << setw(8) << "" << "|#|" << setfill('#') << setw(46) << "" << "|#|" << setfill(' ') << setw(1) << "" << "|" << endl
      << "|"<< setfill(' ') << setw(21) << "" << "|" << setw(7) << "" << "|" 
         << setw(26) << "" << "|" << setw(8) << "" << "|#|" << setfill('-') << setw(46) << "" << "|#|" << setfill(' ') << setw(1) << "" << "|" << endl
      << "|" << setfill(' ') << setw(21) << "" << "|" << setw(7) << "" << "|" 
         <<    setw(26) << "" << "|" <<setw(8) << "" << "|#|" << setfill(' ') << setw(46) << "" << "|#|" << setw(1) << "" << "|" << endl
      << "|" << setfill('_') << setw(21) << "" << "|" << setfill('_') << setw(7) << "" << "|" 
         << setfill('_') << setw(26) << "" << "|" <<    setfill('_') << setw(8) << "" << "|#|" 
         << setfill('_') << setw(46) << "" << "|#|" << setfill('_') << setw(1) << setfill('_')<<setw(1)<<""<<setfill('|')<<setw(1)<<"" <<"\033[0m"<< endl;
    return 0;
}