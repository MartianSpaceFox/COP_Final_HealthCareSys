//Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream> 

//Class Header files
#include "PatientAccount.h"
#include "Pharmacy.h"
#include "Surgery.h"

using namespace std;

int main() 
{
char insuredStatus;
int surgeryType;
int medicationType;
double roomCharge = 0.00; // Allows output of room rate only
double surgeryCharge = 0.00; // Allows output of surgery charge only
double medCharge = 0.00; // Allows output of pharmacy charge only
double subtotal = 0.00; // Allows output of charges without discounts
double afterDiscount=0.00; // New total minus the 20% discount initialized to 0


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

    //Added by JN to add insurance option detail. 
    cout << "Does the patient have health insurance? Enter Y or N." << endl;
    cin >> insuredStatus;
    cout << endl;

    PatientAccount patient1; // Creates a new patient account
    Surgery surgery; // Creates the surgery object
    Pharmacy pharmacy; // Creates the pharmacy object

    patient1.setDays(); // Invokes the "Set Days" function on the Patient Account
    roomCharge = patient1.getCharges(); // Gets the standalone room charge
    
    // Invokes "Get surgery/medication type for later functions"
    surgeryType = surgery.getSurgeryType();
    medicationType = pharmacy.getMedicationType(); 

    // Invokes "Update Account" to add charges
    surgery.updateAccount(patient1, surgeryType);
    surgeryCharge = patient1.getCharges() - roomCharge; // Gets surgery charge only
    pharmacy.updateAccount(patient1, medicationType);
    medCharge = patient1.getCharges() - roomCharge - surgeryCharge; // Gets medication charge only
    subtotal = roomCharge + surgeryCharge + medCharge;

  cout << left << setw(50) << setfill('*') << "" << endl;
  cout << "          Patient Discharge Statement" << endl;
  cout << endl;
  cout << "Patient Name: Jane Doe" << endl;
  cout << "Account Number: JD123456789" << endl;
  cout << "Billing Address: 12345 Milky Way, West Palm Beach, FL 33409" << endl;
  cout << "Insurance Status Y/N: " << insuredStatus << endl;
  cout << endl;
  
  cout << left << setw(15) << setfill('*') << "" << endl;
  cout << endl;
  cout << "Patient Charges" << endl;
  cout << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(30) << setfill(' ') << "Hospital Room: " << roomCharge << endl; // NEED TO ADD #DAYS VARIABLE AND ROOM RATE
    cout << left << setw(30) << setfill(' ') << "Surgery Charges:" << surgeryCharge << endl;  
    cout << left << setw(30) << setfill(' ') << "Pharmacy Charges:" << medCharge << endl;
    cout << left << setw(30) << setfill(' ') << "Subtotal:" << subtotal << endl;
    cout << right << setw(37) << setfill(' ') << "-------" << endl;

double uninsuredDiscount = patient1.getCharges() * 0.20;
afterDiscount = patient1.getCharges() - uninsuredDiscount;

    // FINAL OUTPUT OF SUB-TOTALS AND TOTAL
if (insuredStatus == 'N' || insuredStatus == 'n'){
  
  cout << "20% Uninsured Discount:" << "      - " << fixed << setprecision(2) << uninsuredDiscount << endl;
  cout << left << setw(30) << setfill(' ') << "Total Charges: " << "$" << afterDiscount << endl;
}
else {
  cout << "NO DISCOUNT APPLIED (Patient has insurance)" << endl;
    cout << left << setw(30) << setfill(' ') << "Total Charges: " << "$" << subtotal << endl; // UPDATE TO GET ORIGINAL PRICES
}
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