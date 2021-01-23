#include <iostream>
#include "Base.h"
#include "child.h"


int main()
{
	Base b1{ " Base 1" };
	child c1{ " Child 1" };
	b1.show();
	c1.show();

	Base* b2 = new Base(" Base 2");
	Base* c2 = new child(" Child 2");

	b2->show();
	c2->show();


}

