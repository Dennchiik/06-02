#include <iostream>

template <typename T>
class Swapper {
public:
    void Swap(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    Swapper<int> intSwapper;
    int x = 5, y = 10;
    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;
    intSwapper.Swap(x, y);
    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    Swapper<double> doubleSwapper;
    double a = 3.14, b = 2.71;
    std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;
    doubleSwapper.Swap(a, b);
    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    return 0;
}
