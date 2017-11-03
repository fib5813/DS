#include <iostream>
//#include <stdio.h>
#include <stdlib.h>
#include "cv.h"


using namespace std;

long int fact(int num, vector<long int>* lookup){
    //cout<<lookup->at(0)<<'\n';
    long int factorial;
    if (lookup->at(num) == -1){
        if (num > 1){
            factorial = num * fact(num-1, lookup);
            lookup->at(num) = factorial;
        }
        else if (num == 0 || num==1){
            factorial = 1;
            lookup->at(num) = factorial;
        }
        else {
            std::cout << "wrong input" << '\n';
            exit(EXIT_FAILURE);
        }
    }
    else{
        factorial = lookup->at(num);
    }
    return factorial;
}

int main(int argc, char* argv[]){
    int n,k;
    if (argc!=3){
        cout<<"input n, k:"<<'\n';
        cin>>n>>k;
    }
    else{
        n = atoi(argv[1]);
        k = atoi(argv[2]);
    }
    if (n<k){
        std::cout << "wrong input" << '\n';
        exit(EXIT_FAILURE);
    }
    vector<long int> lookup(n+1,-1);
    //std::cout << lookup.size() << '\n';

    long int comb = fact(n, &lookup) /(fact(n-k, &lookup)*fact(k, &lookup));
    std::cout << comb << '\n';

    return 0;
}
