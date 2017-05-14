#include "TabRecord.h"

 TabRecord::TabRecord(string key, Date* value)
{
	Key = key;
	Value = value;
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

void TabRecord::SetValue(Date* val)
{
	Value = val;
}

Date* TabRecord::GetValue()
{
	return Value;
}

TabRecord & TabRecord::operator=(const TabRecord & rec)
{
	Key = rec.Key;
	delete Value;
	Value = new Date;
	*Value = *(rec.Value);
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

