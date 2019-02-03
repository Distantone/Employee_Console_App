#include "Hourly.h"


Hourly::Hourly()
{
}

Hourly::Hourly(double in_wage, double in_hours, string in_category)
{

}

Hourly::~Hourly()
{
}


double Hourly::calculatePay()
{
	cout << "Name:\t" << firstName << " " << lastName << endl;
	cout << "Gender:\t" << gender << endl;
	cout << "Dependents:\t" << dependents << endl;
	cout << "Annual Salary:\t" << setprecision(2) << showpoint << fixed << annualSalary << "\n";
	cout << "Weekly Salary:\t" << setprecision(2) << showpoint << fixed << calculatePay() << "\n";
}