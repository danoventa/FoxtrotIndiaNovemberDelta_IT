/* 	
	@Author: 	Daniel A. Noventa
	@ACCC ID:	dflore22
	@UIN:		652379250
	
	Main Checks arguments through the Argument Checking which will return a  vector of stringSize. 
	The main will attempt to parse the strings to ints, if they are not, then the main will check
	
	FindOperations Class will run the operations from the main file. The operations will be decided
	byt the user via the command line arguments. If no arguments are given in the command line, the 
	print argument will be the default. Will print out a zero if there are no error. More data in 
	the help file, when giving the command line argument for Help.  
*/

#include <iostream>
#include "ArgumentChecking.h"
#include "FindOperations.h"
#include "AdditionalAid.h"

using namespace std;

int main (int argc, char **argv)
{
	ArgumentChecking *arch = new ArgumentChecking(argc, argv);
	AdditionalAid *aidwith = new AdditionalAid();
	FindOperations *findby = new FindOperations();

	cout << "Author:\t\tDaniel A. Noventa\nACCC ID:\tdflore22\nUIN:\t\t652379250\n";

	vector<string> doop_v = arch->ParseThroughCommandLine();

	for (int i = 1; i <= doop_v.size(); ++i)
	{
		switch (atoi(doop_v[i].c_str()))
		{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
				break;
			case 11:
				break;
			case 12:
				break;
			case 13:
				break;
			case 14:
				break;
			case 15:
				break;
			case 16:
				break;
			case 17:
				break;
			case 18:
				break;
			case 19:
				break;
			case 20:
				break;
			case 21:
				break;
			case 22:
				break;
			case 23:
				break;
			case 24:
				break;
			default:
				cout << "Uho... somethings not right O_o\n";
				break;
		}
	}
	return 0;
}

