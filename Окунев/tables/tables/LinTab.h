#pragma once
#include "Tables.h"
#include "TabRecord.h"

class LinTab :
	public Tables
{
private:
	TabRecord* firstRec;
public:
	LinTab(TabRecord first);
	~LinTab();
};

