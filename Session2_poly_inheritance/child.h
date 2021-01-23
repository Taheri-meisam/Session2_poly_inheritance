#pragma once
#include <iostream>
#include <string>
#include "Base.h"

class child : public Base
{
public:
	std::string Myname;
	child();
	child(std::string name) : Myname{ name } {

	}

	virtual void show() override;
};

