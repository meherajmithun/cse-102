#include<bits/stdc++.h>
using namespace std;

class storeItem{
public:
    string itemName;
    double prize;

    storeItem(){
        itemName = "Unknown";
        prize = 0.0;
    }
    storeItem(string s , double n){
        itemName = s;
        prize = n;
    }
    ~storeItem(){
        cout<< itemName<<" has been removed from the store"<<endl;
    }
    void displayDetails(){
        cout<<"Item name is : "<<itemName<<endl;
        cout<< itemName <<" prize is : "<<prize<<endl;
    }
    void getDescription(){
        if(prize > 100){
            cout<< itemName <<" is a premium item"<<endl;
        }
        else if(prize>20 and prize < 100){
            cout<< itemName <<" is a standard item"<<endl;
        }
        else{
            cout<< itemName <<" is a budget item"<<endl;
        }
        cout<<endl;
    }
    //cosl<<endl;
};
int main(){
    storeItem p1("Laptop",10000);
    p1.displayDetails();
    p1.getDescription();

    storeItem p2("Headphones",10000);
    p2.displayDetails();
    p2.getDescription();

    storeItem p3("Mouse",10000);
    p3.displayDetails();
    p3.getDescription();

    storeItem p4("Keyboard",10000);
    p4.displayDetails();
    p4.getDescription();

    storeItem p5("charger",10000);
    p5.displayDetails();
    p5.getDescription();

    storeItem p6("Cpu",10000);
    p6.displayDetails();
    p6.getDescription();

}
