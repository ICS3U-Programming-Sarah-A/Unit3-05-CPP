// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: Apr 1st, 2022
//  This programs asks the user to enter a number. It then tells them
// what month the number corresponds to.


#include <iostream>

int main() {
  // declare variable
  int userMonth;
  // ask the user for the month
  std::cout << "Enter the number for a month (i.e. 2 is for February): ";
  std::cin >> userMonth;

  // state the month selected as a string
  switch (userMonth) {
    case 1 :
    std::cout << userMonth << " represents January.\n";
    break;

    case 2 :
    std::cout << userMonth << " represents February.\n";
    break;

    case 3 :
    std::cout << userMonth << " represents March.\n";
    break;

    case 4 :
    std::cout << userMonth << " represents April.\n";
    break;

    case 5 :
    std::cout << userMonth << " represents May.\n";
    break;
`
    case 6 :
    std::cout << userMonth << " represents June.\n";
    break;

    case 7 :
    std::cout << userMonth << " represents July.\n";
    break;

    case 8 :
    std::cout << userMonth << " represents August.\n";
    break;

    case 9 :
    std::cout << userMonth << " represents September.\n";
    break;

    case 10 :
    std::cout << userMonth << " represents October.\n";
    break;

    case 11 :
    std::cout << userMonth << " represents November.\n";
    break;

    case 12 :
    std::cout << userMonth << " represents December.\n";
    break;

    // handle the error case
    default :
    std::cout << "Error, " << userMonth << " does not represent a number.\n";
  }
}
