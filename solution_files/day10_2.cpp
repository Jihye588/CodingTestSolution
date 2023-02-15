#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    for(auto iter = num_list.begin(); iter< num_list.end();){
        answer.push_back({iter, iter + n});
        iter += n;
    }
    return answer;
}