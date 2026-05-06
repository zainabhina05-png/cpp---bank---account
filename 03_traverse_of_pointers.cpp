#include<iostream>
using namespace std;

//traverse of pointers

int main(){
int Array[] = {1,2,3,4,5};
int *ptrArray = Array;
 

    for(int i = 0;i < 5;i++){
        cout<<*(ptrArray + i)<<" ";
    }
   
    return 0;
}
