#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int pay = n * 12000 + (k - n / 10) * 2000;
    
    return pay;
}