#include <iostream>
#include "Pair.h"
#include "Long.h"
#include <Windows.h>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    Pair p, s, g ;

	p.setA(1);
	p.setB(2);
	g.setA(3);
	g.setB(4);
	
	s = Add(p, g);
	cout << "Додавання першої пари: " << s.getA() << endl;
	cout << "Додавання другої пари: " << s.getB() << endl;
	
	// потрібно виразити add, mult, sub
	Long q, w, v;
    w.Read();
	w.Display();

	cout << "Додавання: " << endl;
	v.Init(p);
	q = add(v,w);
	q.Display();
	cout << "Віднімання: " << endl;
	q = sub(v, w);
	q.Display();
	cout << "Множення: " << endl;
	q = mult(v, w);
	q.Display();

	return 0;
}