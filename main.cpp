// CONCEPT MAIN.CPP (ALLOWS FOR EASY INTEGRATION) -ZM

//Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream> 

//Header files
#include "PatientAccount.h"
#include "Pharmacy.h"
#include "Surgery.h"

using namespace std;



int main() 
{
    int surgeryType;
    int medicationType;

    PatientAccount patient1; // Creates a new patient account
    Surgery surgery; // Creates the surgery object
    Pharmacy pharmacy; // Creates the pharmacy object (NEEDS TO BE CREATED)

    patient1.setDays(); // Invokes the "Set Days" function on the Patient Account
    
    surgeryType = surgery.getSurgeryType();
    medicationType = pharmacy.getMedicationType(); // ADD THIS TO PHARMACY FUNCTIONS, SAME AS SURGERY
    
    surgery.updateAccount(patient1, surgeryType); // Invokes the "Update Account" function in surgery.cpp to add charges
    pharmacy.updateAccount(patient1, medicationType); // TBD - TO INVOKE "UPDATE ACCOUNT" FUNCTION IN PHARMACY.CPP (SAME AS SURGERY, NEEDS TO BE ADDED)
    
    
    // FINAL OUTPUT
    cout << fixed << setprecision(2);
    cout << "Total Charges: " << patient1.getCharges() << endl; // UPDATE TO GET ORIGINAL PRICES
    
    return 0;
    
} 

/*
//We wanted to add this code to attempt to use and read info from the original JFK csv file but weren't able to tie it all together for the right output. -JN

ifstream inFile;

string procedureID;
string description;
string amount;

 
inFile.open("jfkmedicalcenter_cm.csv");

if (inFile.is_open()) {
    cout << "File has been opened" << endl;
}
else {
    cout << "NO FILE HAS BEEN OPENED" << endl;
}


while (!inFile.eof()) {
    getline ( inFile, procedureID, ',' );
    getline ( inFile, description, ',' );
    getline ( inFile, amount, '\n' );

    cout << endl;
    cout << "Procedure ID: " << procedureID << endl;
    cout << "Description: " << description << endl;
    cout << "Amount: " << "$" << amount << endl;
    cout << endl;
}

inFile.close();
system("pause");
*/