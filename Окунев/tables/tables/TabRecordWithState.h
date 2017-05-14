#pragma once
#include "TabRecord.h"

#define Removed -1
#define Clear 0
#define Busy 1

class TabRecordWithState :
	public TabRecord
{
private:
	int State;
public:
	TabRecordWithState(string key, Date* value , int state = Clear);
	~TabRecordWithState();
//состояние ячейки
	int GetState();
	void SetRemoved();
	void SetBusy();
};

