#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer(2);

    int numerSum = numer1 * denom2 + numer2 * denom1;
    int denomSum = denom1 * denom2;
    int biggerNum = numerSum >= denomSum? numerSum: denomSum;
    int smallerNum = numerSum == biggerNum? denomSum : numerSum;
    
    int maxCommDiv = 0;
    int big_sml = 0;
    while(smallerNum != 0) {    // Euclidean algorithm
        big_sml = biggerNum % smallerNum;   
        biggerNum = smallerNum;
        smallerNum = big_sml;
    }
    
    answer[0] = numerSum / biggerNum;
    answer[1] = denomSum / biggerNum;

    
    return answer;
}