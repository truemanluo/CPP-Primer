#include <string>
using std::string;

class Person
{
public:
    Person(string &n, string &a): name(n), address(a) { }
    string getName() const
    {
        return name;
    }
    string getAdd() const
    {
        return address;
    }
private:
    string name;
    string address;
};


int main()
{
    return 0;
}