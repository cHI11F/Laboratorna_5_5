#include <iostream>

double sequence(int n, double a) {
    if (n == 1) {
        return 8;
    }
    else {
        return (8 - a) / n;
    }
}

double findLimit(int n, double a, int depth) {
    if (depth == 0) {
        std::cout << "Глибина рекурсії досягла максимального значення." << std::endl;
        return a;
    }

    double currentTerm = (8 - a) / n;
    double limit = 8;

    for (int i = 2; i <= n; ++i) {
        currentTerm = (8 - currentTerm) / i;
        limit += currentTerm;
    }

    return limit;
}

int main() {
    int n;
    std::cout << "Vvedіt' znachennya n: ";
    std::cin >> n;


    double initialTerm = 1.0;


    double result = sequence(n, initialTerm);

    std::cout << "Znachennya poslidovnostі a(" << n << ") : " << result << std::endl;

    int recursionDepth = n;  
    double limit = findLimit(n, initialTerm, recursionDepth);
    std::cout << "Mezha poslidovnostі pri n → ∞: " << limit << std::endl;

    return 0;
}