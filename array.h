#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <cstring>

class Array
{
    int m_size;
    int m_occupied;
    int grow_times;
    int* m_Arrptr;

    public:
        Array();
        ~Array();
        Array(const Array& copy);
        Array& operator=(const Array& other);
        Array operator+(const Array & arr) const; 
        Array operator+(int num) const; 
        Array operator-(int num) const; 
        bool operator==(const Array & arr) const; 
        bool operator!=(const Array & arr) const; 
        Array operator++(int); 
        Array& operator+=(int num); 
        int& operator[](int index);
        friend std::ostream& operator<<(std::ostream& os, const Array& arr);
        friend Array operator+(int num, const Array& arr);
        void showElements();
        void expandArray(int size);
        int getSize();
        int getElemSize();
        void setValue(int val);
        void setArray(int *pArr, int size);
};

#endif