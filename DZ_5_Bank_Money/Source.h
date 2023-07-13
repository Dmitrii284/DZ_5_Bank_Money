#pragma once
#ifndef _SOURCE_H_
#define _SOURCE_H_

#include<iostream>
#include<cstdint>
#include<string>
#include<stdio.h>

class Money
{
private:
	uint32_t _rub{ 0 };
	uint8_t _panny[2];
public:
	Money(uint32_t rub, const std::string& panny);
	Money (Money& money);
	Money& operator+(const Money& money);


	

	void Print();
	
};

#endif // !_SOURCE_H_