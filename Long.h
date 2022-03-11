#pragma once
#include <iostream>
#include "Pair.h"
#include <string>
using namespace std;

class Long
{
private: 
	Pair pair;
public:
	Pair getPair()const { return pair; }
	void setPair(Pair pair) { this->pair = pair; }
	
	void Init(Pair pair);
	void Read();
	void Display()const;
	string toString()const;

	friend Long add(Long l, Long r);
	friend Long mult(Long l,Long r);
	friend Long sub(Long l, Long r);
};

