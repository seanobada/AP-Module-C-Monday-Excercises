//In this exercise the objective was to create a programme that would accept an input from a user and return a comment dependant on if the number is odd or even.
#include <iostream>

int main() {
  
  int userNum; //declares the data type of the users number

  std::cout << "Enter a number:" << std::endl; //prints text that asks the user to enter a number

  std::cin >> userNum; //input for the users number

  if (userNum % 2 == 0) //a if function that checks if the number is divisible by 2, if it is then it prints that it is even
  std::cout << userNum << " is even" << std::endl; //prints the users number and "is even"
  
  else //an else function is used as the if function will reject any number that isnt even, so this will just print that it is odd.
  std::cout << userNum << " is odd" << std::endl; //prints the users number and "is odd"
  
  return 0;
}
