#include <iostream>

void hello() {
    std::cout << "Hello, World!\n";
}

unsigned long long fib(int n) {
    if (n == 1) return 0; 
    if (n == 2) return 1; 
    return fib(n - 1) + fib(n - 2); 
}

int main()
{
    hello(); 
    int n; 
    std::cin >> n; 
    std::cout << fib(n); 
    return 0; 
}
