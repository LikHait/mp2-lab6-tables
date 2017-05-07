#pragma once
#define MAX_SIZE 80


class Tables
{
public:
	Tables();
	virtual ~Tables() = 0;
//методы
	virtual int AddEl() = 0;
	virtual int DelEl() = 0;
};
