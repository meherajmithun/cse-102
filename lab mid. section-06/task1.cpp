/*Question : Implement the following tasks:

Develop a class called Rectangle to represent a rectangle shape. Specify attributes for length and width.
Write a parameterized constructor to initialize the dimensions of the rectangle. Include member functions to calculate the perimeter of the rectangle.
Implement getter functions for retrieving perimeter value. Implement setter functions for each attribute to modify their values.
Demonstrate the usage of the class by creating objects, invoking the member functions, and displaying the results.

*/

#include<bits/stdc++.h>
using namespace std;

class Rectangle{
public:
    int length,width;
    int perimeter;

    Rectangle(int l,int w){
        this->length = l;
        this->width = w;
    }
    void calculate(){
        perimeter = 2*(length+width);
    }
    void getter(){
        cout<<"Length is "<<length<<endl;
        cout<<"Width is "<<width<<endl;
        cout<<"Perimeter is "<<perimeter<<endl;
    }
    void setter(int l, int w){
        length = l;
        width = w;
    }
};
int main(){
    Rectangle r1(10,20);
    r1.calculate();
    r1.getter();
    r1.setter(12,2);
    r1.calculate();
    r1.getter();

}
