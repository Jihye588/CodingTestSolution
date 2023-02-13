#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    while(true){
        auto eraseIdx = my_string.find(letter);
        if(eraseIdx == my_string.npos) break;
        my_string.erase(eraseIdx, letter.size());
    }
    return my_string;
}