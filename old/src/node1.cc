#include "node.h"

template <class T>
node<T>::node(T inData){
    data = inData;
    next = nullptr;
    prev = nullptr;
}


template <class T>
list<T>::list(){
    begin = nullptr;
    end = begin;        //points to the last element
}

template <class T>
void list<T>::pushback(T inData){
    node<T> *new_node = new node<T>(inData);
    end->next = new_node;
    end = new_node;
}

template <class T>
void list<T>::pop(){
    node<T> *a = begin;
    while (a->next != nullptr){
        end = a;
        a = a->next;
    }
    end->next = nullptr;
    delete a;
}

template <class T>
void list<T>::delete_node(int ind){
    node<T> *a = begin;
    node<T> *prev = nullptr;
    //node<T> *next = nullptr;
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

template <class T>
void list<T>::print(){
    node<T> *a = begin;
    while(a->next != nullptr){
        std::cout<< a->data;
        a = a->next;
    }
    std::cout<<a->data<<'\n';
}
