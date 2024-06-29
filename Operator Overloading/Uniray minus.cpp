#include<bits/stdc++.h>
using namespace std;

class cord{
    int x, y;
public:
    cord(int a = 0, int b = 0){
        x = a;
        y = b;
    }
    cord operator-(){
        cord temp;
        temp.x = -x;
        temp.y = -y;
        return temp;
    }
    void show(){
        cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
    }
};

int main(){
    cord a(2, 1), b(3, 1), c, d;
    c = -a;
    c.show();
    return 0;
}
