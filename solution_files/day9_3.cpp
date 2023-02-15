#include <string>
#include <vector>
#include <map>

using namespace std;

map<char, char> winValue= { 
    {'0', '5'}, {'2', '0'}, {'5', '2'} 
};

string solution(string rsp) {
    string answer = "";
    for(auto c : rsp){
        answer += winValue.find(c)->second;
    }
    return answer;
}