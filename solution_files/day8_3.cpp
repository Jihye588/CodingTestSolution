#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> sorted = emergency;
    sort(sorted.rbegin(), sorted.rend());
    
    vector<int> answer;
    for(int e : emergency) {
        answer.push_back(find(sorted.begin(), sorted.end(), e) - sorted.begin() + 1);
    }
    return answer;
}