// stock00.h stock class interface
// vision 00

#ifndef STOCK00_H_
#define STOCK00_H_

#include"string"

class Stock
{
	private:
		std::string _company;
		long _shares;
		double _share_val;
		double _total_val;
		void set_tot()
		{
			_total_val = _shares * _share_val;
		}
	public:
		void acquire(const std::string & co,long n,double pr);
		void buy(long num,double price);
		void sell(long num,double price);
		void update(double price);
		void show();



};

#endif
