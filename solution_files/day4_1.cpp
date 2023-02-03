#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    
    int pizzaNum = n/7;
    
    if(pizzaNum != 0 && (pizzaNum * 7) % n == 0)
        return pizzaNum;
    else
        return pizzaNum + 1;

}