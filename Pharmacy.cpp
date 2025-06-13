//
//  NyraWaitersPharmacy.cpp
//
//
//
#include "Pharmacy.h"
#include <iostream>
using namespace std;



//****************************************************
// Default constructor                               *
// sets prices                                       *
//****************************************************
Pharmacy::Pharmacy()
{
    price1 = 30.00;
    price2 = 20.00;
    price3 = 25.00;
    price4 = 40.00;
    price5 = 50.00;
}



//**************************************************************
// Function updateAccount                                      *
// gets choice from user, sends equated price to updateCharges *
//**************************************************************
void Pharmacy::updateAccount(PatientAccount& p, int choice)
{
        switch (choice)
        {
            case 1:
                p.updateCharges(price1);
                break;
            case 2:
                p.updateCharges(price2);
                break;
            case 3:
                p.updateCharges(price3);
                break;
            case 4:
                p.updateCharges(price4);
                break;
            case 5:
                p.updateCharges(price5);
                break;
                
            default:
                break;
        }
}
