#include<bits/stdc++.h>
using namespace std;

class cord{
    int x, y;
public:
    cord(int a = 0, int b = 0){
        x = a;
        y = b;
    }
    //Equal Equal
    bool operator==(const cord& obj){
        return (x == obj.x) && (y == obj.y);
    }
    //Not equal
    bool operator!=(const cord& obj){
        return (x != obj.x) || (y != obj.y);
    }
};

int main(){
    cord a(2, 1), b(3, 1);
    //Not equal
    if(a == b){
        cout<<"They are equal"<<endl;
    }
    else{
        cout<<"They aren't equal"<<endl;
    }

    //Not equal
    if(a != b){
        cout<<"They aren't equal"<<endl;
    }
    else{
        cout<<"They are equal"<<endl;
    }

    return 0;
}
