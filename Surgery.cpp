#include <iostream>
#include<iomanip>
using namespace std;

// Added Header file - JN
#include "Surgery.h"

//Cut class declaration and pasted into the Surgery.h header file. -JN

//Removed main function: "int main {...} ;", only needed for main.cpp, not needed for either class files. -JN


double Surgery::surgeryCost(char answer) {
  if (answer == 'y') {
    cout << "Please enter the surgery type" << endl;
    cout << "1 - Minor surgery $ 600" << endl;
    cout << "2 - Eye surgery $ 1,250" << endl;
    cout << "3 - Knee replacement  $ 6,000" << endl;
    cout << "4 - Heart surgery $12,000" << endl;
    cout << "5 - Brain surgery $28,000" << endl;

    cin >> choice;
    while (choice < 1 || choice > 5) {
      cout << "Invalid input." << endl;
      cout << "Please input 1 to 5" << endl;
      cin >> choice;
    }

    if (choice == 1) {
      amount = 600;
    }
    else if (choice == 2) {
      amount = 1250;
    }
    else if (choice == 3) {
      amount = 6000;
    }
    else if (choice == 4) {
      amount = 12000;
    }
    else if (choice == 5) {
      amount = 28000;
    }
  }
  return amount;
}

//Removed "return 0;", only needed for main.cpp, not needed for either class files. -JN