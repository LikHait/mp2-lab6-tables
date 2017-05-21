#include "LinTab.h"



LinTab::LinTab(size_t size) : Tables(size)
{
	pRecs = new TabRecord[this->TabSize];
}

LinTab::~LinTab()
{
	delete[] pRecs;
}

int LinTab::FindRecord(string key)
{
	if (!IsEmpty)
	{
		for (int i = 0; i < DataCount; i++)
		{
			if (pRecs[i].GetKey == key)
			{
				return i;
			}
		}
	}
	return -1;
}

void LinTab::AddEl(TabRecord rec)
{
	int number = FindRecord(rec.GetKey);
	if (number != -1)
		return;
	if (!IsFull)
	{
		pRecs[DataCount] = rec;
		DataCount++;
	}
}

void LinTab::DelEl(string key)
{
	int number = FindRecord(key);
	if (number == -1)
		return;
	for (int j = number; j < DataCount - 1; j++)
	{
		pRecs[j] = pRecs[j + 1];
	}
	DataCount--;
}

TabRecord* LinTab::GetRecord(string key)
{
	int number = FindRecord(key);
	if (number == -1)
		return;
	else
	{
		return &pRecs[number];
	}
}
