#pragma once
#include <string>
using namespace std;

class Pair
{
private:
	int  a, b;
public:
	int getA() const { return a; }
	int getB() const { return b; }
	

	void setA(int a) { this->a = a; }
	void setB(int b) { this->b = b; }
	
	 
	
	void Read();
	void Display() const;
	string toString()const;
	void Init(int a, int b);
	friend Pair Add(Pair l, Pair r);
	
/*private:
	int a, b, c, d;
public:
	void Display() const;
	void Read();
	void Init(int a, int b, int c, int d);

	void setA(int a);
	void setB(int b);
	void setC(int c);
	void setD(int d);

	int getA() const;
	int getB() const;
	int getC() const;
	int getD() const;
	int value() const;
	Pair add(const Pair& l, const Pair& k);*/
};

