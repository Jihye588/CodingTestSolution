#include <string>
#include <vector>
#include <map>

using namespace std;


string solution(int age) {
    
    map<int, char> ageToAlphabet = { {0, 'a'}, {1, 'b'}, {2, 'c'}, {3, 'd'}, {4, 'e'}, {5, 'f'}, \
                                 {6, 'g'}, {7, 'h'}, {8, 'i'}, {9, 'j'} };

    string answer;
    while(age > 0){
        answer = ageToAlphabet.find(age%10)->second + answer;
        age = age/10;
    }
    return answer;
}