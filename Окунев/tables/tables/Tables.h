#pragma once
#define MAX_SIZE 80


class Tables
{
protected:
	size_t TabSize;
	size_t DataCount;
public:
	Tables(size_t size = MAX_SIZE);
	virtual ~Tables() = 0;
//методы
	size_t GetSize();
	bool IsFull();
	bool IsEmpty();
};
