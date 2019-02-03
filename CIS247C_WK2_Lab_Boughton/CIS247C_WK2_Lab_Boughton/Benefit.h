#include <iostream>
#include <string>

using namespace std;

#pragma once
class Benefit
{
public:
	//default constructor
	Benefit();
	//overloaded constructor
	Benefit(string in_Health, double in_Life, int in_Vacation); 
		~Benefit();

		void displayBenefits();
		string getHealthInsureance();
		double getLifeInsurance();
		int getVacation();





		void setHealthInsurance(string in_Health);
		void setLifeInsurance(double in_Life);
		void SetVacation(int in_Vacation);

private:
	string healthInsurance;
	double lifeInsurance;
	int vacation;
};

