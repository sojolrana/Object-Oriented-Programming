#include<bits/stdc++.h>
using namespace std;

class cord{
    int x, y;
public:
    cord(int a = 0, int b = 0){
        x = a;
        y = b;
    }
    cord operator++(){
        ++x, ++y;
        return *this;
    }
    void show(){
        cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
    }
};

int main(){
    cord a(2, 1), b(3, 1), c, d;
    c = ++a;
    d = ++b;
    c.show();
    d.show();
    return 0;
}
