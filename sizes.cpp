#include <iostream>
using namespace std;

int main()
{
	cout << endl;
	cout << "The size of an int is:\t\t" << sizeof(int)
		<< " bytes." << endl;
	cout << "The size of an short is:\t" << sizeof(short)
		<< " bytes." << endl;
	cout << "The size of an long is:\t\t" << sizeof(long)
		<< " bytes." << endl;
	cout << "The size of an char is:\t\t" << sizeof(char)
		<< " bytes." << endl;
	cout << "The size of an bool is:\t\t" << sizeof(bool)
		<< " bytes." << endl;

	cout << endl;

	cout << "The size of an float is:\t" << sizeof(float)
		<< " bytes." << endl;
	cout << "The size of an double is:\t" << sizeof(double)
		<< " bytes." << endl;

	return 0;
}