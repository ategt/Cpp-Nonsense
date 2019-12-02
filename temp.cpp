#include <iostream>
using namespace std;
//namespace std
	float convertToCelsius(float temp);
	float convertToFahrenheit(float temp);

	int main()
	{
		float temperatureFahrenheit, temperatureCelsius;

		cout << "Please enter a temperature in Fahrenheit: ";
		cin >> temperatureFahrenheit;

		temperatureCelsius = convertToCelsius(temperatureFahrenheit);

		cout << "\nHere's the temperature in Celsius: ";

		cout << temperatureCelsius << endl;

		return 0;
	}

	float convertToFahrenheit(int celsius) {
		return 0;
	}

	float convertToCelsius(int fahrenheit) {
		return ((fahrenheit - 32) * 5 ) / 9;
	}

// {
// }

// int main(){
// 	return std::main();
// }