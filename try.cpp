//array, linkedlist, stack 
#include <iostream>

using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

struct Node{
    int data;
    struct Node *next;
}*first = NULL;

void create_ll(int A[],int size)
{
    struct Node *temp;
    struct Node *last;
    first = (struct Node *)malloc (sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < size ; i++)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

int count_ll(struct Node *n)
{   
    int c = 0;
    while ( n != NULL )
    {
        // cout << c <<endl;
        c++;
        n = n->next;
    }
    return c;
}

void display_ll(struct Node *n)
{
    while ( n != NULL )
    {
        cout << n->data << endl ; 
        n = n->next;
    }
}

struct Stack{
    int top;
    int size;
    int* S;
};

void create_st()
{
    
}

int main()
{
  int a[] = {1,2,3,4,5,6,7,8,9};
  create_ll(a,9);
  cout << count_ll(first) << endl;
  display_ll(first);
}


// //display, merge, binary search, rearrange, swap for array 


// #include <iostream>

// using namespace std ;

// struct Array 
// {
//     int A[30] ;
//     int length; 
//     int size; 
// };

// struct Node 
// void swap (int *x , int *y)
// {
//     int temp ; 
//     temp = *x; 
//     *x = *y; 
//     *y = temp ;
// }

// //{-1,-4,5,7,-9,12,-3,5,-9,-11,10}
// //{-1,-4,-11,7,-9,12,-3,5,-9,5,10}
// //{-1,-4,-11,-9,-9,12,-3,5,7,5,10}
// //{-1,-4,-11,-9,-9,-3,12,5,7,5,10}

// void rearrange(Array *arr)
// {
//     int i  = 0 ;
//     int j  = arr->length - 1 ;
//     while ( i < j)
//     {
//         while ( arr->A[i] < 0 ){ i++ ;} // i =6
//         while ( arr->A[j] > 0 ){ j-- ;} // j = 5
//         if( i < j ){swap(&arr->A[i], &arr->A[j]);}
//     }
// }

// void display(Array arr3)
// {
//     for (int i = 0; i  < arr3.length; i++)
//     {
//         printf( "%d \t", arr3.A[i]);
//     }
// }

// Array* merge(Array *arr1, Array *arr2)
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     Array* arr3 = (Array*)malloc(sizeof(Array));
//     arr3->length = arr1->length + arr2->length ;
//     while ( i < arr1->length && j < arr2->length)
//     {
//         if ( arr1->A[i] < arr2->A[j])
//         {
//             arr3->A[k++] = arr1->A[i++];
//         }
//         else if (arr1->A[i] > arr2->A[j] )
//         {
//             arr3->A[k++] = arr2->A[j++];
//         }
//         else 
//         {
//             arr3->A[k++] = arr1->A[i++];
//             j++;
//         }
        
//     }
//     for (;i < arr1->length ; i++)
//     {
//         arr3->A[k++] = arr1->A[i];
//     }
//     for (;j < arr2->length ; j++)
//     {
//         arr3->A[k++] = arr2->A[j];
//     }
//     arr3->length ++;
//     return arr3;
// }
//  int binarySearch(int key, Array arr)
//  {
//     int l =0;
//     int mid; 
//     int h =0;
//     h = arr.length - 1;
//     while (l <= h )
//     {
//         mid = (l + h) / 2; 
//         if ( key == arr.A[mid])
//         {
//             return mid;
//         }
//         else if ( key < arr.A[mid] )
//         {
//             h =  mid - 1; 
//         }
//         else 
//         {
//             l = mid + 1;
//         }
//     }
//     return -1;
//  }


// int main ()
// {
// Array arr1 = {{1,2,3,4,5,6,7,10,25},9,20};
// Array arr2 = {{2,5,6,7,8,9,10,11,12},9,20};
// // Array arr3 = {{-1,-4,5,7,-9,12,-3,5,-9,-11,10},11,20};
// Array *arr3 = merge(&arr1, &arr2);
// display(*arr3);
// }



// // string s = {"12, 2, 3, 4, 5"};
// // int n = stoi(s.substr(0, s.find(',',0) - 0));
// // string s1 = s.substr(2,1);
// // cout << "string" << s1 << endl ;
// // cout << n << endl ;

// //struct value
// // {
// //  int bit1:1;
// //  int bit3:4; 
// //  int bit4:4;
// // }bit={1, 2, 13};

// // printf ("%d, %d, %d\n", bit. bit1, bit.bit3, bit.bit4);