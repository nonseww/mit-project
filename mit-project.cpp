#include <iostream>

void hello() {
    std::cout << "Hello, World!\n";
}

void fib(int n) {
    unsigned long long first = 0, second = 1, x; 
    for (int i = 0; i < n; ++i) {
        std::cout << first << std::endl;
        x = second; 
        second += first; 
        first = x; 
    }
}

int main()
{
    hello(); 
    int n; 
    std::cin >> n; 
    fib(n); 
    return 0; 
}
