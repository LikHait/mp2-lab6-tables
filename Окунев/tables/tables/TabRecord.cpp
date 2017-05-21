#include "TabRecord.h"

TabRecord::TabRecord(const TabRecord & rec)
{
	Key = rec.Key;
	PolinomString = rec.PolinomString;
	pValue = new Date(*rec.pValue);
}

TabRecord::TabRecord(string key, string polinomStr, Date* value)
{
	Key = key;
	PolinomString = polinomStr;
	pValue = value;
}

TabRecord::~TabRecord()
{
}

 void TabRecord::SetKey(string key)
{
	Key = key;
}

 string TabRecord::GetKey()
{
	return Key;
}

 void TabRecord::SetPolinString(string str)
 {
	 PolinomString = str;
 }

 string TabRecord::GetPolinString()
 {
	 return PolinomString;
 }

void TabRecord::SetValue(Date* val)
{
	if (val)
		delete pValue;
	pValue = val;
}

Date* TabRecord::GetValue()
{
	return pValue;
}

TabRecord & TabRecord::operator=(const TabRecord & rec)
{
	Key = rec.Key;
	delete pValue;
	pValue = new Date;
	*pValue = *(rec.pValue);
	return *this;
}

bool TabRecord::operator==(const TabRecord & tr)
{
	return Key == tr.Key;
}

bool TabRecord::operator>(const TabRecord & tr)
{
	return Key > tr.Key;
}

bool TabRecord::operator<(const TabRecord & tr)
{
	return Key < tr.Key;
}

ostream & operator<<(ostream & ostr, const TabRecord & rec)
{
	ostr << rec.Key << ' ' << rec.PolinomString;
	return ostr;
}
