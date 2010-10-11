#ifndef INT_H
#define INT_H

class INT
{
    public:
        INT(int y);
        INT();
        operator int () {return x;}
        INT& operator=(INT &y);
        INT& operator=(int y);
        INT operator+(INT &y);
        INT operator-(INT &y);
        INT operator/(INT &y);
        INT operator*(INT &y);
        INT& operator++();
        INT operator++(int);
        INT& operator--();
        INT operator--(int);
        INT& operator+=(INT &y);
        INT& operator-=(INT &y);
        INT& operator+=(int y);
        INT& operator-=(int y);
        int get() { return x;}
    private:
        int x;
};

#endif
