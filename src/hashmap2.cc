#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>

using namespace std;
using hashmap= unordered_set<int>;

int main(){
    //input data
    int A[] = {1,3,4,21,54,6,8,4,33,10,78,32};
    vector<int> one(A, A + sizeof(A)/sizeof(A[0]));
    //cout<< one[0]<<'\n';
    int B[] = {4,1,54,10,6};
    vector<int> two(B, B+sizeof(B)/sizeof(B[0]));
    int C[] = {2,1,10,6};
    vector<int> three(C, C+sizeof(C)/sizeof(C[0]));

    int subset = -1;
    int count = 0;
    hashmap set;
    hashmap::iterator it;
    for (int i = 0; i<one.size(); i++){
        set.emplace(one[i]);
    }
    for (int i = 0; i<three.size(); i++){
        it = set.find(three[i]);
        if (it == set.end()){
            //cout<<"here";
            subset = 0;
            break;
        }
        /*else{
            count = count+1;
        }*/
    }
    if (subset == 0){
        cout<<"not a subset"<<'\n';
    }
    else{
        cout<<"subset!"<<endl;
    }


    return 0;
}
