#include <iostream>
using namespace std;

class cord{
    int x, y;
public:
    cord(int a = 0, int b = 0){
        x = a;
        y = b;
    }
    friend ostream& operator<<(ostream& COUT, cord& point); //Insertion operator overloading
    friend istream& operator>>(istream& CIN, cord& point); //Extraction operator overloading
};

ostream& operator<<(ostream& COUT, cord& point){
    COUT<<point.x<<" , "<<point.y;
    return COUT;
}

istream& operator>>(istream& CIN, cord& point){
    CIN>>point.x>>point.y;
    return CIN;
}

int main() {
    cord p1(3, 4);
    cout << "Point p1: " << p1 << endl;

    cord p2;
    cout << "Enter x and y coordinates for Point p2: ";
    cin >> p2;
    cout << "Point p2: " << p2 << endl;

    return 0;
}
