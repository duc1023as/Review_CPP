#include<iostream>

template<class T>
class mypair{
private:
    T a,b;
public:
    mypair(T _a,T _b): a(_a),b(_b) {}
    T getMax();
};

template<> 
class mypair<char> {
private:
    char a,b;
public:
    mypair(char _a,char _b): a(_a),b(_b) {}
    int sum2nums() {return a+b;}
};

template<class T>
T mypair<T>::getMax(){
    T result;
    result = a>b?a:b;
    return result;
}

int main(){
    mypair<int> pair1(15,16);
    mypair<char> pair2('j','k');
    std::cout<<pair1.getMax()<<std::endl;
    std::cout<<pair2.sum2nums()<<std::endl;
    return 0;
}