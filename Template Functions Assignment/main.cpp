// Andrew Biddle
// CIS 1202.501
// 12.3.20

#include <iostream>
using namespace std;

int main() {
    
    cout << endl << endl;
    return 0;
}

template<class T>
T half(T value) {
    return value / 2.0;
}

template<class T>
T half(int value) {
    return round(static_cast<double>(value / 2.0));
}
