#ifndef _racun_h_
#define _racun_h_
#include "Osoba.h"
class Racun
{
	Osoba* vlasnik;
	string brRacuna;
	double iznos = 0;
public:
	Racun(Osoba* o, string br) :vlasnik(o), brRacuna(br) {}

	Racun(const Racun& r) = delete;

	void operator=(const Racun& r) = delete;

	Osoba& getVlasnik() const { return *vlasnik; }
	string getBrRacuna() const { return brRacuna; }
	double getIznos() const { return iznos; }

	virtual string getValuta()const = 0;

	bool prenos(Racun& b, double iznosp);

	Racun& operator+=(double uiznos);

	friend ostream& operator<<(ostream& it, const Racun& r);

protected:

	virtual void pisi(ostream& it)const = 0;
};
#endif

