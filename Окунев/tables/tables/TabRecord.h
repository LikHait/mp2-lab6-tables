#pragma once
#include <string>
#include "../../polinom/polinom.h"
using namespace std;

typedef TPolinom Date; //test

class TabRecord
{
protected:
	string Key;
	string PolinomString;
	Date* pValue;
public:
	TabRecord(const TabRecord &rec);
	TabRecord(string key = "", string polinomStr = "", Date* value = NULL);
	~TabRecord();
//методы
	void SetKey(string key);
	string GetKey();
	void SetPolinString(string str);
	string GetPolinString();
	void SetValue(Date* val);
	Date* GetValue();
//операторы сравнения
	TabRecord& operator=(const TabRecord &rec);
	bool operator==(const TabRecord &tr);
	bool operator> (const TabRecord &tr);
	bool operator< (const TabRecord &tr);

	friend ostream &operator<<(ostream &ostr, const TabRecord &rec);
};
