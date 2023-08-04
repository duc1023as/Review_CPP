#include<iostream>
#include<string>

class Class1{
private:
    int number1;
    int number2;
public:
    Class1(int _n1,int _n2) : number1(_n1),number2(_n2) {}
    void display_mul() {std::cout<<number1*number2<<std::endl;}
    friend double display_sum(const Class1&);
};

double display_sum(const Class1 &x){
    return x.number1+x.number2;
}


int main(){
    Class1 cl1(5,4);
    cl1.display_mul();
    std::cout<<display_sum(cl1)<<std::endl;
    return 0;
}