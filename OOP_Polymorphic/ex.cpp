#include<iostream>
#include<string>

class Polygon{
protected:
    int width;
    int height;
public:
    Polygon(int _width,int _height) : width(_width),height(_height) {}
    virtual double area() {return 0;}
};

class RectAngle:public Polygon{
public:
    RectAngle(int _width,int _height) : Polygon(_width,_height){}
    double area() {return width*height;}
};

class TriAngle:public Polygon{
public:
    TriAngle(int _width,int _height) : Polygon(_width,_height) {}
    double area() {return width*height/2;}
};

int main(){
    Polygon py(10,5);
    RectAngle rec(10,7);
    TriAngle tri(5,7);
    Polygon *ptr = &py;
    Polygon *ptr1 = &rec;
    Polygon *ptr2 = &tri;
    std::cout<<ptr->area()<<" "<<ptr1->area()<<" "<<ptr2->area()<<std::endl;
    return 0;
}