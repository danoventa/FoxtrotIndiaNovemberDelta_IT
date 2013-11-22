#ifndef ARGUMENTCHECKING_H
#define ARGUMENTCHECKING_H

#include <iostream> 
#include <string> 
#include <vector>

using namespace std;

class ArgumentChecking
{
public:
	ArgumentChecking(int argc, char ** argv);
	~ArgumentChecking();
	vector<string> ParseThroughCommandLine();
private:
	int numArgs;
	char **arrArgs;

};
#endif //ARGUMENTCHECKING_H
