#include <iostream>

class Shape{
protected:
    float length;
    float width;

public:
    Shape(){};
    float Area();
    void setLength(float len);
    void setWidth(float wid);
    float getLength(void);
    float getWidth(void);
    void print();
    Shape* operator+(const Shape &B);
};

float Shape::Area(void){
    return (length * width);
}

void Shape::setLength(float len){
    length = len;
}

void Shape::setWidth(float wid){
    width = wid;
}

float Shape::getLength(void){
    return length;
}

float Shape::getWidth(void){
    return width;
}

void Shape::print(void){
    std::cout<<length<<"\t"<<width<<"\n";
}

Shape* Shape::operator+(const Shape &B){
    Shape *res = new Shape();
    res->length = this->length + B.length;
    res->width = this->width + B.width;
    return res;

}


class Triangle : public Shape{
public:
    float Area();
};

float Triangle::Area(){
    return 0.5*length*width;
}
