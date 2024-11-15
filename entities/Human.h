#pragma once
#include"../Common.h"

class Human {
protected:
	std::string name;
	std::string surname;
	int age=0;
	double cash=0;
public:
	void virtual DisplayInfo() = 0;
	double GetCashValue() const {
		return this->cash;
	}
};