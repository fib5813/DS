#ifndef __NODE
#define __NODE

#include <iostream>

//template<class T>
class node{
public:
    int data;
    node *next;
    node *prev;
    //node(){}
    node(int data);
};

//template <class T>
class list{
    node *begin;
    node *end;
public:
    list(int data);
    void pushback( int indata);
    void pop(void);
    void print(void);
    void delete_node(int index);
    node* reverse(void);
};

class double_linked{
    node *begin = nullptr;
    node *end = nullptr;

public:
    double_linked();
    void push_back(int data);
    void print();
};
#endif
