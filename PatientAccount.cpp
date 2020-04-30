// PATIENTACCOUNT FUNCTION DEFINITIONS
#include "patientAccount.h"
#include <iostream>
using namespace std;

const double ROOM_RATE = 0.00; // NEEDS TO BE SET TO A VALUE - TBD LATER (SETS CONSTANT ROOM RATE TO ADD TO CHARGES)

// Default Constructor
PatientAccount::PatientAccount()
{
    days = 0; // Sets default days to 0 (CAN BE USED LATER TO DETERMINE INPATIENT OR OUTPATIENT)
    charges = 0.00; // Sets total charges to 0 for adding totals
}

// Function to get number of days in hospital (Used to find room rate totals)
void PatientAccount::setDays()
{
    // Gets days
    cout << "How many days are you in the hospital?" << endl;
    cin >> days;
    
    // Validation
    while (days < 0) {
        cout << "Number of days cannot be negative. Enter a positive number or 0 if none." << endl;
        cin >> days;
    }
    
    // Add daily rate to total charges
    charges += days * ROOM_RATE;
}

// Function to update charges (INTEGRATES WITH SURGERY AND PHARMACY CLASSES/FUNCTIONS)
void PatientAccount::updateCharges(double newCharge)
{
    charges += newCharge;
}

// Function to get charges for output
double PatientAccount::getCharges()
{
    return charges;
}

