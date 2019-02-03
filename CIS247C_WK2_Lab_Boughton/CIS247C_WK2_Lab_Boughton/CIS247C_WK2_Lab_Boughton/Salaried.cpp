#include "Salaried.h"


Salaried::Salaried()
{
}

Salaried::Salaried(string in_First, string in_Last, char in_Gender, int in_Dependents, double in_Salary,Benefit passed_Benefit, int in_manLevel)
{
firstName = in_First;
lastName = in_Last;
gender = toupper(in_Gender);
dependents = in_Dependents;
setManagementLevel(in_manLevel);
setAnnualSalary((in_Salary += (in_Salary * (managementLevel * BONUS_PERCENT))));
benefits.setHealthInsurance(passed_Benefit.getHealthInsureance());
benefits.setLifeInsurance(passed_Benefit.getLifeInsurance());
benefits.SetVacation(passed_Benefit.getVacation());
}

Salaried::~Salaried()
{
}


Salaried::Salaried(double in_Salary, int in_manLevel)
{

}

void Salaried::displayEmployee()
{
	
}
