#include<bits/stdc++.h>
using namespace std;

class coord{
    int x, y;
public:
    coord(int a, int b){
        x = a;
        y = b;
    }
    coord operator=(const coord& obj){
        if(this != &obj){
            x = obj.x;
            y = obj.y;
        }
        return *this;
    }
    void show(){
        cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
    }
};

int main(){
    coord a(3, 2), b(5,1);
    a = b;
    a.show();
    return 0;
}
