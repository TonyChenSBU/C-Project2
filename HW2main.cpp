#include <iostream>
#include <vector>
#include <cmath>
#include "pi_approx.h"       // Include header file for Q1
#include "approximations.h"  // Include header file for Q2

int main() {
    // Q1: Print π approximation and error for N = 10000
    PiResults result_q1 = pi_approx(10000);
    std::cout << "Q1: Approximation for N=10000: " << result_q1.approx << std::endl;
    std::cout << "Q1: Absolute Error: " << result_q1.error << std::endl;

    // Q2: Create a vector with elements (10^1, 10^2, ..., 10^7)
    std::vector<int> intervals;
    for (int i = 1; i <= 7; ++i) {
        intervals.push_back(std::pow(10, i));
    }


    // Call Q2 function with the vector and print the results
    double* results_q2 = approximations(intervals);
    for (int i = 0; i < intervals.size(); ++i) {
        std::cout << "Q2: Approximation for " << intervals[i] << " intervals: " << results_q2[i * 2] << std::endl;
        std::cout << "Q2: Absolute Error: " << results_q2[i * 2 + 1] << std::endl;
    }

    // Clean up dynamically allocated memory
    delete[] results_q2;

    return 0;
}
