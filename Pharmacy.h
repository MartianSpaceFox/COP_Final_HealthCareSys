#ifndef PHARMACY_H
#define PHARMACY_H
#include "PatientAccount.h"

class Pharmacy {
  private:
    double medicineOne;
    double medicineTwo;
    double medicineThree;
    double medicineFour;
    double medicineFive;

  public:
    int getMedicationType();
    Pharmacy();
    void updateAccount(PatientAccount& patient, int); 
    //patient is alias to argument
};

#endif
