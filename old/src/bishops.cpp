#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){

    //std::fstream myfile("data.txt", std::ios_base::in);
    //ofstream outfile;
    //outfile.open ("example.txt");
    //while (myfile >> a)
    while(1)
    {
        int a;
        cin>>a;
        //a = 2*a-2;
        //outfile << a<<"\n";
        cout<<a <<"\n";
        if(a==10)
            break;
        //sleep(10);
    }
    //outfile.close();
    //myfile.close();

    return 0;
}
