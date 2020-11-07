#include <iostream>

template <class T>
class node{
    T data;
    int *next;

public:
    node(T in = NULL, int *loc = nullptr);
};

template <class T>
node<T>::node(T in, int *loc){
    data = in;
    next = loc;
}

template <class T>
class list{
    int *begin;
public:
    list(T in = NULL);
    void pushback(T in);
    void insert(T in, int loc=NULL);
    T getData(int loc);
};

template<class T>
list<T>::list(T in){
    node<T> a = new node<T>::node(T in);
}
