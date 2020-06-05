// readingtxtfiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //version 3
    int int_1, int_2, int_3, int_4, int_5;
    int i = 0;
    double double_1, double_2;
    char name[50];
    char eol;
    string sister[10];
    string myname; //object

    ifstream  myfile("C:\\Users\\gowri\\Documents\\SampleTxt.txt", ifstream::in);

    if (myfile.is_open())
    {
        myfile >> int_1;
        myfile >> int_2;
        myfile >> int_3;
        myfile >> int_4;

        myfile >> double_1;
        myfile >> double_2;
        myfile >> int_5;

        myfile.ignore(1, '\n');
        std::getline(myfile, myname);

        while (myfile.eof() != true && i < 10)
        {
            myfile >> sister[i];
            i++;
        }

        myfile.close();

        //writing to console
        cout << int_1 << " " << int_2 << " " << int_3 << " " << int_4 << '\n';
        cout << double_1 << " " << double_2 << " " << int_5 << endl;
        cout << myname << endl;

        for (i = 0; i < 10; i++)
        {
            cout << sister[i] << " ";
        }

        //creating and writing to a text file
        ofstream fout("output.txt");
        fout << int_1 << " " << int_2 << " " << int_3 << " " << int_4 << '\n';
        fout << double_1 << " " << double_2 << " " << int_5 << endl;
        fout << myname << endl;

        for (i = 0; i < 10; i++)
        {
            fout << sister[i] << " ";
        }

        fout.close();

        //appending to a text file
        ofstream outfile;

        outfile.open("output.txt", ios_base::app);
        outfile << "Data";
        outfile.close();

        //overwriting a file
        ofstream outf;

        outf.open("C:\\Users\\gowri\\Documents\\OutputTxt.txt", ios::trunc);
        outf << "overwritten";
        outf.close();

    }
    else
    {
        cout << "file did not open";
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


