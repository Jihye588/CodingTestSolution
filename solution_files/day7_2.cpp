#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    switch(angle/90){
        case 0:
            return 1;
        case 1:
            if(angle%90 == 0)
                return 2;
            else return 3;
        case 2:
            return 4;
    }
}