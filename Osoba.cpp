#include "Osoba.h"
ostream& operator<<(ostream& it, const Osoba& o)
{
	return it << "O (" << o.ime << "," << o.matPolje << "," << o.datum << ")";
}