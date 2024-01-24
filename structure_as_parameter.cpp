/* 
    REVISE ON STRUCTURE PARAMETER

    @Mustafa Hussam ELdin 
*/

#include <iostream>

using namespace std ;
 struct Rectangle {
    int length;
    int breadth;
 };

void fun (Rectangle *r1){
    r1->length =  20 ;  
    printf ("length %d \nbreadth %d\n", r1->length, r1->breadth);
}

int main(){

    Rectangle r = {10,5};
    printf ("length %d \nbreadth %d\n", r.length, r.breadth);

    fun(&r);
    return 0;
}