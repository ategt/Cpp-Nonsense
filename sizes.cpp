#include <iostream>
#include <stdlib.h>
//#include <unistd.h>
#include <time.h>
#include <dos.h>
#include <string>
using namespace std;

int main()
{
	cout << "The size of an int is:\t\t" << sizeof(int)
		<< "bytes.\n";
	cout << "The size of an short is:\t" << sizeof(short)
		<< "bytes.\n";
	cout << "The size of an long is:\t\t" << sizeof(long)
		<< "bytes.\n";
	cout << "The size of an char is:\t\t" << sizeof(char)
		<< "bytes.\n";
	cout << "The size of an bool is:\t\t" << sizeof(bool)
		<< "bytes.\n";
	cout << "The size of an float is:\t\t" << sizeof(float)
		<< "bytes.\n";
	cout << "The size of an double is:\t" << sizeof(double)
		<< "bytes.\n";

	return 0;
}