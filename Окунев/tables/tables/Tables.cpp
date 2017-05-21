#include "Tables.h"

Tables::Tables(size_t size)
{
	TabSize = size;
	DataCount = 0;
}

size_t Tables::GetSize()
{
	return TabSize;
}

bool Tables::IsFull()
{
	return TabSize == DataCount;
}

bool Tables::IsEmpty()
{
	return DataCount == 0;
}