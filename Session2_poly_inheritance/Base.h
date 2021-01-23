#pragma once
#include <iostream>
#include <string>

class Base
{

public:
	std::string Myname;
	Base();
	Base(std::string name) : Myname{ name } {

	}

	virtual void show();
};

