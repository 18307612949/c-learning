// usestock00.cpp -- the client program

#include"iostream"
#include"stock00.h"

int main()
{

	Stock fluffy_the_cat;
	fluffy_the_cat.acquire("nanoSmart",20,12.50);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(12,8.0);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(40,100.0);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(31,2000.0);
	fluffy_the_cat.show();
	return 0;
}
