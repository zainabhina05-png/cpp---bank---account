#include<iostream>

using namespace std;
int main(){
    //swap two numbers by pointers 
int c = 10,d = 20;
int z = 0;
    int* ptr1 = &c;
    int* ptr2 = &d;
    int* temp = &z;
*temp=*ptr1;
*ptr1=*ptr2;
*ptr2=*temp;
cout<< *ptr2<<endl;
cout<< *ptr1<<endl;

    return 0;
};