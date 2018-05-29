// country.cpp -- use to describe the index of a country
#include"iostream"
#include"country.h"
#include"string"

Country::Country(string name,float gdp,float population)
{
	_name = name;
	_gdp = gdp;
	_population = population;
}

void Country::developTheGdp()
{
	std::cout << "please enter the GDP developing speed:";
	float speed;
	std::cin >> speed;
	_gdp *= 1 + speed/100;
	std::cout << "now gdp is " << _gdp << std::endl; 
	speed = 0;
}

void Country::multiplyThePopulation()
{
	std::cout << "please enter the population multipling speed:";
	float speed;
	std::cin >> speed;
	_population *= 1 + speed/100;
	std::cout << "now the population is " << _population << std::endl;
	speed = 0;
}

void Country::getGdp()
{
	std::cout << _name << "_gdp = ";
	std::cout << _gdp << std::endl;
}

void Country::getPopulation()
{
	std::cout << "population = ";
	std::cout << _population << std::endl;
}

void Country::getPerCapitaGdp()
{
	std::cout << "per capita gdp =";
	std::cout << _gdp/_population << std::endl;
}
