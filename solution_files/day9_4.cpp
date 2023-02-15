#include <string>
#include <vector>

using namespace std;

//nCr = n-1Cr-1 + n-1Cr
int combination(int a, int b){
    if(b == 0 || a == b) return 1;
    return combination(a - 1, b-1) + combination(a-1, b);
}

int solution(int balls, int share) {
    return combination(balls, share);
}