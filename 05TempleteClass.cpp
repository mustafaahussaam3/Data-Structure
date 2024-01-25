/*
    now, if we write a class that has an integer datatype and i made a function to use it will work, but what if i want to be a float or double 
    the class will not work, so we use templete class instead 

    ** we can use the same class for multiple datatype
    ** class T is a generic datatype



    author : Mustafa Hussam Eldin 

*/


#include <iostream>

using namespace std;

template<class T>
class Arithmetic 
{

private:
    T a;
    T b;

public:    
    Arithmetic(T a,T b);
    T add ();
    T sub ();

};
    template<class T>
    Arithmetic<T>::Arithmetic(T a,T b)
    {
        this->a=a;
        this->b=b;
    }

    template<class T>
    T Arithmetic<T>::add ()
    {
        T c;
        c = a+b;
        return c;
    }

    template<class T>
    T Arithmetic<T>::sub()
    {
        T c;
        c = a-b;
        return c;
    }

int main (){

    Arithmetic<float> ar(10.99,5.5);

    cout<<ar.add()<<endl;
    cout<<ar.sub()<<endl;

    return 0;
}
