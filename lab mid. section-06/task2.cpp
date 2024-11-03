/*
Implement the following tasks:

Define a class named Box1 which has two private data members, one is area as double type, another is color as string type.
Define another class named Box2 which has the same private data members as Box1.
Create a parameterized constructor that is used to set the data members of the two classes.
Now define a non-member function named CompareBox() which takes two objects as parameters and displays "Box1" if the area of object of Box1 is bigger and "Box2" otherwise. Also print a destroy message of the object using the destructor.
*/

#include<bits/stdc++.h>
using namespace std;

class box1{
    double area;
    string color;
public:
    box1(double area,string color){
        this->area = area;
        this->color = color;
    }
    double getarea(){
        return area;
    }
    ~box1(){
        cout<<"Box1 is destroyed"<<endl;
    }
};
class box2{
    double area;
    string color;
public:
    box2(double area,string color){
        this->area = area;
        this->color = color;
    }
    double getarea(){
        return area;
    }
    ~box2(){
        cout<<"Box2 is destroyed"<<endl;
    }
};
//non-member function

void compare(box1& b1,box2& b2){
    if(b1.getarea() > b2.getarea()){
        cout<<"BOX1"<<endl;
    }
    else cout<<"BOX2"<<endl;
}
int main(){
    box1 b1(10,"red");
    box2 b2(14,"green");
    compare(b1,b2);
}

//query
//why box2 destructor is called first
//in line 45 when i used there showes an error