#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int randNum = (rand() % 5) + 1;
    switch (randNum) {
        case 1:
            // Event here
            break;
        case 2:
            // Event here
            break;
        case 3:
            // Event here
            break;
        case 4:
            // Event here
            break;
        case 5:
            // Event here
            break;
        default:
            // Event here
            // break; is optional
    }
}
