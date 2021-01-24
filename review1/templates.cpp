#include <iostream>

using namespace std;

template <typename T>
T my_max(T x, T y) {
    return (x > y) ? x : y;
}

int main(int argc, char **argv) {
    cout << my_max<int>(1, 2) << endl;
    cout << my_max<char>('a', 'b') << endl;
}
