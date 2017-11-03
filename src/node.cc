#include "node.h"

node::node(int inData = 0){
    data = inData;
    next = nullptr;
}

list::list(int inData = 0){
    begin = new node(inData);
}

void list::pushback(int inData){
    node *new_node = new node(inData);
    node *a = begin;
    while (a->next != nullptr){
        a = a->next;
    }
    a->next = new_node;
}

void list::pop(){
    node *a = begin;
    node *b = nullptr;
    while (a->next != nullptr){
        b = a;
        a = a->next;
    }
    if (b != nullptr){
        b->next = nullptr;
    }
    delete a;
}

void list::delete_node(int ind){
    node *a = begin;
    node *prev = nullptr;
    //node *next = nullptr;
    int i = 0;
    while(i != ind){
        prev = a;
        a = a->next;
        i++;
    }
    if (prev != nullptr){
        prev->next = a->next;
    }
    delete a;
}

void list::print(){
    node *a = begin;
    while(a->next != nullptr){
        std::cout<< a->data;
        a = a->next;
    }
    std::cout<<a->data<<'\n';
}

node* list::reverse(){
    node *begin_new;
    node *end_new = nullptr;
    node *temp1;
    node *temp2 = end_new;
    node *a = begin;

    while (a != nullptr) {
        temp1= a->next;
        a->next = temp2;
        a = temp1;
    }
return  begin_new;
}
