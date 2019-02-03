#include "Salaried.h"
#include "Employee.h"
#include <iomanip>
#include <string>




Salaried::Salaried(string in_First, string in_Last, char in_Gender, int in_Dependents, double in_Salary,Benefit passed_Benefit, int in_manLevel): Employee(firstName,lastName,gender,dependents,annualSalary,benefits)
{
}

Salaried::~Salaried()
{
}


Salaried::Salaried(double in_Salary, int in_manLevel)
{
managementLevel = in_manLevel;
annualSalary = in_Salary;
}

int Salaried::getManagementLevel()
{
	return managementLevel;
}

int Salaried::setManagementLevel(int in_manLevel)
{
	managementLevel = in_manLevel;
	return managementLevel;
}
double Salaried::setAnnualSalary(double in_Salary)
{
	annualSalary = Employee::setAnnualSalary((in_Salary * (managementLevel * BONUS_PERCENT)) + in_Salary );
	return annualSalary;
}
double Salaried::calculatePay()
{
	double bonus;
	bonus = (annualSalary * (managementLevel * BONUS_PERCENT));
	annualSalary = bonus + annualSalary;
	return annualSalary;
}
void Salaried::displayEmployee()
{
	cout << "Name:\t" << firstName << " " << lastName << endl;
	cout << "Gender:\t" << gender << endl;
	cout << "Dependents:\t" << dependents << endl;
	cout << "Annual Salary:\t" << setprecision(2) << showpoint << fixed << annualSalary << "\n";
	benefits.displayBenefits();
	cout << "Salaried Employee" << endl;
}
