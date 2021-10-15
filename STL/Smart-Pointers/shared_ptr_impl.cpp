/**
 * mini-shared_ptr implementation
 * Author: Hoodythree
 * Time: 2021.10.14
 * 
**/
#include <iostream>
#include <mutex>


template <typename T>
class shared_ptr
{
private:
    T* raw_ptr; // raw pointer
    unsigned int* ref_count; // reference counter, multiple shared_ptrs share a ref_count, so using pointer
    std::mutex *pmutex;

public:
    // constructor
    shared_ptr(): raw_ptr(nullptr), ref_count(new unsigned int(0)), pmutex(new std::mutex) { }
    shared_ptr(T* ptr): raw_ptr(ptr), ref_count(new unsigned int(1)), pmutex(new std::mutex) {

    }

    // destructor
    ~shared_ptr() {
        std::cout << "ptr will be destroyed!" << std::endl;
        __release__();
    };

    // copy constructor
    shared_ptr(const shared_ptr<T> &rhs):raw_ptr(rhs.raw_ptr), ref_count(rhs.ref_count), pmutex(rhs.pmutex) {
        add_refcount();
    }

    // assign copy
    shared_ptr<T>& operator=(const shared_ptr<T> &rhs) {
        if (this->raw_ptr != rhs.raw_ptr) {
            // release this
            __release__();
            this->raw_ptr = rhs.raw_ptr;
            this->ref_count = rhs.ref_count;
            add_refcount();
        }
        return *this;
    }

    // overload -> and *
    T& operator*() const {
        return *raw_ptr;
    }

    T* operator->() const { // -> overloading must return a pointer 
        return &(this->operator*());
    }

    // get reference counter
    unsigned int reference_count() const {
        return *this->ref_count;
    }

private:
    void __release__() {
        bool mutex_del = false;
        pmutex->lock();
        if ((--*ref_count) == 0) {
            if (raw_ptr != nullptr)
                delete raw_ptr;
            delete ref_count;
            mutex_del = true;
        }
        pmutex->unlock();
        if (mutex_del) {
            delete pmutex;
        }
    }

    void add_refcount() {
        pmutex->lock();
        ++(*ref_count);
        pmutex->unlock();
    }

};

class Circle
{
private:
    int _x, _y;
    int _radius;
public:
    Circle(int x, int y, int radius):_x(x), _y(y), _radius(radius) {}
    int get_x() const {
        return _x;
    }
};

void foo(shared_ptr<int> sp) {
    std::cout << "sp: " << sp.reference_count() << std::endl;
}


int main() {
    shared_ptr<int> p(new int(-1));
    std::cout << "p: " << p.reference_count() << std::endl;
    foo(p);
    std::cout << "p: " << p.reference_count() << std::endl;


    std::cout << "--------compound object-----------" << std::endl;
    return 0;
}
