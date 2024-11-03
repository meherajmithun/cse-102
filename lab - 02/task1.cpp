#include<bits/stdc++.h>
using namespace std;

class person{
    string name;
    int age;
public:
    void setter(string s,int n){
        name = s;
        age = n;
    }
    void getter(){
        cout<<"Person name is : "<<name<<endl;
        cout<<"Person age is : "<<age<<endl;
    }
    /*
    ~person(){
        cout<<"They are destroyed"<<endl;
    }
    */
};
int main(){
    person p1,p2;
    p1.setter("Meheraj" , 34);
    p1.getter();
    p2.setter("Naim" , 74);
    p2.getter();
}
