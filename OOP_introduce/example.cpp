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
    RectAngle();
    int area() {return width*height;}
};

RectAngle::RectAngle(){
    width=10;
    height=5;
}

class Circle {
private:
    double radius;
public:
    Circle(double _radius) : radius(_radius) {}
    double area() {return 3.14*radius*radius;}
};

class Cylinder {
private:
    Circle base;
    double height;
public:
    Cylinder(double _radius,double _height) : base(_radius),height(_height) {}
    double area() {return base.area()*height;}
};

// void RectAngle::set_values(int _width, int _height){
//     width = _width;
//     height = _height;
// }

int main(){
    RectAngle r1;
    RectAngle r2(16,3);
    // r1.set_values(10,5);
    // r2.set_values(16,3);
    std::cout<<"R1:"<<r1.area()<<" R2:"<<r2.area()<<std::endl;
    Cylinder c1(2,5);
    std::cout<<"Area of Cylinder is : "<<c1.area()<<std::endl;
    return 0;
}