#include "Racun.h"
bool Racun::prenos(Racun& b, double iznosp)
{
	if (this->iznos >= iznosp) {
		this->iznos -= iznosp;
		b.iznos += iznosp;
		return true;
	}
		return false;

}
Racun& Racun::operator+=(double uiznos)
{
	this->iznos += uiznos;
	return *this;
}
ostream& operator<<(ostream& it, const Racun& r)
{
	r.pisi(it);
	return it;
}
