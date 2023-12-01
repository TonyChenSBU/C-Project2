#include <iostream>
#include <vector>
#include <cmath>
#include "approximations.h"
#include "pi_approx.h"


double* approximations(const std::vector<int>& intervals) {
    int num_approximations = intervals.size();
    double* results = new double[num_approximations * 2]; // Each result has two values: approximation and error

    for (int i = 0; i < num_approximations; ++i) {
        PiResults pi_result = pi_approx(intervals[i]);
        results[i * 2] = pi_result.approx;
        results[i * 2 + 1] = pi_result.error;
    }

    return results;
}

/*
int main() {
    std::vector<int> interval_list = {100, 500, 1000}; // Example list of intervals

    double* results = approximations(interval_list);

    // Print results
    for (int i = 0; i < interval_list.size(); ++i) {
        std::cout << "Approximation for " << interval_list[i] << " intervals: " << results[i * 2] << std::endl;
        std::cout << "Absolute Error: " << results[i * 2 + 1] << std::endl;
    }

    // Don't forget to free the dynamically allocated memory
    delete[] results;

    return 0;
}
*/