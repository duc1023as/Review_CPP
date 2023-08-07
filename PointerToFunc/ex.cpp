#include<iostream>

int add(int n1,int n2){
    return n1+n2;
}

int sub(int n1,int n2){
    return n1-n2;
}

int operation(int n1,int n2,int (*callFunc)(int,int)){
    return (*callFunc)(n1,n2);
}

int main(){
    int (*AddTwo)(int,int) = add;
    int (*SubTwo)(int,int) = sub;
    std::cout<<operation(20,20,add)<<std::endl;
    std::cout<<operation(20,20,sub)<<std::endl;
    return 0;
}