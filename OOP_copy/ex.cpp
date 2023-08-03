#include<iostream>
#include<string>

class Example{
private:
    std::string *ptr;
public:
    Example(const std::string &str) : ptr(new std::string(str)) {}
    ~Example() {delete ptr;}
    Example(const Example& x) : ptr(new std::string(x.context())) {}
    const std::string &context() const {return *ptr;}
};

int main(){
    Example e1("DMD");
    Example e2 = e1;
    std::cout<<e2.context()<<std::endl;
    return 0;
}