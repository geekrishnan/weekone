// weekone.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include "weekone.h"
using namespace std;

int main()
{
	string location;

	//declaring instance 
	weekone newInstance;

	//reading file 
	cout << "enter file name/location or type defult for the default file to read the file" << '\n';
	cin >> location;
	newInstance.readmyfile(location);

	//overwrite 
	cout << "enter file name/location or type defult for the default file to overwrite the file" << '\n';
	cin >> location;
	
	newInstance.overwritemyfile(location);

	//appending 
	cout << "enter file name/location or type defult for the default file to append the file" << '\n';
	cin >> location;

	newInstance.appendmyfile(location);

	//create new file 
	cout << "creating new file"; 

	newInstance.createnewfile();

}
