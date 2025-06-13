// Specification file for the Pharmacy class
#include "PatientAccount.h"
#ifndef PHARMACY_H
#define PHARMACY_H

class Pharmacy
{
private:
    double price1,    // holds prices of 5 types of medicine
        price2,
        price3,
        price4,
        price5;

public:
    Pharmacy(); // Default constructor sets prices for medicine types 1-5
    void updateAccount(PatientAccount&, int); // Updates the patient's account 
                                              // based on the selected medicine type
};

#endif
