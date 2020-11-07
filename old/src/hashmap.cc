#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <utility>

using namespace std;
using hashmap = unordered_map<int, vector<int> >;

void find_connections(int city, hashmap cityconnections, vector<int> result, int distance){

        hashmap::iterator j = cityconnections.find(city);
        if (j != cityconnections.end()){
            vector<int> connections = j->second;
            result[distance] = connections.size();
            std::cout << connections.size() << '\n';
            distance++;
            for(auto city : connections){
                find_connections(city, cityconnections, result, distance);
            }
        }

    return;

}

vector<int> cityDistanceHistogram(vector<int> cities){
    int capital = -1;
    int distance = -1;
    vector<int> result(cities.size()-1,0 );
    hashmap cityconnections;
    for (int i=0; i<cities.size();i++){
        if (cities[i] == i){
            capital = cities[i];
        }
        else{
            if(cityconnections.find(cities[i]) != cityconnections.end()){
                cityconnections[cities[i]].emplace_back(i);
            }
            else{
                vector<int> connectedCities(1,i);
                pair <int, vector<int> > new_el(cities[i], connectedCities);
                cityconnections.insert(new_el);
            }
        }
    }

    if (capital != -1){
        find_connections(capital, cityconnections, result, distance);
    }

    for (int i=0; i< result.size();i++){
        std::cout << result[i]<<'\t';
    }


    return result;
}

int main(){
    int data[] = {9,1,4,9,0,4,8,9,0,1};
    vector<int> T (data, data +sizeof(data)/sizeof(data[0]));
    //std::cout << T[2]   << '\n';
    vector<int> distances = cityDistanceHistogram(T);
    for (int i=0; i< distances.size();i++){
        std::cout << distances[i]<<'\t';
    }
    return 0;
}
