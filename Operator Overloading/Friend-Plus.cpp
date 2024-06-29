#include<bits/stdc++.h>
using namespace std;

class coord{
    int x, y;
public:
    coord(int a = 0, int b = 0){
        x = a;
        y = b;
    }
    friend coord operator+(coord ob1, coord ob2);
    void show(){
        cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
    }
};

coord operator+(coord ob1, coord ob2){
    coord temp;
    temp.x = ob1.x + ob2.x;
    temp.y = ob1.y + ob2.y;
    return temp;
}

int main(){
    coord a(3, 2), b(5,1), c;
    c = a + b;
    c.show();
    return 0;
}

