#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int generalAnt = hp/5;
    hp = hp % 5;
    int soldierAnt = hp/3;
    int ant = hp % 3;
    return generalAnt + soldierAnt + ant;
}