#include "TabRecordWithState.h"


TabRecordWithState::TabRecordWithState(string key , Date* value, int state) : TabRecord(key, value)
{
	State = state;
}


TabRecordWithState::~TabRecordWithState()
{
}

int TabRecordWithState::GetState()
{
	return State;
}

void TabRecordWithState::SetRemoved()
{
	State = Removed;
}

void TabRecordWithState::SetBusy()
{
	State = Busy;
}