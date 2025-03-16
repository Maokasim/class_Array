#include <iostream>
#include "array.h"

int main()
{
    Array arr;
    int mini_arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // arr.expandArray(10);
    // std::cout<<"size "<<arr.getSize()<<" elem size  "<<arr.getElemSize()<<std::endl;
    arr.setArray(mini_arr, 10);
    arr.showElements();
    std::cout<<"size "<<arr.getSize()<<" elem size  "<<arr.getElemSize()<<std::endl;
    arr.setValue(1);
    arr.showElements();

    return 0;
}