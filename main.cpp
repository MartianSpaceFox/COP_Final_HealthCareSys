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

//Patient Discharge/Release Statement Letterhead Function
  void letterHead (); {
         
   cout << left << setw(40)<< setfill(' ') << "|---------------------------------------|" << endl;
    cout << "|                                       |" << endl;
    cout << left << setw(40)<< setfill(' ') << "|          JGZC Medical Center          |" << endl; 
    cout << left << setw(40)<< setfill(' ') << "|             _____________             |" << endl;
    cout << "|                                       |" << endl;
    cout << left << setw(40)<< setfill(' ') << "|       5555 PGA Boulevard              |" << endl;
    cout << left << setw(40)<< setfill(' ') << "|       Palm Beach Gardens, FL 33410    |"<< endl;
    cout << "|       Phone: 561-555-5555             |" << endl;
    cout << "|                                       |" << endl;
    cout << left << setw(40)<< setfill(' ') << "|---------------------------------------|" << endl;
    cout << endl;
    
  }

cout << &letterHead << endl;

  //Add Start message
    cout << endl;
    cout << "JGZC Medical Center Patient Discharge Account System" << endl;
    
    cout << endl;
    cout << left << setw(40) << setfill(' ') << "To generate a discharge statement of charges please enter the required information in the following fields." << endl;
    cout << endl;

    PatientAccount patient1; // Creates a new patient account
    Surgery surgery; // Creates the surgery object
    Pharmacy pharmacy; // Creates the pharmacy object (NEEDS TO BE CREATED)

    patient1.setDays(); // Invokes the "Set Days" function on the Patient Account
    
    surgeryType = surgery.getSurgeryType();
    medicationType = pharmacy.getMedicationType(); // ADD THIS TO PHARMACY FUNCTIONS, SAME AS SURGERY
    
    surgery.updateAccount(patient1, surgeryType); // Invokes the "Update Account" function in surgery.cpp to add charges
    pharmacy.updateAccount(patient1, medicationType); // TBD - TO INVOKE "UPDATE ACCOUNT" FUNCTION IN PHARMACY.CPP (SAME AS SURGERY, NEEDS TO BE ADDED)

  cout << "Patient Discharge Statement" << endl;
  cout << left << setw(30) << setfill('*') << "" << endl;
    cout << "Patient Charges" << endl;
    cout << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(30) << setfill(' ') << "Hospital Room:" << " # days @ " << "[ROOM RATE]" << "$" << endl;
    cout << left << setw(30) << setfill(' ') << "Surgery Charges: " << endl;  
    cout << left << setw(30) << setfill(' ') << "Pharmacy Charges: " << endl;
    cout << right << setw(37) << setfill(' ') << "-------" << endl;

    // FINAL OUTPUT
    //cout << fixed << setprecision(2);
    cout << left << setw(30) << setfill(' ') << "Total Charges: " << "$" << patient1.getCharges() << endl; // UPDATE TO GET ORIGINAL PRICES


    return 0;
    
} 

/*
//We wanted to add this code to attempt to use and read info from the original JFK csv file but weren't able to tie it all together for the right output. -JN

ifstream inFile;

int procedureID;
string description;
double amount;

 
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