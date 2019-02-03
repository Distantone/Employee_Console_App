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
#include "Salaried.h"
#include "Hourly.h"


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



//	cout << Employee::getNumEmployees() << endl;			//for debug and testing purposed
//start of program.
	DisplayDivider("Start Program");								//Displays start program divide			
	DisplayAppinformation();										//Displays application information

	DisplayDivider("Employee 1");
	Employee *Salaried_Employee_one = new Salaried(10000,3);
	

	Salaried_Employee_one->setFristName(firstName);
	Salaried_Employee_one->setLastName(lastName);
	Salaried_Employee_one->setGender(gender);
	Salaried_Employee_one->setDependents(dependents);
	Salaried_Employee_one->benefits.setHealthInsurance(GetInput("Please enter your Health Insurance: "));
	Salaried_Employee_one->benefits.setLifeInsurance(stod(GetInput("Please enter your Life Insurance: ")));
	Salaried_Employee_one->benefits.SetVacation(stoi(GetInput("Please enter your Vacation Days: ")));

	Salaried_Employee_one->calculatePay();
	Salaried_Employee_one->displayEmployee();

	

//=================Divider=================
	DisplayDividertwo();												
//=================Divider=================


	Employmentnumber();
	cout << "Number of Employees: " << Employee::getNumEmployees() << endl;

	weeklyPay = 0;														//resets weeklyPay back to 0 just incase. Ran into it not resetting sometimes?
	DisplayDivider("Employee 2");
//=================Divider=================
	DisplayDividertwo();												//Displays "Employee Information" and a line for seperation.
//=================Divider=================
	Employee *Hourly_Employee_Two = new Hourly(50,40, "Fulltime");
	//Benefit benefits_Two("Anthem",100000.00,20);
	Hourly_Employee_Two->setFristName(firstName);
	Hourly_Employee_Two->setLastName(lastName);
	Hourly_Employee_Two->setGender(gender);
	Hourly_Employee_Two->setDependents(dependents);
	Hourly_Employee_Two->benefits.setHealthInsurance(GetInput("Please enter your Health Insurance: "));
	Hourly_Employee_Two->benefits.setLifeInsurance(stod(GetInput("Please enter your Life Insurance: ")));
	Hourly_Employee_Two->benefits.SetVacation(stoi(GetInput("Please enter your Vacation Days: ")));

	Hourly_Employee_Two->calculatePay();
	Hourly_Employee_Two->displayEmployee();
	
	

	
	Employmentnumber();
	cout << "Number of Employees: " << Employee::getNumEmployees() << endl;

	delete  Salaried_Employee_one;
	delete  Hourly_Employee_Two;
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