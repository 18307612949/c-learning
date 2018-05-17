// stock00.cpp -- implement the Stock class
#include"iostream"
#include"stock00.h"

void Stock::acquire(const std::string & co,long n,double pr)
{
	_company = co;
	if (n < 0)
	{
		std::cout << "stock number can't be negative";
	} else 
	{
		_shares = n;
		_share_val = pr;
		set_tot();
	}
}

void Stock::buy(long num,double price)
{
	if(num < 0)
	{
		std::cout << "stock number can't be negative";
	} else
	{
		_shares += num;
		_share_val = price;
		set_tot();
	}
}

void Stock::sell(long num,double price)
{
	using std::cout;
	if(num < 0)
	{
		cout << "stock number can't be negative";
	} else if(num > _shares)
	{
		cout << "you can't sell more than you have";
	} else
	{
		_shares -= num;
		_share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	_share_val = price;
	set_tot();
}

void Stock::show()
{
	std::cout << "company:" << _company
			  << "shares:" << _shares <<'\n'
			  << "share price:$" << _share_val
			  << "total worth:$" << _total_val << '\n';
}
