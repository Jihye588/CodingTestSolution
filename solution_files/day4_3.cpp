#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    
    int pizzaNum = n / slice;
    while(true) {
        if((slice * pizzaNum) / n >= 1)
            break;
        pizzaNum++;
    } 
    return pizzaNum;
    
}