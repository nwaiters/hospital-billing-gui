//
//  NyraWaitersPharmacy.h

#include "Surgery.h"
#include <iostream>
using namespace std;



//****************************************************
// Nyra Waiters                                      *
// Default constructor                               *
// sets rates                                        *
//****************************************************
Surgery::Surgery()
{
    rate1 = 15000.00;
    rate2 = 9000.00;
    rate3 = 10000.00;
    rate4 = 5000.00;
    rate5 = 8000.00;
}



//**************************************************************
// Function updateAccount                                      *
// gets choice from user, sends equated rate to updateCharges  *
//**************************************************************
void Surgery::updateAccount(PatientAccount& s, int c2)
{
    switch (c2)
    {
        case 1:
            s.updateCharges(rate1);
            break;
        case 2:
            s.updateCharges(rate2);
            break;
        case 3:
            s.updateCharges(rate3);
            break;
        case 4:
            s.updateCharges(rate4);
            break;
        case 5:
            s.updateCharges(rate5);
            break;
            
        default:
            break;
    }
}
