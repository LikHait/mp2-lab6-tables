#include "TabRecord.h"

TabRecord::TabRecord()
{
	Key = "";
	Value = NULL;
}

inline TabRecord::TabRecord(string key, Date value)
{
	Key = key;
	Value = value;
}

TabRecord::~TabRecord()
{
}

inline void TabRecord::SetKey(string key)
{
	Key = key;
}

inline string TabRecord::GetKey()
{
	return Key;
}

void TabRecord::SetValue(Date val)
{
	Value = val;
}

Date TabRecord::GetValue()
{
	return Value;
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
