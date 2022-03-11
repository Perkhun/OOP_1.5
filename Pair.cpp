#include <iostream>
#include "Pair.h"
#include <sstream> //пот≥к л≥терних р€дк≥в

using namespace std;

Pair Add(Pair l, Pair r)
{
    Pair t;                            
    t.a = l.a + r.a;
    t.b = l.b + r.b;
    return t;
}

void Pair::Read()
{
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;   
    Init(a, b);
}
string Pair::toString()const 
{
    stringstream sout;
    sout << " a = " << a << ", " << "b = " << b << endl;
    return sout.str();
}
void Pair::Display() const
{
   cout << toString();   
}

void Pair::Init(int a, int b)
{
    setA(a);
    setB(b); 
}

/*void Pair::Display() const
{
    cout << a, b << c, d << value();
}

void Pair::Read()
{
    cout << "¬вед≥ть значенн€ а: "; cin >> a;
    cout << "¬вед≥ть значенн€ b: "; cin >> b;
    cout << "¬вед≥ть значенн€ c: "; cin >> c;
    cout << "¬вед≥ть значенн€ d: "; cin >> d;
}

void Pair::Init(int a, int b, int c, int d)
{
    setA(a);
    setB(b);
    setC(c);
    setD(d);
}

void Pair::setA(int a)
{
    this->a = a;
}

void Pair::setB(int b)
{
    this->b = b;
}

void Pair::setC(int c)
{
    this->c = c;
}

void Pair::setD(int d)
{
    this->d = d;
}

int Pair::getA() const
{
    return a;
}

int Pair::getB() const
{
    return b;
}

int Pair::getC() const
{
    return c;
}

int Pair::getD() const
{
    return d;
}

int Pair::value() const
{
    return (a,b) + (c,d);
}

Pair Pair::add(const Pair& l,const Pair& k)
{
    Pair t{};
    t.a,b,c,d = l.a, b + k.c, d;
    return t;
}
*/