#include <iostream>
#include <cmath>
#include "pi_approx.h"

PiResults pi_approx(int N) {
    double delta_x = 1.0 / N;
    double sum = 0.0;

    for (int k = 0; k < N; ++k) {
        double x_k = k * delta_x;
        sum += delta_x * (sqrt(1 - x_k * x_k) + sqrt(1 - (x_k + delta_x) * (x_k + delta_x))) / 2;
    }

    double pi_approx = 4 * sum;
    double error = std::abs(pi_approx - M_PI);

    PiResults result;
    result.approx = pi_approx;
    result.error = error;

    return result;
}

/*
int main() {
    int N;
    std::cout << "Enter the number of intervals (N): ";
    std::cin >> N;

    PiResults results = pi_approx(N);

    std::cout << "Approximated Pi: " << results.approx << std::endl;
    std::cout << "Absolute Error: " << results.error << std::endl;

    return 0;
}
*/