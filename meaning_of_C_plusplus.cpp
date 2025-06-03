#include <iostream>
int main(){
  // c++   means: increase the variable c by 1
int c;                                             // we define an integer variable c
c = 0;                                             // we assign the value zero to the variable c
c++;                                               // increase the value of variable c by 1  (in assembly code, this equals to 'INC AX' which increases the value of AX register by 1)
std::cout << c << std::endl;
// the value of integer c (which is 1) is printed on the screen
return 0;
