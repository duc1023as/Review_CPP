#include<iostream>
#include<string>

int main(){
    int x = 100;
    const int *ptr = &x;
    std::cout<<*ptr<<std::endl;
    int *p1 = 0;
    int *p2 = nullptr;
    // std::cout<<(*ptr)++<<std::endl; //can't modify
    /*
    int x;
    int *p1 = &x;
    const int *p1 = &x;
    int * const p1 = &x
    const int * const p1 = &x;
    */
    return 0;
}