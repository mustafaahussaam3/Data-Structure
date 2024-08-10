#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a) { printf("Value of a is %d\n", a); }

int main()
{
    // fun_ptr is a pointer to function fun()
    void (*fun_ptr)(int) = &fun;

    /* The above line is equivalent of following two
    void (*fun_ptr)(int);
    fun_ptr = &fun;
    */
    // Invoking fun() using fun_ptr
    (*fun_ptr)(10);
    return 0;
}
/*
Why do we need an extra bracket around function pointers like fun_ptr in above example?
If we remove bracket, then the expression “void (*fun_ptr)(int)” becomes “void *fun_ptr(int)” 
which is declaration of a function that returns void pointer. See following post for details.

*/