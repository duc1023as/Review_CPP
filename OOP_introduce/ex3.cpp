#include<iostream>

class CVector{
public:
    int x,y;
    CVector() {}
    CVector(int _x,int _y) : x(_x),y(_y) {}
    CVector operator+ (const CVector&);
};

CVector CVector::operator+(const CVector& param){
    CVector temp;
    temp.x = param.x + x;
    temp.y = param.y + y;
    return temp;
}

int main(){
    CVector v1(4,5);
    CVector v2(6,7);
    CVector v3;
    v3 = v1 + v2;
    std::cout<<"("<<v3.x<<","<<v3.y<<")"<<std::endl;
    return 0;
}