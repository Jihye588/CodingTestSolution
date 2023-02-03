#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {

    double total = 0.;
    for(auto n : numbers){
        total+= n;
    }
    return total/numbers.size();
}