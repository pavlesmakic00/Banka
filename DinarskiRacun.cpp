#include "DinarskiRacun.h"
void DinarskiRacun::pisi(ostream& it) const
{
	it << "R:" << this->getBrRacuna() << ":=:" << this->getIznos() << "-" << this->getValuta();
}