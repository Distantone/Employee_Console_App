// Header ==> Function Declaration

#include <iostream>
#include <string>
#include "Benefit.h"
#include "Salaried.h"


using namespace std;

#ifndef Employee_H
#define Employee_H


//class Employee

class Employee
{

public:
	//Default Constructor
	Employee();

	virtual double calculatePay() =0;				//calculate pay of employee
	virtual void displayEmployee() =0;				//Display employee information

	//Overload Constructor
	Employee(string in_First, string in_Last, char in_Gender, int in_Dependents, double in_Salary,Benefit passed_Benefit);


	

	//Destructor
		~Employee();

	//Accessor Functions
		string getFristName();				 //getFristName returns firstName
		string getLastName();				//getLastName returns lastname
		char getGender();					//getGender returns gender
		int getDependents();				//getDependents returns dependents
		double getAnnualSalary();			//getAnnualSalary returns annualSalary
		static int getNumEmployees();				//gets numEmployees and returns it
		

	//Mutator Functions
		string setFristName(string in_First);			//sets firstName = in_First;
		string setLastName(string in_Last);				//sets lastName = in_Last;
		char setGender(char in_Gender);					//sets gender = in_Gender;
		int setDependents(int in_Dependents);			//sets dependents = in_Dependents;
		void setDependents(string in_Dependents);		//sets 'string' dependents = in_Dependents;
		double setAnnualSalary(double in_Salary);		//sets annualSalary = in_Salary;
		void setAnnualSalary(string in_Salary);		//sets 'string' annualSalary = in_Salary;



	


	//benefits 
	Benefit benefits;
	
protected:

	//member Variables
	string firstName;
	string lastName;
	char gender;
	int dependents;
	double annualSalary;
	double weeklyPay;


private:
	static int numEmployees;


};






#endif