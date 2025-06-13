//
//  NyraWaitersPatientAccount.cpp
//
#include "PatientAccount.h"
#include <iostream>
using namespace std;



//****************************************************
// Default constructor                               *
// sets days and charges to 0                        *
//****************************************************
PatientAccount::PatientAccount()
{
    days = 0;
    charges = 0;
    name = " ";
}



//****************************************************
// Function setDays                                  *
// gets the amt of days patient stayed at            *
// hospital from user. Then updates charges          *
// based on days.                                    *
//****************************************************
void PatientAccount::setName(const string& n)
{

    name = n;
}

string PatientAccount::getName() const
{
    return name;
}

void PatientAccount::setDays(int d)
{
    if (d < 0)
        d = 0;

    days = d;
    charges = days * DAILY_RATE;
}



//****************************************************
// Function updateCharges                            *
// updates charges based on price given              *
//****************************************************
void PatientAccount::updateCharges(double c)
{
    charges += c;
}



//****************************************************
// Function getCharges                               *
// returns charges                                   *
//****************************************************
double PatientAccount::getCharges() const
{
    return charges;
}
