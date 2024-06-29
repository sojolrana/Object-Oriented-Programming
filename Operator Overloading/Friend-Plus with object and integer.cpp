#include<bits/stdc++.h>
using namespace std;

class coord{
    int x, y;
public:
    coord(int a = 0, int b = 0){
        x = a;
        y = b;
    }
    friend coord operator+(const coord& ob1, int i);
    void show(){
        cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
    }
};

coord operator+(const coord& ob1, int i){
    coord temp;
    temp.x = ob1.x + i;
    temp.y = ob1.y + i;
    return temp;
}

int main(){
    coord a(3, 2), b(5,1), c;
    c = a + 5;
    c.show();
    return 0;
}
