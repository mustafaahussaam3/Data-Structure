#include <iostream>

using namespace std;


int area (int l, int w){

    return l * w;
}

int peri( int l, int w){
    
    return 2*(l + w);
}

int main(){

    int length = 0, breadth = 0;

    printf("Enter Length and Breadth");
    cin>>length>>breadth;

    int ar = area(length,breadth);
    int pr = peri(length,breadth);

    printf("Area %d \nPerimeter %d \n",ar, pr);


    return 0;
}