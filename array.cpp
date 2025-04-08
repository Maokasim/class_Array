#include "array.h"

Array::Array()
{
    m_size = 1;
    m_occupied = 0;
    m_Arrptr = new int[1];
}

Array::~Array()
{
    delete[] m_Arrptr;
}

Array::Array(const Array& copy)
{
    m_Arrptr = new int[m_size];
    memcpy(m_Arrptr, copy.m_Arrptr, sizeof(int)*m_size);
}

Array& Array::operator=(const Array& copy)
{
    if (this == &copy)
        return *this;
   	
    delete [] m_Arrptr;
    m_size = copy.m_size;
    m_occupied = copy.m_occupied;
    m_Arrptr = new int[m_occupied];
    memcpy(m_Arrptr, copy.m_Arrptr, sizeof(int)*m_occupied);
    return *this;

}

Array Array::operator+(const Array & arr) const
{
    Array sum;
    sum.expandArray((m_occupied + arr.m_occupied));
    for(int i = 0; i < m_occupied; i++)
    {
        sum.setValue(m_Arrptr[i]);
    }
    
    for(int i = 0; i < arr.m_occupied; i++)
    {
        sum.setValue(arr.m_Arrptr[i]);
    }
    return sum;
}

Array Array::operator+(const int num) const
{
    Array sum;
    for(int i = 0; i < m_occupied; i++)
    {
        sum.setValue(m_Arrptr[i] + num);
    }
    return sum;
}

Array Array::operator-(const int num) const
{
    Array sum;
    for(int i = 0; i < m_occupied; i++)
    {
        sum.setValue(m_Arrptr[i] - num);
    }
    return sum;
}
bool Array::operator==(const Array & arr) const
{
    if (m_occupied != arr.m_occupied) return false;
    for(int i = 0; i < m_occupied; i++)
    {
        if(m_Arrptr[i] != arr.m_Arrptr[i]) return false;
    }
    return true;
}

bool Array::operator!=(const Array & arr) const
{
    return !(*this == arr);
}

Array Array::operator++(int)
{
    Array tmp;
    tmp = *this;
    *this = tmp + 1;
    return tmp;
}

Array& Array::operator+=(int num)
{
    for(int i = 0; i < m_occupied; i++)
    {
        m_Arrptr[i] += num;
        //std::cout<<m_Arrptr[i]<<std::endl;
    }
    return *this;
}

int& Array::operator[](int index)
{
    if (index > m_occupied)
    {
        return m_Arrptr[0];
    }
    return m_Arrptr[index];
}

std::ostream& operator<<(std::ostream& os, const Array& arr)
{
    for(int i = 0; i < arr.m_occupied; i++)
    {
        os << arr.m_Arrptr[i] <<" ";
    }
    os<<std::endl;
    return os;
}

Array operator+(int num, const Array& arr)
{
    return arr + num;
}

void Array::showElements()
{
    for(int i = 0; i < m_occupied; i++)
    {
        std::cout<<m_Arrptr[i]<<" ";
    }
    std::cout<<std::endl;
}

void Array::expandArray(int size)
{
    int *temp_arr = new int[m_size + size];
    for(int i = 0; i < m_occupied; i++)
    {
        temp_arr[i] = m_Arrptr[i];
    }

    delete[] m_Arrptr;

    m_Arrptr = temp_arr;
    m_size = m_size + size;
}

int Array::getSize()
{
    return m_size;
}

int Array::getElemSize()
{
    return m_occupied;
}

void Array::setValue(int val)
{
    if(m_occupied == m_size) expandArray(1);

    m_Arrptr[m_occupied] = val;
    m_occupied++;
}

void Array::setArray(int *pArr, int size)
{
    if((m_occupied + size) > m_size) expandArray(size);

    for(int i = 0; i < size; i++)
    {
        m_Arrptr[m_occupied + i] = pArr[i];
    }
    m_occupied = m_occupied + size;
}