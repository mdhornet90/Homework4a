#include "INT.h"

INT operator=(INT &y)
{
    x = y.get();
    return x;
}
