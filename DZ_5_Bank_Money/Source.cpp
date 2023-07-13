#include "Source.h"


Money::Money(uint32_t rub, const std::string& panny) : _rub{rub}
{
	//00 - куда
	//32 - откуда
	//2 - склько знаков
	memcpy(_panny, panny.c_str(), 2);
}

Money::Money(Money& money)
{
	if (this != &money)
	{
		_rub = money._rub;
		//_panny = money._panny;
	}
}

Money& Money::operator+(const Money& money)
{
	std::string s{};
	std::string s2{};

	for (int i = 0; i < 2; ++i)
		s += _panny[i];

	for (int i = 0; i < 2; ++i)
		s2 += money._panny[i];
	
	int penny = std::atoi(s.c_str());

	int penny2 = std::atoi(s2.c_str());

	int summaPenny = penny + penny2;
	
	int summaRub = _rub + money._rub;

	int multiplier = summaPenny / 100;

	summaRub += multiplier;

	if (summaPenny >= 100)
		summaPenny -= 100 * multiplier;

	
}

void Money::Print()
{ 
	std::cout << _rub<< ','; 
	for (int i = 0; i < 2; ++i)
		std::cout<< _panny[i];
}
