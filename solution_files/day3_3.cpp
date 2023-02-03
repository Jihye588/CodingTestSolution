#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    
    sort(array.begin(), array.end());
    
    int maxCount = 0;
    int maxCountVal = array[0];
    int maxCountValNum = 1;    
    
    int count = 1;
    for(int i = 0 ; i < array.size(); i++){
        if(array[i] == array[i+1]){
            count++;
            continue;
        }
        
        if(maxCount < count) {
            maxCount = count;
            maxCountVal = array[i];
            maxCountValNum = 1;
        } else if(maxCount == count){
            maxCountValNum++;
        }
        count = 1;
    }

    if(maxCountValNum > 1) return -1;
    else return maxCountVal;
}