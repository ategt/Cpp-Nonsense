#include <iostream>
#include <windows.h>

namespace std
{
	int run()
	{
		cout << "Begining Sleep...";

		Sleep(4000);

		cout << "Done" << endl;

		return 0;
	}
}

int main(){
	return std::run();
}