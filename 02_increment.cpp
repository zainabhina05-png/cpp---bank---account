#include<iostream>
using namespace std;

//increment pointers

void increment(int* x){
    (*x)++;
    return ;
}
int main(){
    int y = 5;
    cout<<"y is "<<y<<endl;
    increment (&y);
    cout<<"y is now "<<y<<endl;
    return 0;
}