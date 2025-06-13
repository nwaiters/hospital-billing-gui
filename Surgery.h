// Specification file for the Surgery class
#include "PatientAccount.h"
#ifndef SURGERY_H
#define SURGERY_H

class Surgery
{
private:
    double rate1,           // rates for each of these surgery types
        rate2,
        rate3,
        rate4,
        rate5;
public:
    Surgery(); //Default constructor sets rates for surgery types 1-5
    void updateAccount(PatientAccount&, int); // Updates the patient's account 
                                              // based on the selected surgery type
};

#endif