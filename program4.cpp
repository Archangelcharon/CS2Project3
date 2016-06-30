#include <cstdlib>
#include "Towers.h"
#include "MyIntStack.h"
#include "Towers.cpp"
#include "MyIntStack.cpp"
#include <iostream>
using namespace std;

/////// DO NOT CHANGE THIS FUNCTION ////////
int main(int argc, char* argv[]) {
	int numDisk = atoi(argv[1]);	
	Towers<int> t(numDisk);
	t.start();	
	return 0;
}
