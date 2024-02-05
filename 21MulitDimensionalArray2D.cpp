#include <iostream>


using namespace std;


int main ()
{
    /*
        three methods of creating 2d array
    */
    int A[3][4]={{1,2,3,4}, {2,4,6,8}, {3,5,7,9}}; //this creating inside stack only 3 rows 4 coloumns 

 

    int *B[3]; // this create a array of pointers in side stack and creating the main arrays inside heap 
    B[0] =  (int*)malloc(4*sizeof(int));
    B[1] =  (int*)malloc(4*sizeof(int));
    B[2] =  (int*)malloc(4*sizeof(int));

 

    int **C;
    C =(int**)malloc(3*sizeof(int *)); // creating array of pointers inside heap then create our main arrays in heap 
    C[0] = (int*)malloc(4*sizeof(int));
    C[1] = (int*)malloc(4*sizeof(int));
    C[2] = (int*)malloc(4*sizeof(int));

    for (int i=0;i<3;++i)
    {
        for (int j=0;j<4;++j)
        {
            cout << C[i][j];
        }
        cout << endl;
    }


}