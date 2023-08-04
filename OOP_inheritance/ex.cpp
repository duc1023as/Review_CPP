#include<iostream>
#include<string>

class Polygon{
protected:
    int width;
    int height;
public:
    Polygon(int _width,int _height) : width(_width),height(_height) {}
};

class Print{
public:
    static void print(int);
};

void Print::print(int value){
    std::cout<<"Area: "<<value<<std::endl;
}

class RectAngle:public Polygon,public Print{
public:
    RectAngle(int _width,int _height) : Polygon(_width,_height) {}
    int area() {return width*height;}
};

class TriAngle:public Polygon,public Print{
public:
    TriAngle(int _width,int _height) : Polygon(_width,_height) {}
    double area() {return width*height/2;}
};

int main(){
    RectAngle rec(15,15);
    TriAngle tri(10,10);
    rec.print(rec.area());
    tri.print(tri.area());
    return 0;
}