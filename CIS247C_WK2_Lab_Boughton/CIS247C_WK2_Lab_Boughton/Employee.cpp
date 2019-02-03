#include "Employee.h"
#include <iostream>
#include <iomanip>
#include <string>



Employee::Employee(){
	Benefit();
numEmployees++;
}

Employee::Employee(string in_First, string in_Last, char in_Gender, int in_Dependents, double in_Salary, Benefit passed_Benefit)
{
firstName = in_First;
lastName = in_Last;
gender = toupper(in_Gender);
dependents = in_Dependents;
annualSalary = in_Salary;
benefits.setHealthInsurance(passed_Benefit.getHealthInsureance());
benefits.setLifeInsurance(passed_Benefit.getLifeInsurance());
benefits.SetVacation(passed_Benefit.getVacation());
 numEmployees++;
}


Employee::~Employee()
{
}


string Employee::getFristName(){
	return firstName;
}

string Employee::getLastName(){
	return lastName;
}

char Employee::getGender(){
	return gender;
}

int Employee:: getDependents(){
	return dependents;
}

double Employee::getAnnualSalary(){
	return annualSalary;
}

int Employee::getNumEmployees(){
	return numEmployees;
}



string Employee::setFristName(string in_First){
	firstName = in_First;
	cout << "Please enter your First Name" << endl;
	cin >> firstName;
	return firstName;
}

string Employee::setLastName(string in_Last){
	lastName = in_Last;
	cout << "Please enter your Last Name" << endl;
	cin >> lastName;
	return lastName;
}

char Employee::setGender(char in_Gender){
	gender = in_Gender;
	cout << "Please enter your Gender" << endl;
	cin >> gender;
	return gender;
}

int Employee::setDependents(int in_Dependents){
	dependents = in_Dependents;
	cout << "Please enter your Dependents" << endl;
	cin >> dependents;
	return dependents;
}

double Employee::setAnnualSalary(double in_Salary){
	annualSalary = in_Salary;
	cout << "Please enter your Annual Salary" << endl;
	cin >> annualSalary;
	return annualSalary;
}

void Employee::setAnnualSalary(string in_Salary){
	
	annualSalary = stod(in_Salary);
	cout << "Please enter your Annual Salary" << endl;
	cin >> annualSalary;
	
}

void Employee::setDependents(string in_Dependents){
	dependents = stoi(in_Dependents);
	cout << "Please enter your Dependents" << endl;
	cin >> dependents;
}


double Employee::calculatePay(){
	weeklyPay = (annualSalary/52);
	return weeklyPay;
}

void Employee::displayEmployee(){

	cout << "Name:\t" << firstName << " " << lastName << endl;
	cout << "Gender:\t" << gender << endl;
	cout << "Dependents:\t" << dependents << endl;
	cout << "Annual Salary:\t" << setprecision(2) << showpoint << fixed << annualSalary << "\n";
	cout << "Weekly Salary:\t" << setprecision(2) << showpoint << fixed << calculatePay() << "\n";

	

}