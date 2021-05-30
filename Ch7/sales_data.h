#include <string>
#include <iostream>
using std::istream;
using std::ostream;

class Sales_data
{
public:
    // 常量成员函数
    std::string isbn() const
    {
        return bookNo;
    }
    Sales_data() = default;
    Sales_data(const std::string &s): bookNo(s) { }
    Sales_data(istream &is)
    {
        read(is, *this);
    }
    Sales_data& combine(const Sales_data& trans);
    // avg_price并非通用，因此属于类的实现而非接口
private:
    double avg_price() const;
    void Print();
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

double Sales_data::avg_price() const
{
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

Sales_data& Sales_data::combine(const Sales_data& trans)
{
    units_sold += trans.units_sold;
    revenue += trans.revenue;
    return *this;
}

// 非成员函数
Sales_data add(const Sales_data&, const Sales_data&);
// 为了连续输出，传入ostream对象
std::ostream &print(std::ostream&, Sales_data&);
std::istream &read(std::istream&, Sales_data&);
void Sales_data::Print()
{
    std::cout << bookNo << " " << units_sold << " " << revenue << " ";
    double averagePrice = avg_price();
    if (averagePrice != 0.0)
        std::cout << averagePrice << std::endl;
    else
        std::cout << "(no sales)" << std::endl;
}

istream &read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

// 1. io无法被拷贝，因此传入引用
// 2. istream和ostream对象会改变，因此没用const
ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}