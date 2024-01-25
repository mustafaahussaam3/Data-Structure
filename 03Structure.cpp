#include <iostream>

using namespace std;

struct Rectangle {

    int length;
    int breadth;

};

int area (Rectangle r){

    return r.length * r.breadth;
}

int peri(Rectangle r){
    
    return 2*(r.length + r.breadth);
}

void initalize (Rectangle *r, int l, int b){

    r->length  = l;
    r->breadth = b;
}

int main(){

    Rectangle r = {0,0};
    int l,b;
    printf("Enter Length and Breadth");

    cin>>l>>b;
    initalize(&r,l,b);

    int ar = area(r);
    int pr = peri(r);

    printf("Area %d \nPerimeter %d \n",ar, pr);


    return 0;
}