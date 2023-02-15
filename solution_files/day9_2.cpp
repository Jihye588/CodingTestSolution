#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string letter) {
    
    map<string, string> morse = { 
        {".-","a"}, {"-...","b"}, {"-.-.","c"}, {"-..","d"}, {".","e"}, {"..-.","f"},
        {"--.","g"}, {"....","h"}, {"..","i"}, {".---","j"}, {"-.-","k"}, {".-..","l"},
        {"--","m",}, {"-.","n"}, {"---","o"}, {".--.","p"}, {"--.-","q"}, {".-.","r"},
        {"...","s"}, {"-","t"}, {"..-","u"}, {"...-","v"}, {".--","w"}, {"-..-","x"},
        {"-.--","y"}, {"--..","z"}
    };
    
    string answer;
    while(letter.size() > 0){
        int idx = letter.find(" ");
        string code = letter.substr(0, idx);
        answer += morse.find(code)->second;
        if(idx == string::npos) break;
        idx++;
        letter = letter.substr(idx, letter.size() - idx);
    }

    return answer;
}