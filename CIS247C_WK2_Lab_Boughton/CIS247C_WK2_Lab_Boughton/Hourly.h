
#pragma once
#include "Employee.h"
#include <string>

	double const  MIN_WAGE = 10;
	double const MAX_WAGE =  75;
	double const MIN_HOURS = 0;
	double const MAX_HOURS = 50;

class Hourly : public Employee
{
public:
	Hourly():Employee(){}

	Hourly::Hourly(string in_First, string in_Last, char in_Gender, int in_Dependents, double in_Salary,Benefit passed_Benefit,double in_wage, double in_hours, string in_category);

	Hourly(double in_wage, double in_hours, string in_category);
	
	

	
	double getwage (double in_wage);
	double gethours (double in_hours);

	double setwage (double in_wage);
	double sethours (double in_hours);

	void setAnnualSalary(double in_wage, double in_hours);

	 double calculatePay();
	
	 void displayEmployee();
	~Hourly();


private:
	double wage;
	double hours;
	string category;
};

