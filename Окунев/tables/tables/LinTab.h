#pragma once
#include "Tables.h"
#include "TabRecord.h"

class LinTab :
	public Tables
{
private:
	TabRecord* pRecs;
public:
	LinTab(size_t size = MAX_SIZE);
	~LinTab();

	int FindRecord(string key);
	void AddEl(TabRecord rec);
	void DelEl(string key);
	TabRecord* GetRecord(string key);
};

