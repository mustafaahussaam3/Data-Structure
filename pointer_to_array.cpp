/*
    Pointer is a address variable that is meant for storing address of not data
    itself
        • They are used for indirect access of data
        • For a program to use heap memory , pointers is used
        • To access heap memory and resources outside the main memory like
          internet, keyboard , monitor etc pointers is used
        • Pointers are also used for parameter passing

CreatedBy:Mustafa Hussam Eldin
*/

#include <iostream>
#include <stdlib.h>

int main(){

    //whenver you declare anything in your program it will be declared inside the 
    //stalk of the main function
    int *p; //decleration
  //  int A[5] =  {2,4,6,8,10}; //this array is created inside the stack 
    p = (int*)malloc(5*sizeof(int)); //create array in heap memory 
  // C++ p =new int[5]; // it will automatically assign p and return integer pointer
  //  p = A;  //initalize
    p[0]=1; p[1]=2; p[2]=3; p[3]=4; p[4];

  //   std::cout<<"&p " << &p <<std::endl << "&A " << &A <<std::endl<< 
  //                 "p " << p <<std::endl<< "A " << A << std::endl;

    std::cout<< "so, we can use p[i] or A[i], pointer name can act as array name, no worries"<<std::endl;

    for (int i = 0;i < 5;i++){
    std::cout << p[i] << std::endl;
    }

    free(p); // deallocating the heap memory 
  //  delete []p; deallocating in cpp

    return 0;
}