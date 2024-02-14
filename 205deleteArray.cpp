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

int Delete (Array * arr, int index)
{
    int x = 0 ;
    x = arr->A[index];
    if (index >= 0 && index < arr->length)
    {
      for (int i = index; i < arr->length -1 ; i++)
      {
        arr->A[i] =  arr->A[i+1];
      }
      arr->length -- ;
      return x;
    }
    return 0;
}

int main ()
{
    Array arr = {{2,3,4,5,6},10,5};
    Display(arr);
    // Append(&arr,7);
    // Display(arr);
    // Insert(&arr,9,8);
    // Display(arr);
    int x = Delete(&arr, 3) ;
    cout << x << endl;
    Display(arr);

    return 0 ;
}