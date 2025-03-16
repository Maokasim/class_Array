#ifndef ARRAY_H
#define ARRAY_H

class Array
{
    int m_size;
    int m_occupied;
    int grow_times;
    int* m_Arrptr;

    public:
        Array();
        ~Array();
        void showElements();
        void expandArray(int size);
        int getSize();
        int getElemSize();
        void setValue(int val);
        void setArray(int *pArr, int size);
};

#endif