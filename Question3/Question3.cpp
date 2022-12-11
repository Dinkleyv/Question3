// Question3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//function that checks whether the number entered is even or odd
//declaration of global variables
int number, digit;
bool isEven;


//function declaration and initiation
bool checkEven(int number)
{ 
   //process the number
    number = digit % 2;
 //conditional statement to check whether the number is even or odd
    if (number == 0)
    {
        isEven = true;
    }
    else 
    {
        isEven = false;
    }
    return isEven;
}
int main()
{
    //get the input from the user
    cout << "Please enter an even number:";
    cin >> digit;
    
    bool t = true;
    bool f = false;
    //transforms 0 and 1 to true and false
    cout << std::noboolalpha << std::boolalpha << std::endl;
    cout << std::noboolalpha << std::boolalpha << std::endl;
  //call the checkEven function
    cout << checkEven(number);


    
}


