#include <iostream>

template <typename T>
class unique_ptr_v1
{
public:
    unique_ptr_v1():_ptr(nullptr) {

    }
    unique_ptr_v1(T *ptr):_ptr(ptr) {

    }
    ~unique_ptr_v1() {
        if (_ptr)
            delete _ptr;
    }
    // copy is not allowed
    unique_ptr_v1(const unique_ptr_v1 &rhs) = delete;
    // copy assign is not allowed
    unique_ptr_v1& operator=(const unique_ptr_v1 &rhs) = delete;

    // move constructor
    unique_ptr_v1(unique_ptr_v1 &&rhs) {
        if (this->_ptr) {
            delete this->_ptr;
        }
        this->_ptr = rhs._ptr;
        rhs._ptr = nullptr;
    }

    void operator=(unique_ptr_v1 &&rhs) {
        if (this->_ptr) {
            delete this->_ptr;
        }
        this->_ptr = rhs._ptr;
        rhs._ptr = nullptr;
    }

    // overload * and ->
    T& operator*() const {
        return *_ptr;
    }

    T* operator->() const {
        return _ptr;     
    }

    // u.release() -> 放弃对指针的控制权，返回指针，将u置空
    T* release() {
        T* oldptr = this->_ptr;
        this->_ptr = nullptr;
        return oldptr;
    }

    // u.reset() -> 释放u指向的对象，将u置空
    void reset() {
        if (_ptr) {
            delete this->_ptr;
        }
        this->_ptr = nullptr;
    }

    // u.reset(q) -> q是内置指针，令u指向这个对象
    void reset(T* q) {
        if (q == nullptr) {
            delete this->_ptr;
        }
        this->_ptr = q;
    }
private:
    T *_ptr;

};

int main() {
    unique_ptr_v1<int> ptr(new int(5));
    std::cout << *ptr << std::endl;

    int *ptr2 = new int(10);
    ptr.reset(ptr2);
    std::cout << *ptr << std::endl;

}
