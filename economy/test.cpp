#include"iostream"
#include"country.h"

int main()
{
	Country china(14.0,82.0);
	china.getGdp();
	china.getPopulation();
	china.getPerCapitaGdp();
	china.developTheGdp();
	china.multiplyThePopulation();

	return 0;
}
