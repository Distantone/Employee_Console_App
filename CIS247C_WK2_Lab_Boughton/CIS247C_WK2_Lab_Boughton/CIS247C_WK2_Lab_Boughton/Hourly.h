#pragma once
#include "employee.h"


class Hourly :
	public Employee
{
public:
	Hourly();

	Hourly(double in_wage, double in_hours, string in_category);
	
	Hourly(string in_First, string in_Last, char in_Gender, int in_Dependents, double in_Salary,Benefit passed_Benefit, string in_category);


	double calculatePay();
	~Hourly();


private:
	double const  MIN_WAGE = 10;
	double const MAX_WAGE =  75;
	double const MIN_HOURS = 0;
	double const MAX_HOURS = 50;
	double wage;
	double hours;
	string category;
};

