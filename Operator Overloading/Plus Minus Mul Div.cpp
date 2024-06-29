#include<bits/stdc++.h>
using namespace std;

class cord{
    int x, y;
public:
    cord(int a = 0, int b = 0){
        x = a;
        y = b;
    }

    //Plus
    cord operator+(const cord& n){
        cord p;
        p.x = x + n.x;
        p.y = y + n.y;
        return p;
    }

    //Minus
    cord operator-(const cord& n){
        cord p;
        p.x = x - n.x;
        p.y = y - n.y;
        return p;
    }

    //Mul
    cord operator*(const cord& n){
        cord p;
        p.x = x * n.x;
        p.y = y * n.y;
        return p;
    }

    //Div
    cord operator/(const cord& n){
        cord p;
        p.x = x / n.x;
        p.y = y / n.y;
        return p;
    }

    void show(){
        cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
    }
};

int main(){
    cord a(3, 2), b(1, 4), c;
    //Plus
    c = a + b;
    //Minus
    c = a - b;
    //Mul
    c = a * b;
    //Div
    c = a / b;
    c.show();
    return 0;
}
