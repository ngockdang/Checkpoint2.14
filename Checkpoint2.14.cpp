/*  Program File Name: Checkpoint2.14
    Programmer: Ngoc Dang
    Date: January 2024
    Requirements:
    Write a program that has the following character variables:
    first, middle, and last. Store your intials in these varies
    then display them on the screen.
*/

#include <iostream>



int main()
{
    char firstInitial;
    char middleInitial;
    char lastinitial;
    std::cout << " Please enter the initial of your your first name:";
    std::cin >> firstInitial;
    std::cout << "Please enter the initial of your middle name:";
    std::cin >> middleInitial;
    std::cout << "Please enter the initial of your last name:";
    std::cin >> lastinitial;
    std::cout << "Your initials are:" << firstInitial << middleInitial << lastinitial;

}
