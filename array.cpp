#include "array.h"
#include <iostream>

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
    if(m_occupied == m_size) expandArray(m_size + 1);

    m_Arrptr[m_occupied] = val;
    m_occupied++;
}

void Array::setArray(int *pArr, int size)
{
    if((m_occupied + size) > m_size) expandArray(m_occupied + size);

    for(int i = 0; i < size; i++)
    {
        m_Arrptr[m_occupied + i] = pArr[i];
    }
    m_occupied = m_occupied + size;
}