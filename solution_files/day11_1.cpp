#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> box, int n) {
    int widthNum = box[0] / n;
    int heightNum = box[1] / n;
    int depthNum = box[2] / n;
    
    return widthNum * heightNum* depthNum;
}