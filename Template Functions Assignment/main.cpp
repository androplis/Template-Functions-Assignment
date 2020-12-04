// Andrew Biddle
// CIS 1202.501
// 12.3.20

#include <iostream>
using namespace std;

template<class T>
T half(T value) {
    return value / 2.0;
}

// Is this explicitly specifying the type?
int half(int value) {
    return round(static_cast<double>(value) / 2);
}


int main() {
    double x = 7.0;
    float y = 5.0f;
    int z = 3;
    
    cout << half(x) << endl;
    cout << half(y) << endl;
    cout << half(z) << endl;

    cout << endl << endl;
    return 0;
}

