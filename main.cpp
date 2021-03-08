#include <iostream>
using namespace std;
#include <string>
class   Fraction
{
public:
    Fraction(int num, int den =1) : m_denominator(num), m_numerator(den)
    {}
    operator double() const {
        return (double) ((double)m_numerator / (double)m_denominator);
    }

private:
    int m_numerator;
    int m_denominator;
};

//one argument ctor means you must give at least one parm
class   Fraction1
{
public:
    // 可以将整数转化成对象
    // explict 表示清晰的明确的，告诉编译器不要做额外的动作
    Fraction1(int num, int den = 1) : m_denominator(num), m_numerator(den)
    {}
    //conversion function (转换函数) 可以将对象转化成分数
    operator double() const {
        return (double) ((double)m_numerator / (double)m_denominator);
    }
    //
    Fraction1 operator+(const Fraction1 &f)
    {
        return Fraction1(this->m_denominator + f.m_denominator, this->m_numerator + f.m_numerator);
    }
    Fraction1 operator+(const int &f)
    {
        return Fraction1(this->m_denominator + (this->m_numerator * f), this->m_numerator);
    }

    double showfration() const
    {
        double temp = (this->m_denominator) / (this->m_numerator);
       return temp;
    }
private:
    int m_numerator;
    int m_denominator;
};

int main01() {
    Fraction f(3,5);
    double c;
    c = 4 + f;
    Fraction1 f1(3,5);
    Fraction1 f2 = f + 4;
    cout<<c<<" "<< f2.showfration()<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

// pointer-like classes 关于智能指针
template<class T>
class shared_ptr
{
public:
    T& operator*() const
    { return *px;}

    T* operator->() const
    {
        return px;
    }
    shared_ptr(T* p) : px(p) {

    }
private:
    T* px;
    long* pn;
};
 struct Foo{
     void method(void){
         string a = "menglei";
         cout<<a<<endl;
     }
 };
 int main()
 {

     shared_ptr<Foo> sp(new Foo);
     Foo f(*sp);
     sp->method();
     return 0;
 }