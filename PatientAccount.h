// PATIENT ACCOUNT CLASS DEFINITIONS
#ifndef PATIENT_ACCOUNT_H
#define PATIENT_ACCOUNT_H

class PatientAccount 
{
    private:
        double charges; // Holds total costs
        int days; // To determine total cost of stay
    public:
        PatientAccount();
        void setDays(); // Used to get days in hospital
        void updateCharges(double); // Adds charges to total later
        double getCharges();
};

#endif
        
