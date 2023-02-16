#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {

    vector<pair<int, int> > factorialPair;
    factorialPair.push_back(make_pair(1,1));
    for(int i = 2; i < 11; i++){
        factorialPair.push_back(make_pair(i, i*factorialPair.back().second));
    }

    for(int i = 0; i < factorialPair.size() - 1; i++){
        if(factorialPair[i].second <= n && n < factorialPair[i+1].second)
            return factorialPair[i].first;
    }
    return factorialPair.back().first;
}