// ---------------------------------------------------------------
// Programming Assignment:	LAB2
// Developer:			Payden Boughton
// Date Written:		5/14/2017
// Purpose:				 First Object Oriented Program--Employee Class CIS247C 
// ---------------------------------------------------------------


#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"


using namespace std;

void DisplayAppinformation();
void DisplayDivider(string outputTitle);
void DisplayDividertwo();
void Employmentnumber();
string GetInput(string inputType);
char GetPay(char inputpay);

// Initialize static member of class Employee
int Employee::numEmployees = 0;

int main()
{
	//variables
	string firstName;
	string lastName;
	char gender = 'U';
	int dependents = 0;
	double annualSalary = 0;
	double weeklyPay;
	char pay;



//	cout << Employee::getNumEmployees() << endl;			//for debug and testing purposed
	//Benefit benefits;
	Employee Employee_One;
	

	
	//start of program.
	DisplayDivider("Start Program");								//Displays start program divide			
	DisplayAppinformation();										//Displays application information

	DisplayDivider("Employee 1");
	//Employee_One functions to 'get' firstName,lastName,gender,dependents,annualSalary

	Employee_One.setFristName(firstName);  
	Employee_One.setLastName(lastName);
	Employee_One.setGender(gender);
	Employee_One.setDependents(dependents);
	GetPay(pay);

	if (pay = 'S')
		Employee_One.Employee::salaried.setAnnualSalary;
	else if (pay = 'H')
		Employee_One.Employee::hourly.calculatePay;
	else
		Employee_One.setAnnualSalary(annualSalary);

	Employee_One.benefits.setHealthInsurance(GetInput("Please enter your Health Insurance: "));
	Employee_One.benefits.setLifeInsurance(stod(GetInput("Please enter your Life Insurance: ")));
	Employee_One.benefits.SetVacation(stoi(GetInput("Please enter your Vacation Days: ")));
	

	
	




//=================Divider=================
	DisplayDividertwo();												
//=================Divider=================
	Employee_One.displayEmployee();										//Displays Employee 1 information
	Employee_One.benefits.displayBenefits();

	Employmentnumber();
	cout << "Number of Employees: " << Employee::getNumEmployees() << endl;

	weeklyPay = 0;														//resets weeklyPay back to 0 just incase. Ran into it not resetting sometimes?
	DisplayDivider("Employee 2");
//=================Divider=================
	DisplayDividertwo();												//Displays "Employee Information" and a line for seperation.
//=================Divider=================
	Benefit benefits_Two("Anthem",100000.00,20);
	Employee Employee_Two("Mary","Noia",'F',5,24000.0,benefits_Two);	
	Employee_Two.displayEmployee();										//displays Employee_two information
	Employee_Two.benefits.displayBenefits();
	Employmentnumber();
	cout << "Number of Employees: " << Employee::getNumEmployees() << endl;
	system("PAUSE");



	return 0;
}




void DisplayAppinformation()
{

	cout << "Welcome to your first Object Oriented Program--Employee Class CIS247C, Week 2 Lab" << endl;
}

void DisplayDivider(string outputTitle)
{
	cout <<  "**************** " << outputTitle << "****************"  << endl;
}

void DisplayDividertwo()
{
	cout <<  "\nEmployee Information"  << endl;
	cout << "_____________________________________________________" << endl;
}
void Employmentnumber()
{
	cout << "\n-------Number of Employee object Created-------" << endl;
}

string GetInput(string inputType)
{
cin.ignore();
cout << endl << inputType;
getline(cin, inputType);
return inputType;
}

char GetPay(char pay)
{
	cout << "Is this Employee Salaried(S) or Hourly paid(H)?" << endl;
	cin >> pay;
	return toupper(pay);

}