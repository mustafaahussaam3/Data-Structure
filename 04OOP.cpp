#include <iostream>

using namespace std;

class Rectangle {

private:
    int length;
    int breadth;

public:

    Rectangle (int l, int b) : length(l), breadth(b){}

    int area (){

        return length * breadth;
    }

    int peri(){
        
        return 2*(length + breadth);
    }

    ~Rectangle (){
        cout << "Finish" << endl ;
    }

};

int main(){

    int l,b;
    printf("Enter Length and Breadth");

    cin>>l>>b;
    Rectangle r(l,b);

    int ar = r.area();
    int pr = r.peri();

    printf("Area %d \nPerimeter %d \n",ar, pr);


    return 0;
}