#include <string>
#include <vector>
#include <map>

using namespace std;

map<string, int> directionMap = { {"right", 0}, {"left", 1}};
vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    if(directionMap.find(direction)->second){
        answer = vector<int>(numbers.begin() + 1, numbers.end());
        answer.push_back(numbers[0]);
    }else{
        answer.push_back(numbers.back());
        answer.insert(answer.end(), numbers.begin(), numbers.end() - 1);
    }
    return answer;
}