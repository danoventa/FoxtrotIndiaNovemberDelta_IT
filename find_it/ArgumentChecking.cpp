/* 
	Will be used to check the arguments and parse through specific arguments. It 
	should allow for the argumetns to be out of order, and for multiple arguments
	to be used at the same time. Ideally this will not allow duplicate arguments, 
	and potentially organize the arguments in some way. 

	May or may not use the AdditionalAid class here. 
*/
	
#include "ArgumentChecking.h"

ArgumentChecking::ArgumentChecking(int argc, char** argv)
{
	numArgs = argc;
	arrArgs = argv;
}

ArgumentChecking::~ArgumentChecking()
{

}

vector<string> ArgumentChecking::ParseThroughCommandLine()
{
	vector<string> operations;
	return operations;
}