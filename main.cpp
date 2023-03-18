#include <iostream>
#include <cassert>

using std::cout;
using std::endl;

float travelTime(float distance, float speed) {
    assert(speed > 0);
    return distance / speed;
}

int main() {
    float dist = 1000;
    float speed = 0.1;

    cout << travelTime(dist, speed) << endl;
}
