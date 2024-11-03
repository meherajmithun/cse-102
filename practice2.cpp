#include<bits/stdc++.h>
#define int long long
using namespace std;

class timeComplexity{
    int time;
    int loop;
public:
    timeComplexity(){
        time = 2 ;
        loop = 10e+5;
        cout<<"Default time is "<<time<<" Second"<<endl;
        cout<<"Default loop is "<<loop<<endl;
    }
    timeComplexity(int t , int l){
        time = t;
        loop = l;
        cout<<"Setter time is : "<<time<<endl;
        cout<<"Setter loop is : "<<loop<<endl;
    }
    ~timeComplexity(){
        cout<<"Run time error"<<endl;
    }
    timeComplexity(const timeComplexity& t2){
        time = t2.time;
        loop = t2.loop;
    }
    void display(){
        cout<<"Display details for coppy constructor : "<<endl;
        cout<<"Time is : "<<time<<" Second"<<endl;
        cout<<"Loop is : "<<loop<<endl;
    }
};
int32_t main(){
    timeComplexity t1,t2(1,3e+10);
    //Now I want to create a coppy constructor;
    t1 = t2;
    t2.display();
    timeComplexity t3;
}
