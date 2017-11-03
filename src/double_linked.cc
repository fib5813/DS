#include "node.h"

double_linked::double_linked(){
    begin = nullptr;
    end = nullptr;
}

void double_linked::push_back(int in){
    if (begin != nullptr){
        node *new_node = new node(in);
        new_node->prev = end;
        new_node->next = nullptr;
        end = new_node;
    }
    else{
        begin = new node(in);
        begin->next = end;
        begin->prev = nullptr;
    }
}

//node* double_linked::pop(){

//}

void double_linked::print(){
    node *it = begin;
    while(it->next != nullptr){
        std::cout<< it->data<<"\n";
        it = it->next;
    }
    std::cout<< it->data;
}
