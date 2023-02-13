#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    
    if(n % 2 == 0){
        return (n/2) * ((n/2) + 1);
    } else {
        return ((n - 1)/2) * ((n - 1)/2 + 1);
    }
}