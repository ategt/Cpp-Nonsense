#include <iostream>

namespace std
{
	float convertToCelsius(float);
	float convertToFahrenheit(float);

	int run()
	{
		float temperatureFahrenheit, temperatureCelsius;

		cout << "Please enter a temperature in Fahrenheit: ";
		cin >> temperatureFahrenheit;

		temperatureCelsius = convertToCelsius(temperatureFahrenheit);

		cout << "\nHere's the temperature in Celsius: ";

		cout << temperatureCelsius << endl;

		cout << "\nHere's the temperature in Fahrenheit: ";

		cout << convertToFahrenheit(temperatureCelsius) << endl;

		cout << endl;
		cout << "Performing self check..." << endl;

		if ( (int) convertToFahrenheit(temperatureCelsius) == (int) temperatureFahrenheit ) {
			cout << "Self passed." << endl;
		} else {
			cout << "Self Failed!!!" << endl;
		}

		return 0;
	}

	float convertToFahrenheit(float celsius) {
		return ((celsius * 9) / 5 ) + 32;
	}

	float convertToCelsius(float fahrenheit) {
		return ((fahrenheit - 32) * 5 ) / 9;
	}
}

int main(){
	return std::run();
}