#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(){
    //char A[] = {'a','d', 'r','t','a', 'r', 'i', 'i'};
    //cout<<A<<'\n';
    string S = "interview";
    cout<<S<<'\n';
    vector<char> vec(S.begin(), S.end());
    sort(vec.begin(), vec.end());

    cout<<vec[0]<<'\n';
    return 0;
}
