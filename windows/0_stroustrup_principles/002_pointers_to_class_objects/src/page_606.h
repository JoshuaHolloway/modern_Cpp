#pragma once
#include "vector.h"
namespace page606
{
	//===============================================
	/// Page 606
	vector* f(int s)
	{
		vector q(s);               // allocate a vector on the heap (?)
		vector* p = new vector(s); // allocate a vector on free store
		// fill *p
		return p;
	}
	//===============================================
	void ff()
	{
		vector* q = f(4);
		// use *q
		delete q;
	}
}