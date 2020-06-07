#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class weekone
{
	public:
		//variables to read the integers in txt
		int int_1;
		int int_2;
		int int_3;
		int int_4;
		int int_5;
		//variables to read the double values in txt
		double double_1;
		double double_2;
		//read the line of just characters including white space 
		string name;
		//read each word individual
		string sister[10];
		//
		string myfile; 

		// functions 
		weekone(); 
		void readmyfile(string myfile); 
		void overwritemyfile(string myfile); 
		void appendmyfile(string myfile); 
		void createnewfile();
		 
		

};
