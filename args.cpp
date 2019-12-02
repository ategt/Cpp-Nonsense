#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Argc value is " << argc << endl;

	cout << "Argument array pointer is " << argv << endl;

	for (int i = 0; i < sizeof(*argv) - 1; ++i)
	{
		cout << i << ":" << argv[i] << endl;
	}

	return 0;
}