// country.h -- use to describe the index of a country

#ifndef COUNTRY_H_
#define COUNTRY_H_
// #include"iostream"
#include"string"

using std::string;

class Country
{
//	std::cin;
//	std::cout;

private:
	float _gdp;
	float _population;
	string _name;

public:
	Country(string name,float gdp,float population);
	void developTheGdp();
	void multiplyThePopulation();
	void getGdp();
	void getPopulation();
	void getPerCapitaGdp();
};


#endif
