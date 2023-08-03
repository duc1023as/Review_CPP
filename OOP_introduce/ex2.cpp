#include<iostream>
#include<string>

class RectAngle{
private:
    int width;
    int height;
public:
    RectAngle(int _width,int _height) : width(_width),height(_height) {}
    int area() {return width*height;}
};

int main(){
    RectAngle r1(10,5);
    RectAngle *r2, *r3, *r4;
    r2 = &r1;
    r3 = new RectAngle(5,5);
    r4 = new RectAngle[2]{{6,3},{8,9}};
    std::cout<<"R1:"<<r1.area()<<std::endl;
    std::cout<<"R2:"<<r2->area()<<std::endl;
    std::cout<<"R3:"<<r3->area()<<std::endl;
    std::cout<<"R5:"<<r4[1].area()<<std::endl;
    return 0;
}