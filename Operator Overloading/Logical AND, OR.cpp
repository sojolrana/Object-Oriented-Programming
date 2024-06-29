#include<bits/stdc++.h>
using namespace std;

class cord{
    int x, y;
public:
    cord(int a = 0, int b = 0){
        x = a;
        y = b;
    }
    bool operator&&(const cord& obj){
        return (x && obj.x) && (y && obj.y);
    }
    bool operator||(const cord& obj){
        return (x || obj.x) || (y && obj.y);
    }
};

int main(){
    cord a(2, 1), b(3, 1);

    return 0;
}
