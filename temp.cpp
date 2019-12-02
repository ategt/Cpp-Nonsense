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

		return 0;
	}

	float convertToFahrenheit(float celsius) {
		return 0;
	}

	float convertToCelsius(float fahrenheit) {
		return ((fahrenheit - 32) * 5 ) / 9;
	}
}

int main(){
	return std::run();
}