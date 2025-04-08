#include <iostream>
#include "array.h"

int main()
{
    Array arr1;
    Array arr2;
    Array sum;
    Array a;
    // Array arr_arr[10];
    int mini_arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // arr_arr[1].setArray(mini_arr, 10); 
    // arr_arr[1].showElements();
    // arr.expandArray(10);
    // std::cout<<"size "<<arr1.getSize()<<" elem size  "<<arr1.getElemSize()<<std::endl;
    //arr1.setArray(mini_arr, 10);
    // arr1.showElements();
    arr2.setArray(mini_arr, 10);
    std::cout<<((arr2+=2)+=7);
    //std::cout<<arr2;
    //std::cout << 2 + arr1;
    //std::cout<<arr1;
    //std::cout<<"eq "<<(arr1!=arr2)<<std::endl;
    //std::cout<<"elem "<<arr1[2]<<std::endl;
    //std::cout<<arr2;
    //arr2.showElements();
    // // std::cout<<"size "<<arr2.getSize()<<" elem size  "<<arr2.getElemSize()<<std::endl;
    // arr2.showElements();
    //arr2 = arr2 - 1;
    // arr2.showElements();
    // std::cout<<"eq "<<(arr1!=arr2)<<std::endl;
    // sum = (arr1 + arr2);
    // std::cout<<"size "<<sum.getSize()<<" elem size  "<<sum.getElemSize()<<std::endl;
    // sum.showElements();
    // std::cout<<"size "<<arr1.getSize()<<" elem size  "<<arr1.getElemSize()<<std::endl;
    // arr1.setValue(1);
    // arr1.showElements();

    return 0;
}