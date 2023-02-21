#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(int n) {
    
    set<int> setNum;
    for(int i = 2; i <= n ; i++){
        while(n % i == 0){
            setNum.insert(i);
            n = n/i;
        }
    }
    vector<int> answer(setNum.begin(), setNum.end());
    return answer;
}