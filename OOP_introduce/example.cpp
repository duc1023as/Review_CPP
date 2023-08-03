#include<iostream>
#include<string>

class RectAngle {
private:
    int width;
    int height;
public:
    // void set_values(int,int);
    RectAngle(int _width, int _height){
        width = _width;
        height = _height;
    }
    int area() {return width*height;}
};

// void RectAngle::set_values(int _width, int _height){
//     width = _width;
//     height = _height;
// }

int main(){
    RectAngle r1(10,5);
    RectAngle r2(16,3);
    // r1.set_values(10,5);
    // r2.set_values(16,3);
    std::cout<<"R1:"<<r1.area()<<" R2:"<<r2.area()<<std::endl;
    return 0;
}