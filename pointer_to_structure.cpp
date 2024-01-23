#include <iostream>

struct Rectangle {
    int length;
    int breadth;
}


int main(){

    // struct Rectangle r={10,5}; //static object r 

    struct Rectangle *p; 
    // p = &r;

    //create struct dynamically in heap 

    p = (struct Rectangle*)malloc(sizeof(struct Rectangle)); // assign type struct in heap and acces it using p pointer // dynamic object 
    p -> length = 10;
    
   // *p.length = 20; //it will not work because the (.) will have the highest precedence and will run first and it will give you error because it's not a 
   // a struct variable that will access the struct, it's a pointer so you can put the pointer in bracket (*p) to take the highest precedence and not making error 
   // and instead of writing all of that you can use the arrow operator (->) like p->length = 20;

    return 0;
}