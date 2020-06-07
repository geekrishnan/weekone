
#include <iostream>
#include <fstream>
#include <string>
#include "weekone.h"
using namespace std;

weekone::weekone()
{

	//variables to read the integers in txt
	int_1 = 0;
	int_2 = 0;
	int_3 = 0;
	int_4 = 0;
	int_5 = 0;
	//variables to read the double values in txt
	double_1 = 0;
	double_2 = 0;
}
void weekone::readmyfile(string myfile)
{
	int i = 0;
	ifstream file;

	//opening the correct file 
	if (myfile.compare("default") == 0)
	{
		file.open("C:\\Users\\gowri\\Documents\\SampleTxt.txt", ifstream::in);
	}
	else if (myfile.compare("default") < 0 || myfile.compare("default") > 0)
	{
		file.open(myfile, ifstream::in);
	}
	else
	{
		std::cout << "incorrect input";
	}

	//testing if file opened and reading it 
	if (file.is_open())
	{
		//reading line one
		file >> int_1;
		file >> int_2;
		file >> int_3;
		file >> int_4;

		//reading line 2
		file >> double_1;
		file >> double_2;
		file >> int_5;

		//reading line 3
		file.ignore(1, '\n');

		std::getline(file, name);

		//reading last line 
		while (file.eof() != true && i < 10)
		{
			file >> sister[i];
			i++;
		}

		file.close();


		//output to console 
		std::cout << int_1 << " " << int_2 << " " << int_3 << " " << int_4 << '\n';
		std::cout << double_1 << " " << double_2 << " " << int_5 << endl;
		std::cout << name << endl;

		for (i = 0; i < 10; i++)
		{
			std::cout << sister[i] << " ";
		}
		std::cout << '\n';



	}
	else
	{
		std::cout << "file failed to open";
	}
}

void weekone::overwritemyfile(string filelocation)
{
	
	//open default, or inpput file location or incorrect input
	if (filelocation.compare("default") == 0)
	{
		ofstream file("C:\\Users\\gowri\\Documents\\SampleTxt.txt", ios_base::trunc);

		//test to see if file opneed 
		if (file.is_open())
		{
			file << "this file has been overwritten";
			file.close();
			cout << "file has been overwritten" << '\n';
		}
		else
		{
			std::cout << "file failed to open";
		}
	}
	else if (myfile.compare("default") < 0 || myfile.compare("default") > 0)
	{
		ofstream file(filelocation, ios_base::trunc);

		//test to see if file opneed 
		if (file.is_open())
		{
			file << "this file has been overwritten";
			file.close();
			cout << "file has been overwritten" << '\n';
		}
		else
		{
			std::cout << "file failed to open";
		}
	}
	else
	{
		std::cout << "incorrect input";
	}

}
void weekone::appendmyfile(string filelocation)
{
	//open default, or inpput file location or incorrect input
	if (filelocation.compare("default") == 0)
	{
		ofstream file("C:\\Users\\gowri\\Documents\\SampleTxt.txt", ios_base::app);

		//test to see if file opneed 
		if (file.is_open())
		{
			file << "this file has been appended";
			file.close();
			cout << "file has been appended" << '\n';
		}
		else
		{
			std::cout << "file failed to open";
		}
	}
	else if (myfile.compare("default") < 0 || myfile.compare("default") > 0)
	{
		ofstream file(filelocation, ios_base::app);

		//test to see if file opneed 
		if (file.is_open())
		{
			file << "this file has been appended";
			file.close();
			cout << "file has been appended" << '\n';
		}
		else
		{
			std::cout << "file failed to open";
		}
	}
	else
	{
		std::cout << "incorrect input";
	}

}

void weekone::createnewfile()
{
	ofstream file("newfile.txt", ios_base::in);

	if (file.is_open())
	{
		file << "creating a new file";
		file.close();
		cout << "file has been created" << '\n';
	}
	else
	{
		std::cout << "file failed to open";
	}
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
