#include "Pharmacy.h"
#include <iostream>
#include <iomanip>
using namespace std;

Pharmacy::Pharmacy() {
  medicineOne=16;
  medicineTwo=773;
  medicineThree=3955;
  medicineFour=4492;
  medicineFive=8890;
}

void Pharmacy::updateAccount(PatientAccount& patient, int medicine){
  //cout << "Please enter medication type\n" << endl;
  //cout << "1 - Ibuprofen 600mg $16" << endl;
  //cout << "2 - IV Fluids $773" << endl;
  //cout << "3 - Morphine Injection $3,955" << endl;
  //cout << "4 - Local Anesthetic $4,492" << endl;
  //cout << "5 - General Anesthetic $8,890" << endl;
  
  switch (medicine){
    case 1: patient.updateCharges(medicineOne); //updateCharges function from Parent class which is the Patient class
      break;
    case 2: patient.updateCharges(medicineTwo);
      break;
    case 3: patient.updateCharges(medicineThree);
      break;
    case 4: patient.updateCharges(medicineFour);
      break;
    case 5:  patient.updateCharges(medicineFive);
      break;
    default: ; //by default returns nothing
  }
}
//CR
int Pharmacy::getMedicationType() {
  int choice;
  cout << endl;
  cout << "Please enter the medication type prescribed to patient.\n" << endl;
  cout << endl;
  cout << "[1] - Ibuprofen 600mg $16" << endl;
  cout << "[2] - IV Fluids $773" << endl;
  cout << "[3] - Morphine Injection $3,955" << endl;
  cout << "[4] - Local Anesthetic $4,492" << endl;
  cout << "[5] - General Anesthetic $8,890" << endl;
  cout << endl;

  cin >> choice;
  cout << endl;

  while (choice < 0 || choice > 5) {
      cout << "Invalid input." << endl;
      cout << "Please input 0 to 5" << endl;
      cin >> choice;
    }
  return choice;

}

