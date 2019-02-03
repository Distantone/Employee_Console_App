#include "Display.h"
#include <iostream>
#include <iomanip>
#include <string>


Display::Display() {

}

Display::~Display()
{
}

void Display::appInformation(){

cout << "Welcome to your first Object Oriented Program--Employee Class CIS247C, Week 2 Lab" << endl;

}


/*
																											//this was for testing purposes only, could be used later?
void Display::divider() {

cout <<  "**************** " << outputTitle << "****************"  << endl;

}
*/

string Display::setdividerstart() {

 outputTitle = "Start Program";
 return outputTitle;
}

void Display::dividertwo(){

	cout <<  "Employee Information"  << endl;
	cout << "\n_____________________________________________________" << endl;
}