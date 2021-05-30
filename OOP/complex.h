#ifndef __COMPLEX__
#define __COMPLEX__
#include <iostream>
class complex
{
public:
    complex(double r = 0, double i = 0) : re(r), im(r) { }
    // 只读声明为const
    double real() const
    {
        return re;
    }
    double imag() const
    {
        return im;
    }
    // 2. 成员函数
    complex& operator += (const complex &);
    ~complex();
private:
    /* data */
    // 1. 考虑成员
    double re, im;
    
    // 声明为友元，其既非类成员也不受访问权限控制
    friend complex& __doapl(complex *ths, const complex &r);
};

inline complex& __doapl(complex *ths, const complex &r)
{
    ths->re += r.re;
    ths->im += r.im;
    return *ths;

}

inline complex& complex::operator += (const complex &r)
{
    return __doapl(this, r);
}

inline double real(const complex &x)
{
    return x.real();
}

inline double imag(const complex &x)
{
    return x.imag();
}

// +运算符作为非成员函数，理由是两个相加的对象不一定都是complex, 也有可能是double + complex
complex operator + (const complex &a, const complex &b)
{
    return complex(real(a) + real(b), a.imag() + b.imag());
}

complex operator + (double a, const complex &b)
{
    return complex(a + real(b), imag(b));
}

complex operator + (const complex &a, double b)
{
    return complex(real(a)+ b, imag(a));
}
#endif