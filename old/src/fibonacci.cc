// find the nth fibonacci number


#include "cv.h"
//#include "Mat.hpp"
#include <iostream>

using namespace std;
using namespace cv;

long int fib(int n,  vector<long int> &lookup){
    long int fibonacci;
    if (lookup[n]==-1){
        if(n>1){
            fibonacci = fib(n-1, lookup) + fib(n-2, lookup);
            lookup[n] = fibonacci;
        }
        else if (n==1 || n==0) {
            fibonacci = 1;
            lookup[n] = fibonacci;
        }
    }
    else{
        fibonacci = lookup[n];
    }
    return fibonacci;
}

int main(int argc, char* argv[]){
    int n;
    if (argc != 2){
        cout<<"Input the index of fibonacci number desired"<<'\n';
        cin>> n;
    }
    else{
        n = atoi(argv[1]);
    }
    vector<long int> lookup(n+1, -1);
    n--;
    long int fibonacci;
    fibonacci = fib(n, lookup);
    std::cout << fibonacci << '\n';

    return 0;
}
