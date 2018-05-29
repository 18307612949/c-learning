#include"iostream"
#include"country.h"

int main()
{
	// Country countries[5];
	Country countries[1] = {Country("china",82.0,14)};
	countries[0].getGdp();
	// china.getPopulation();
	// china.getPerCapitaGdp();
	// china.developTheGdp();
	// china.multiplyThePopulation();

	return 0;
}
