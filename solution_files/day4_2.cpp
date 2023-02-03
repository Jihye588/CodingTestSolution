#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(a < b){
        swap(a, b);
    }
    int gcd = 0;
    while(b != 0){
        gcd = a % b;
        a = b;
        b = gcd;
    }
    return a;
}

int solution(int n) {
    
    int biggerNum = n > 6? n : 6;
    int gcdNum = gcd(n, 6);
    int lcdNum = n * 6 / gcdNum;
    
    return lcdNum / 6;
}