// Example program
#include <iostream>
#include<iomanip>
using namespace std;

// Added Header file - JN
#include "Surgery.h"

//Cut class declaration and pasted into the Surgery.h header file. -JN

//Removed main function: "int main {...} ;", only needed for main.cpp, not needed for either class files. -JN


// Updated to integrate with main (Selects surgery type for price) - ZM
int Surgery::getSurgeryType {
    int choice;
    cout << "Please enter the surgery type. Enter 0 if no surgery needed." << endl;
    cout << "1 - Minor surgery $ 600" << endl;
    cout << "2 - Eye surgery $ 1,250" << endl;
    cout << "3 - Knee replacement  $ 6,000" << endl;
    cout << "4 - Heart surgery $12,000" << endl;
    cout << "5 - Brain surgery $28,000" << endl;
    
    // Validation -- Updated to include 0 - ZM
    cin >> choice;
    while (choice < 0 || choice > 5) {
      cout << "Invalid input." << endl;
      cout << "Please input 0 to 5" << endl;
      cin >> choice;
    }
    return choice;
}


// Gets the price for the selected surgery and sends it to the Patient Account -ZM
void Surgery::updateAccount(PatientAccount& pt, int type) {
    if (type == 1) {
        amount = 600;
    }
    else if (type == 2) {
        amount = 1250;
    }
    else if (type == 3) {
        amount = 6000;
    }
    else if (type == 4) {
        amount = 12000;
    }
    else if (type == 5) {
        amount = 28000;
    }
    else {
        amount = 0;
    }
        
    pt.updateCharges(amount);
    
}