#include<bits/stdc++.h>
using namespace std;

class life{
    int income;
    int wh;
public:
    life(){
        income = 0;
        wh = 0;
    }
    life(int n , int m){
        income = n;
        wh = m;
    }
    ~life(){
        cout<<"Life is destroyed"<<endl;
    }
    void display (){
        cout<<"Income kore "<<income<<" Taka"<<endl;
        cout<<"Kaj kore "<<wh<<" Hours"<<endl;
    }
    life news(life d1){
        life pera;
        pera.income = 100;
        pera.wh = 20;
        return pera;
    }

};
int main(){
    life  d1(0,12);
    d1.display();
    life d2 = d2.news(d1);
    d2.display();
}

// problem is that when i used const in the passing through objet or news function then i got a destructor that's why without using const destructor is called three times but after i used const destructor called two times as i expected.
//code is below
/*
#include<bits/stdc++.h>
using namespace std;

class life{
    int income;
    int wh;
    public:
    life(){
        income = 0;
        wh = 0;
    }
    life(int n , int m){
        income = n;
        wh = m;
    }
    ~life(){
        cout<<"Life is destroyed"<<endl;
    }
    void display (){
        cout<<"Income kore "<<income<<" Taka"<<endl;
        cout<<"Kaj kore "<<wh<<" Hours"<<endl;
    }
    life news(const life& d1){
        life pera;
        pera.income = 100;
        pera.wh = 20;
        return pera;
    }

};
int main(){
    life  d1(0,12);
    d1.display();
    life d2 = d2.news(d1);
    d2.display();
} */
