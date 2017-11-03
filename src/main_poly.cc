#include "poly.cc"

int main(){
    Shape A,B;
    A.setLength(5);
    B.setLength(10);
    A.setWidth(1);
    B.setWidth(2);
    std::cout<<A.Area()<<"\t"<<B.Area()<<"\n";
    Shape *C = A+B;
    std::cout<< C->getLength()<<"\t"<<C->getWidth()<<"\t"<<C->Area()<<"\n";

    Triangle T;
    T.setLength(10);
    T.setWidth(10);
    std::cout<<T.Area()<<"\n";
    return 0;
}
