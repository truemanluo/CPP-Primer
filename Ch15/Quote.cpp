#include <string>
#include <istream>
#include <iostream>
using std::string;
using std::ostream;


class Quote {
public:
    virtual ~Quote() = default;
    Quote() = default;
    Quote(const string &book, double sale_price): bookNo(book), price(sale_price) {

    }
    string isbn() const {
        return bookNo;
    }
    virtual double net_price(size_t n) const {
        return n * price;
    }

private:
    string bookNo;
protected:
    double price = 0.0;
};


class Bulk_quote : public Quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string&, double, std::size_t, double);    

    // 覆盖基类的价格计算方式
    double net_price(std::size_t n) const override;

protected:
    std::size_t min_qty = 0; // 适用于折扣的最低购买量
    double discount = 1.0; // 折扣数
};

Bulk_quote::Bulk_quote(const std::string& id, double price, std::size_t pur_sz, double disc): Quote(id, price), min_qty(pur_sz), discount(disc) {

};

class Bulk_quote_lim : public Bulk_quote {
public:
    Bulk_quote_lim() = default;
    Bulk_quote_lim(const std::string&, double, std::size_t, double);    

    // 覆盖基类的价格计算方式
    double net_price(std::size_t n) const override;

private:
    std::size_t max_qty = 100; // 适用于折扣的最低购买量
};

Bulk_quote_lim::Bulk_quote_lim(const std::string& id, double price, std::size_t pur_sz, double disc): Bulk_quote(id, price, pur_sz, disc) {

};

double Bulk_quote::net_price(std::size_t n) const {
    if (n >= min_qty) {
        return n * price * discount;
    }
    else {
        return n * price;
    }
}

double Bulk_quote_lim::net_price(std::size_t n) const {
    if (n < min_qty) {
        return n * price;
    }
    else if (n <= max_qty) {
        return n * price * discount;
    }
    else {
        return (n-max_qty) * price + max_qty * price * discount;
    }
}

double print_total(ostream& os, std::size_t num, const Quote &q) {
    double total = q.net_price(num);
    os << "isbn: " << q.isbn() << " #total: " << total << std::endl;
    return total;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        std::cerr << "usage: size" << std::endl;
        exit(EXIT_FAILURE);
    }
    Quote item("123", 3.0);
    print_total(std::cout, 5, item);
    std::cout << "----------Bulk_quote------------" << std::endl;
    Bulk_quote bq("234", 4.0, 10, 0.2);
    print_total(std::cout, std::stoull(argv[1]), bq);
    std::cout << "----------Bulk_quote_lim------------" << std::endl;

    Bulk_quote_lim bql("2340", 4.0, 10, 0.2);
    print_total(std::cout, std::stoull(argv[1]), bql);
    return 0;
}

