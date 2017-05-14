#pragma once
#include <string>
using namespace std;

typedef int Date; //test

class TabRecord
{
protected:
	string Key;
	Date* Value;
public:
	TabRecord(TabRecord rec);
	TabRecord(string key = "", Date* value = NULL);
	~TabRecord();
//методы
	void SetKey(string key);
	string GetKey();
	void SetValue(Date* val);
	Date* GetValue();
//операторы сравнения
	TabRecord& operator=(const TabRecord &rec);
	bool operator==(const TabRecord &tr);
	bool operator> (const TabRecord &tr);
	bool operator< (const TabRecord &tr);
};
