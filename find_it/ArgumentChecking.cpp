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