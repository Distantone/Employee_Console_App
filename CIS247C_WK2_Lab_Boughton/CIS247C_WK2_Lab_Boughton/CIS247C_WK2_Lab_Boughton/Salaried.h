#pragma once
#include "employee.h"
class Salaried :
	protected Employee
{
public:
	Salaried();
	
	Salaried(string in_First, string in_Last, char in_Gender, int in_Dependents, double in_Salary,Benefit passed_Benefit, int in_manLevel);
	
	

	Salaried(double in_Salary, int in_manLevel);


	

	int setManagementLevel(int in_manLevel);

	double setAnnualSalary(double in_Salary);




	double calculatePay();
	
	void displayEmployee();

	~Salaried();
private:
	int  const MIN_MANAGEMENT_LEVEL = 0;
	int	 const MAX_MANAGEMENT_LEVEL = 3;
	double  const BONUS_PERCENT = 10;
	int managementLevel;
	bool isSalaried;
};

