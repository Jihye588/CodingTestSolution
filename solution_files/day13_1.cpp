#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(string s) {
        
    vector<string> values;
    size_t pos = 0;
    size_t startPos = 0;
    while((pos = s.find(" ", startPos)) != string::npos ){
        values.push_back(s.substr(startPos, pos - startPos));
        startPos = pos + 1;
    }
    values.push_back(s.substr(startPos, pos - startPos));
    
    int answer = 0;
    for(int i = 0; i < values.size(); i++){
        if(values[i] == "Z") answer -= stoi(values[i-1]);
        else answer += stoi(values[i]);
    }
    return answer;
}