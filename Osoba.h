#ifndef _osoba_h_
#define _osoba_h_
#include <iostream>
#include "Datum.h"
using namespace std;
class Osoba
{
	string ime;
	string matPolje;
	Datum datum;
public:
	Osoba(string i, string m, const Datum& d) :ime(i),matPolje(m),datum(d){}

	Osoba(const Osoba& o) = delete;
	void operator=(const Osoba& o) = delete;

	string getIme() const { return ime; }
	Datum getDatum() const { return datum; }
	string getMatPolje() const { return matPolje;}

	friend ostream& operator<<(ostream& it, const Osoba& o);
};
#endif
