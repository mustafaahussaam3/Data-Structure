#include <iostream>

using namespace std ; 

struct Array
{
    int *A;
    int size; 
    int length; 
};

void Display(Array arr)
{
    printf ("\n Elements \n");
    for (int i =0; i < arr.length; i++)
    {
        printf("%d", arr.A[i]);
    }
    printf("\n");
}

int main()
{
    struct Array arr;
    cout << "Enter Size of Array" << endl ;
    cin >> arr.size ;
    arr.A =(int*)malloc(arr.size*sizeof(int));
    arr.length = 0;
    
    int n;
    printf("Enter Number of Numbers \n");
    scanf("%d", &n);
    printf("Enter Elements \n");
    for (int i =0; i < n; ++i)
    {
        scanf("%d",&arr.A[i]);
    }
    arr.length = n;
    Display(arr);
    return 0;
}
