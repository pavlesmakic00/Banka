#ifndef _dinarskiracun_h_
#define _dinarskiracun_h_
#include "Racun.h"
class DinarskiRacun :public Racun
{

	void pisi(ostream& it)const override;

public:

	DinarskiRacun(Osoba* o, string br) :Racun(o, br) {}

	string getValuta()const override{ return "RSD"; }

};
#endif




