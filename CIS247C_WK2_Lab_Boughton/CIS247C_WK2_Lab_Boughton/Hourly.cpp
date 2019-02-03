#include "Hourly.h"
#include <iomanip>
#include <string>




Hourly::Hourly(string in_First, string in_Last, char in_Gender, int in_Dependents, double in_Salary,Benefit passed_Benefit,double in_wage, double in_hours, string in_category): Employee(firstName,lastName,gender,dependents,annualSalary,benefits)
{
}

Hourly::~Hourly()
{
}
Hourly::Hourly(double in_wage, double in_hours, string in_category)
{
	wage = in_wage;
	hours = in_hours;
	category = in_category;
}

double Hourly::getwage(double in_wage)
{
	wage = in_wage;
	return wage;
}

double Hourly::gethours(double in_hours)
{
	hours = in_hours;
	return hours;
}

double Hourly::sethours(double in_hours)
{
	hours = in_hours;
	return hours;
}

double Hourly::setwage(double in_wage)
{
	wage = in_wage;
	return wage;
}
void Hourly::setAnnualSalary(double in_wage, double in_hours)
{
annualSalary = Employee::setAnnualSalary((in_wage * in_hours) * 50);

} 

double Hourly::calculatePay()
{
	annualSalary = ((wage * hours) * 50);
	return annualSalary;
}
void Hourly::displayEmployee()
{
	cout << "Name:\t" << firstName << " " << lastName << endl;
	cout << "Gender:\t" << gender << endl;
	cout << "Dependents:\t" << dependents << endl;
	benefits.displayBenefits();
	cout << "Annual Salary:\t" << setprecision(2) << showpoint << fixed << calculatePay() << "\n";
	cout << "Weekly Salary:\t" << setprecision(2) << showpoint << fixed << annualSalary/50 << "\n";
	cout << "Category:\t" << setprecision(2) << showpoint << fixed << category << "\n";
}

