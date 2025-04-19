#pragma once

#include <cstddef>
#include <exception>
#include <stdexcept>
#include <utility>

using std::swap;

template <typename T> class Array {
    std::size_t _size;
    T *_head;

  public:
    ~Array() { delete[] _head; };
    Array() : _size(), _head(){};
    Array(const Array &other) : _size(other._size), _head(new T[_size]) {
        for (std::size_t i(0); i < _size; ++i)
            _head[i] = other._head[i];
    };
    Array(std::size_t size) : _size(size), _head(new T[_size]){};
    Array &operator=(Array &other) throw() {
        ::swap(*this, other);
        return *this;
    };
    void swap(Array &other) throw() {
        ::swap(_size, other._size);
        ::swap(_head, other._head);
    }
    T &operator[](std::size_t idx) throw(std::exception) {
        if (idx >= _size)
            throw std::out_of_range("Index out of range");
        return _head[idx];
    }
    const T &operator[](std::size_t idx) const throw(std::exception) {
        if (idx >= _size)
            throw std::out_of_range("Index out of range");
        return _head[idx];
    }

    std::size_t size() const { return _size; };
};

template <typename T> void swap(Array<T> &lhs, Array<T> &rhs) throw() { lhs.swap(rhs); }
