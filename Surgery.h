#ifndef SURGERY_H
#define SURGERY_H
#include "PatientAccount.h"

//Copied from Christian's first code submission: https://repl.it/@ChristianRodr12/MajorTriangularMacrolanguage 

class Surgery {

public:
  int getSurgeryType();
  void updateAccount(PatientAccount&, int); // This allows surgery costs to be added to charges in PatientAccount -ZM

  private:
  double amount;
};

#endif