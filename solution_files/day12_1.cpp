#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    for(char v : vowels){
        int findIdx = my_string.find(v);
        while(findIdx != string::npos){
            my_string.erase(findIdx, 1);
            findIdx = my_string.find(v);
        }
    }
    return my_string;
}