//Subscript Operator = []

#include<bits/stdc++.h>
using namespace std;

class arr{
    int a[3];
public:
    arr(){
        for(int i = 0; i < 3; i++){
            a[i] = i;
        }
    }
    int operator [](int i){
        return a[i];
    }
    int operator [](char* s);
};

int arr::operator[](char* s){
    if(strcmp(s, "zero") == 0){
        return a[0];
    }
    else if(strcmp(s, "one") == 0){
        return a[1];
    }
    else if(strcmp(s, "two") == 0){
        return a[2];
    }
    return -1;
}

int main(){
    arr ob;
    cout<<ob[1]<<endl; //1
    cout<<ob["two"]<<endl; //2
    return 0;
}
