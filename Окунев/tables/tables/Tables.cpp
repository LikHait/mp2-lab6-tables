#include "Tables.h"

Tables::Tables(size_t size)
{
	TabSize = size;
}

size_t Tables::GetSize()
{
	return TabSize;
}

bool Tables::IsFull()
{
	return TabSize = DataCount;
}

bool Tables::IsEmpry()
{
	return DataCount = 0;
}