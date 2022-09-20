#include "Datum.h"
bool operator==(const Datum& d1, const Datum& d2)
{
	return d1.dan == d2.dan && d1.mesec == d2.mesec && d1.godina==d1.godina;
}
ostream& operator<<(ostream& it, const Datum& d)
{
	return it << d.dan <<"."<< d.mesec <<"."<< d.godina<<".";
}
bool operator!=(const Datum& d1, const Datum& d2)
{
	return d1.dan != d2.dan || d1.mesec != d2.mesec || d1.godina != d1.godina;
}