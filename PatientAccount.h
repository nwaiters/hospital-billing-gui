// Specification file for the PatientAccount class
#ifndef PATIENT_ACCOUNT_H
#define PATIENT_ACCOUNT_H
#include <string>
using namespace std;

class PatientAccount

{
private:
	double charges;
	int days;
    string name;
    
public:
	const double DAILY_RATE = 500.00; //Daily room rate
	PatientAccount(); // Default constructor sets days and charges to 0
    void  setDays(int d); // Sets the number of days in the hospital, validating that days >= 0
	void  updateCharges(double); // Updates the charges based on the number of days
	double getCharges() const; // Returns the total charges
    void setName(const string&);
    string getName() const;
};

#endif
