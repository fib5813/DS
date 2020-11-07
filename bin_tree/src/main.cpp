#include "bin_tree.h"
#include<iostream>

int main(){

    bin_tree<int> tree = bin_tree<int>(2);
    tree.print();
    // std::cout << tree.sumTree() << std::endl;
    tree.insert(5);
    tree.print();
    // std::cout << tree.sumTree() << std::endl;
    std::cout << "hello!" << std::endl;
    return 0;
}