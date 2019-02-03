#include "Benefit.h"
#include <iostream>
#include <iomanip>
#include <string>

Benefit::Benefit()
{
}

Benefit::Benefit(string in_Health, double in_Life, int in_Vacation)
{

healthInsurance = in_Health;
lifeInsurance = in_Life;
vacation = in_Vacation;


}


Benefit::~Benefit()
{
}


void Benefit::displayBenefits(){

	cout << "\nBenefit Information" << endl;
	cout << "_____________________________________________________" << endl;
	cout << "Health Insurance:\t" << healthInsurance << endl;
	cout << "Life Insurance:\t" << lifeInsurance << endl;
	cout << "Vacation:\t" << vacation << endl;
	

}

string Benefit::getHealthInsureance(){
	return healthInsurance;
}

double Benefit::getLifeInsurance(){
	return lifeInsurance;
}

int Benefit::getVacation(){
	return vacation;
}

void Benefit::setHealthInsurance(string in_Health){
	healthInsurance = in_Health;
//cout << "Please enter your Health Insurance: " << endl;
//cin >> healthInsurance;
}

void Benefit::setLifeInsurance(double in_Life){
	lifeInsurance = in_Life;
//cout << "Please enter your Life Insurance: " << endl;
//cin >> lifeInsurance;
}

void Benefit::SetVacation(int in_Vacation){
	vacation = in_Vacation;
//cout << "Please enter your Vacation Days: " << endl;
//cin >> vacation;
}
