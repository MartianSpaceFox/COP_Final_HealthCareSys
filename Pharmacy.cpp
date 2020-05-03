#include "Pharmacy.h"
#include <iostream>
#include <iomanip>
using namespace std;

Pharmacy::Pharmacy() {
  medicineOne=10;
  medicineTwo=20;
  medicineThree=50;
  medicineFour=75;
  medicineFive=300;
}

void Pharmacy::updateAccount(PatientAccount& patient, int medicine){
  //cout << "Please enter medication type\n" << endl;
  //cout << "1 - Asprin $10" << endl;
  //cout << "2 - Sleeping pills $20" << endl;
  //cout << "3 - Pain pills $50" << endl;
  //cout << "4 - Local anesthetic $75" << endl;
  //cout << "5 - General anesthetic $300" << endl;
  
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
  cout << "Please enter medication type\n" << endl;
  cout << "1 - Asprin $10" << endl;
  cout << "2 - Sleeping pills $20" << endl;
  cout << "3 - Pain pills $50" << endl;
  cout << "4 - Local anesthetic $75" << endl;
  cout << "5 - General anesthetic $300" << endl;

  cin >> choice;
  while (choice < 0 || choice > 5) {
      cout << "Invalid input." << endl;
      cout << "Please input 0 to 5" << endl;
      cin >> choice;
    }
  return choice;

}

