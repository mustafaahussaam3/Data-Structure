#include <iostream>

using namespace std ; 

struct Array 
{
    int A[10];
    int size; 
    int length;
};

void Display(Array arr)
{
    printf ("\nElements \n");
    for (int i =0; i < arr.length; i++)
    {
        printf("%d", arr.A[i]);
    }
    printf("\n");
}

void Append (Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++]=x;
}

void Insert(Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length ; i > index ; i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length ++ ;
    }
}

int main ()
{
    Array arr = {{2,3,4,5,6},10,5};
    Display(arr);
    Append(&arr,7);
    Display(arr);
    Insert(&arr,9,8);
    Display(arr);

    return 0 ;
}