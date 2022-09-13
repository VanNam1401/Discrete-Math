#include<iostream>
using namespace std;

bool findElement(int* array, int n, int element){
    for (int i = 0; i < n;i++){
        if(*(array+i) == element){
            return true;
        }
    }
    return false;
}

int main(){

    return 0;
}