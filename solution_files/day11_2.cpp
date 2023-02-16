#include <string>
#include <vector>
#include <iostream>

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
    int cnt = 0;
    for(int i = 4; i <= n; i++) {
        for(int j = 2; j < i; j++) {
            if(gcd(i, j) != 1 ) {
                cnt++;
                break;
            }
        }
    }
    return cnt;
}