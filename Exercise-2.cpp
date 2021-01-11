// This exercise was used to see if I was able to interpret data as fahrenheit and utilise a calculation to output the data as celsius. 
#include <iostream>

int main() { //initialises the function

float F, C; //declares the data type for the calculation

std::cout << "Convert temperature in Fahrenheit to Celsius: \n" << std::endl; //prints text to inform user of the conversion
std::cout << "Input the temperature in Fahrenheit : " << std::endl; //asks for input in fahrenheit

std::cin >> F; //allows user to input fahrenheit data

C = ((F* 5.0)-(5.0 *32))/9; //formula to convert the given Fahernheit data to celsius

std::cout << "The temperature in Fahrenheit :  " << F << std::endl; //prints original fahrenheit data
std::cout << "The temperature in Celsius : " << C << std::endl; //prints converted celsius data 
return 0;
}
