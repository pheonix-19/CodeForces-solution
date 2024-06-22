#include <iostream>
#include <vector>
#include <algorithm>

std::pair<int, std::vector<int>> minimizeProduct(std::vector<int>& arr) {
    int numOperations = 0;

    // Step 2
    int negCount = std::count_if(arr.begin(), arr.end(), [](int num) { return num < 0; });

    // Step 3 and 4
    if (negCount % 2 == 1) {
        auto maxNeg = std::min_element(arr.begin(), arr.end(), [](int a, int b) {
            return std::abs(a) < std::abs(b);
        });
        *maxNeg = 0;
        numOperations++;
    }

    // Step 5
    for (int& num : arr) {
        num = std::max(0, num);
    }

    // Step 6 and 7
    if (std::find(arr.begin(), arr.end(), 0) != arr.end()) {
        return {numOperations, arr};
    }

    // Step 8
    int minAbs = *std::min_element(arr.begin(), arr.end(), [](int a, int b) {
        return std::abs(a) < std::abs(b);
    });

    for (int& num : arr) {
        if (num != minAbs) {
            num = minAbs;
            numOperations++;
        }
    }

    return {numOperations, arr};
}

int main() {
    // Example usage:
    std::vector<int> arr = {155};
    auto result = minimizeProduct(arr);

    std::cout << "Minimum number of operations: " << result.first << std::endl;
    std::cout << "Modified array: ";
    for (int num : result.second) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
