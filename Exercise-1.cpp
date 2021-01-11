//This objective of this exercise was to use escape characters to put quotation marks around a quote, 
//which would normally result in an error if it wasn't for the usage of escape characters

#include <iostream>
#include <string>

int main() {

std::string quote; //declaration of quote data type to allow for users quote input
std::string author; // declaration of author data type for the author input
  
std::cout << "What is the quote? " <<std::endl; // prints the line "Whats the quote? "
//std::cin >> quote; // previous print function that is no longer used due to its issues
getline(std::cin, quote); // allows the user to input the quote of their choice 
  

std::cout << "Who said it? " << std::endl; // prints the line "Who said it? "
//std::cin >> author; // previous print function that is no longer used due to its issues
getline(std::cin, author); // allows the user to input the author of the quote

std::cout << author << " says : \"" << quote << "\"" << std::endl; // prints full sequence of the quote and author in a line
return 0;
} 
