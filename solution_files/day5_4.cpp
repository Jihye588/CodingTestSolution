#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {  
    vector<int> answer(num_list.size());
    int i = 0;
    for(auto num = num_list.end()-1; num >= num_list.begin(); num--){
        answer[i++] = *num;
    }
    return answer;
}