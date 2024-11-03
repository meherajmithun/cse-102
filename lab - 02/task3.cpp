#include<bits/stdc++.h>
using namespace std;

class rectangle{
    int length;
    int width;
public:
    rectangle(){
        length = 0;
        width = 0;
    }

    rectangle(int a, int b) {
        length = a;
        width = b;
    }

    void set_value(int a , int b){
        length = a;
        width = b;
    }
    void area(){
        cout<<"Length is : "<<length<<" units"<<endl;
        cout<<"Width is : "<<width<<" units"<<endl;
        cout<<"Area is : "<<length*width<<" square units"<<endl;
    }
    rectangle newRectangle(rectangle r1,rectangle r2){
        rectangle NewRect;
        NewRect.length = r1.length+r2.length;
        NewRect.width = r1.width + r2.length;

        return NewRect;
    }
    int getlength(){
        return length;
    }
    int getwidth(){
        return width;
    }
    int Newarea(int l , int w){
        return l * w;
    }
};
int main(){
    rectangle r1,r2(10 , 20);
    r1.set_value(5,10);
    r1.area();
    rectangle New = New.newRectangle(r1,r2);
    int length = New.getlength();
    int width = New.getwidth();
    cout<<"New rectangle length is : "<<length<<endl;
    cout<<"New rectangle width is : "<<width<<endl;
    cout<<"New rectangle area is :"<<New.Newarea(length,width)<<endl;
}
