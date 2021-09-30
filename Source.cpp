#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int valueInt; //define what values we are searching for
	int valueInt1;
	int valueInt2;
	int valueInt3;
	int mean;
	int standardDeviation;
	int varience;
	string confirmation;
	string inputFileName = "C:/Users/bobby/source/repos/Project1/inMeanStd.dat";
	string outputFileName = "outMeanStd.dat";
	ifstream inFile;
	ofstream outFile; //locating files

	cout << "Please put four integers into the input file and type 'confirm' when done:"; //prompting user to input numbers into the input file
	cin >> confirmation;
	inFile.open(inputFileName);
	outFile.open(outputFileName); // opening files to input and output
	
	inFile >> valueInt >> valueInt1 >> valueInt2 >> valueInt3; //gathering inputted numbers

	mean = (valueInt + valueInt1 + valueInt2 + valueInt3) / 4;
	cout << "The mean is:" << mean << endl;
	outFile << "The mean is:" << mean << endl; // output mean

	varience = ((mean - valueInt) * (mean - valueInt)) + ((mean - valueInt1) * (mean - valueInt1)) + ((mean - valueInt2) * (mean - valueInt2)) + ((mean - valueInt3) * (mean - valueInt3)) / 4;

	standardDeviation = sqrt(varience);
	outFile << "The standard deviation is:" << standardDeviation;
	cout << "The standard deviation is:" << standardDeviation; // output standard deviation

	inFile.close();
	outFile.close(); //close the input and output files

	return 0;
}