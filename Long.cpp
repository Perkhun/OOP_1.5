#include "Long.h"
#include <iostream>
#include <sstream>
#include "Pair.h"
using namespace std;

void Long::Init(Pair pair)
{
    setPair(pair);
}

void Long::Read()
{
    Pair p;
    cout << endl;
    cout << "Pair: " << endl;
    p.Read();
    Init(p);
}

void Long::Display() const
{
    cout << " pair: " << endl;
    pair.Display();
    cout << endl;
}
string Long::toString()const
{
    stringstream sout;
    cout << endl;
    cout << " pair: " << endl;
    pair.Display();
    return sout.str();
}

Long add(Long l, Long r)
{
    Long t;
    t.pair = Add(l.pair, r.pair);
    return t;
}

Long mult(Long l, Long r)
{
    Long f;
    f.pair.setA(l.pair.getA() * r.pair.getA());
    f.pair.setB(l.pair.getB() * r.pair.getB());
    return f;
}

Long sub(Long l, Long r)
{
    Long h;
    h.pair.setA(l.pair.getA() - r.pair.getA());
    h.pair.setB(l.pair.getB() - r.pair.getB());
    return h;
}
