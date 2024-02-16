/*
    Remember That you can copy an entair whole array without for loop
*/

#include <iostream>

using namespace std ; 

void swap ( int *x, int *y)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}

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

int LinearSearch ( Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if ( key == arr->A[i])
        {
            swap (&arr->A[i], &arr->A[i-1]); // transposition method
            // swap (&arr->A[i],&arr->A[0]);    // Move to Head method 
            return i;
        }
    }
    return -1;
}

int BinarySearch ( Array arr, int key)
{
    int l = 0;
    int mid;
    int h ;
    h =(arr.length) -1; 
    while (l <= h)
    {
        mid =(l + h)/2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            h = mid - 1;
        }
        else 
        {
            l = mid + 1;
        }
    }
    return -1;
}

int Get (Array arr, int index)
{
    if (index >=0 && index < arr.length)
    {
        return arr.A[index];
    }
    return -1;
}

void Set(Array *arr, int key, int index)
{
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = key;
    }
}

int Max(Array arr)
{
    int max = arr.A[0];

    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

int Min(Array arr)
{
    int min = arr.A[0];

    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
    }
    return min;
}

int Sum (Array arr)
{
    int total = 0;
    for (int i = 0; i < arr.length; i++)
    {
        total = total + arr.A[i];
    }
    return total;
}

float Avg(Array arr)
{
  
    return (float)Sum(arr)/(arr.length);
}

void Reverse (Array *arr)
{
    for (int i = 0, j = arr->length - 1; i<j ;i++, j--)
    {
        int temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

void Reverse_Swap (Array *arr)
{
    for (int i = 0, j = arr->length - 1; i<j ;i++, j--)
    { 
        swap(&arr->A[i], &arr->A[j]) ;
    }
}

void Reverse2 (Array *arr)
{
    int *B;
    B = (int*)malloc(arr->length*sizeof(int));
    for (int i = arr->length -1 , j = 0; i >=0 ; i--, j++)
    {
        B[j] = arr->A[i];
    }

    for (int i = 0; i < arr->length -1; i++)
    {
        arr->A[i] = B[i];
    }
}

void insertSort(Array *arr, int x)
{
    if ( arr->length == arr->size) return ;
    int i = arr->length - 1;
    while (arr->A[i] > x)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length ++;
}

int isSorted(Array *arr)
{
    for (int i = 0; i < arr->length - 1; i++)
    {
        if ( arr->A[i] > arr->A[i+1])
        {
            return 0;
        } 
    }
    return 1;
}

int main ()
{
    Array arr = {{2,4,6,8,10},10,5};

    cout << isSorted(&arr) << endl;
    Display(arr);
    return 0 ;
}