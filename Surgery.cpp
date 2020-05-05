// Example program
#include "Surgery.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Added Header file - JN


//Cut class declaration and pasted into the Surgery.h header file. -JN

//Removed main function: "int main {...} ;", only needed for main.cpp, not needed for either class files. -JN


// Updated to integrate with main (Selects surgery type for price) - ZM
int Surgery::getSurgeryType() {
    int choice;
    cout << endl;
    cout << "Please enter the surgery type that the patient had received." << endl;
    cout << endl;
    cout << "[0] - None" << endl;
    cout << "[1] - Elective surgery $ 1,400" << endl;
    cout << "[2] - Knee surgery $ 1,500" << endl;
    cout << "[3] - General surgery per hr  $ 2,428" << endl;
    cout << "[4] - ICU/ER surgery $8,109" << endl;
    cout << "[5] - C- Section surgery $11,602" << endl;
    cout << endl;
    //KIT CRANIOTOMY 5.31MM  3001.18  (Brain surgery)
    // Validation -- Updated to include 0 - ZM
    cin >> choice;
    while (choice < 0 || choice > 5) {
      cout << "Invalid input." << endl;
      cout << "Please input 0 to 5" << endl;
      cin >> choice;
    }
    return choice;
    cout << endl;
}


// Gets the price for the selected surgery and sends it to the Patient Account -ZM
void Surgery::updateAccount(PatientAccount& pt, int type) {
    if (type == 1) {
        amount = 1400;
    }
    else if (type == 2) {
        amount = 1500;
    }
    else if (type == 3) {
        amount = 2428;
    }
    else if (type == 4) {
        amount = 8109;
    }
    else if (type == 5) {
        amount = 11602;
    }
    else {
        amount = 0;
    }
        
    pt.updateCharges(amount);
    
}
