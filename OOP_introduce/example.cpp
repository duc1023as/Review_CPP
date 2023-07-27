#include<iostream>
#include<string>

class IntPair {
public:
    int m_first {};
    int m_second {};
    void set(int n1,int n2){
        m_first = n1;
        m_second = n2;
    }
    void print(){
        std::cout<<"Pair("<<m_first<<","<<m_second<<")"<<std::endl;
    }
};


int main(){
	IntPair p1;
	p1.set(1, 1); // set p1 values to (1, 1)

	IntPair p2 { 2, 2 }; // initialize p2 values to (2, 2)

	p1.print();
	p2.print();

    int x {};
    std::cout<<x<<std::endl;
	return 0;

}