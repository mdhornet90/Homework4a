#include "INT.h"

INT::INT(int y)
{
    x = y;
}
INT::INT()
{
    x;
}

INT& INT::operator=(INT &y)
{
    x = y.get();
    return *this;
}

INT& INT::operator=(int y)
{
    x = y;
    return *this;
}
INT INT::operator+(INT &y)
{
    return INT(x + y.get());
}

INT INT::operator-(INT &y)
{
    return INT(x - y.get());
}

INT INT::operator/(INT &y)
{
    return INT(x / y.get());
}

INT INT::operator*(INT &y)
{
    return INT(x * y.get());
}

INT& INT::operator++()
{
    x++;
    return *this;
}

INT INT::operator++(int)
{
    x++;
    return *this;
}

INT& INT::operator--()
{
    x--;
    return *this;
}

INT INT::operator--(int)
{
    x--;
    return *this;
}

INT& INT::operator+=(INT &y)
{
    x += y.get();
    return *this;
}

INT& INT::operator+=(int y)
{
    x += y;
    return *this;
}

INT& INT::operator-=(INT &y)
{
    x -= y.get();
    return *this;
}

INT& INT::operator-=(int y)
{
    x -= y;
    return *this;
}
