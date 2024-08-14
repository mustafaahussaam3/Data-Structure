
#include <iostream>

using namespace std ;

struct Array 
{
    int A[20] ;
    int length; 
    int size; 
};

void Display(Array arr3)
{
    for (int i = 0; i  < arr3.length; i++)
    {
        printf( "%d \t", arr3.A[i]);
    }
}

Array* Merge(Array *arr1, Array *arr2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    Array* arr3 = (Array*)malloc(sizeof(Array));
    arr3->length = arr1->length + arr2->length ;
    while ( i < arr1->length && j < arr2->length)
    {
        if ( arr1->A[i] < arr2->A[i])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else 
        {
            arr3->A[k++] = arr2->A[j++];
        }
    }
    for (;i < arr1->length ; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    for (;j < arr2->length ; j++)
    {
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length ++;
    return arr3;
}
 int binarySearch(int key, Array arr)
 {
    int l =0;
    int mid; 
    int h =0;
    h = arr.length - 1;
    while (l <= h )
    {
        mid = (l + h) / 2; 
        if ( key == arr.A[mid])
        {
            return mid;
        }
        else if ( key < arr.A[mid] )
        {
            h =  mid - 1; 
        }
        else 
        {
            l = mid + 1;
        }
    }
    return -1;
 }


int main ()
{
Array arr1 = {{1,2,3,4,5,6,10,25,54,100,193,1234,2232,4462,6281,8128},16,20};
Array arr2 = {{7,8,9,10,11,12},6,20};

int key = binarySearch(6281, arr1);
printf(" %d ", key);
}



// string s = {"12, 2, 3, 4, 5"};
// int n = stoi(s.substr(0, s.find(',',0) - 0));
// string s1 = s.substr(2,1);
// cout << "string" << s1 << endl ;
// cout << n << endl ;

//struct value
// {
//  int bit1:1;
//  int bit3:4; 
//  int bit4:4;
// }bit={1, 2, 13};

// printf ("%d, %d, %d\n", bit. bit1, bit.bit3, bit.bit4);