/*
    Creating a Structure in Heap and Returning its address 

    author: Mustafa Hussam Eldin
*/


#include <iostream>

using namespace std;

 struct Rectangle {
    int length;
    int breadth;
 };

struct Rectangle* fun (){

    struct Rectangle *p;

   // p = new Rectangle;           
    p = (struct Rectangle *) malloc(sizeof(Rectangle));
    p->length = 15 ;
    p->breadth =  10;
    return p;

}
int main  (){

    struct Rectangle *ptr = fun();
    
    cout << "length " << ptr->length << endl << "breadth" << ptr ->breadth << endl;
    return 0;
}