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

int main () 
{
    Array arr = {{2,3,4,5,6,2,5,20,7},10,9};
    // Display(arr);
    // Append(&arr,7);
    // Display(arr);
    // Insert(&arr,9,8);
    // Display(arr);
    // int x = Delete(&arr, 3) ;
    // cout << x << endl;
    // int x = LinearSearch(&arr,3);  
    // cout << x << endl;
    // int y = 1%2;
    // cout << y << endl;
    // printf("%d", BinarySearch(arr,6));
    // Display(arr);
    // cout << Get(arr, 3) << endl;
    cout << Max(arr) << endl;
    cout << Min(arr) << endl;

    return 0 ;
}