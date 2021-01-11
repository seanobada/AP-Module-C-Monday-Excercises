//In this exercise the objective was to create a programme that could take in the length and width of a rectangle and return the area of the rectangle with the given data
#include <iostream>

int main() {

int width, length, area; //declares the data type for the width, length and are 

  std::cout << "Find the Area of a rectangle :" << std::endl; //prints text to give the user some context
  std::cout << "Input the length of the rectangle : " << std::endl; //prints text that asks for the users input for the length
  
  std::cin >> length; //allows the user to input the length data
  
  std::cout << "Input the width of the rectangle : " << std::endl; //prints text that asks for the users input for the width
  
  std::cin >> width; //allows the user to input the width data 
  
  area = (length*width); // this is the formula used to calculate the area of the rectangle with the given data from the width and length inputs
  
  std::cout << "The area of the rectangle is: " << area << std::endl; //print the area of the rectangle with the area parameter
  
  return 0;
}
