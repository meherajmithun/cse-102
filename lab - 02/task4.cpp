#include<bits/stdc++.h>
using namespace std;

class triangle{
public:
    double height;
    double base ;
    triangle(double h , double b){
        height = h;
        base = b;
    }
    void display(){
        cout<<"Triangle height is : "<<height<<endl;
        cout<<"Triangle base is : "<<base<<endl;
    }
    triangle(const triangle& ob1){
        height = ob1.height;
        base = ob1.base;
    }

};
int main(){
    triangle ob1(10,20);

    triangle ob2 = ob1;
    cout<<"Display details for ob1"<<endl;
    ob1.display();
    cout<<"Display details for ob2"<<endl;
    ob2.display();
}
