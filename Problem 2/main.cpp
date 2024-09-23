#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse

// Function to reverse a vector
std::vector<int> reverseVector(const std::vector<int>& input) {
    std::vector<int> reversed(input);  // Create a copy of the input vector
    std::reverse(reversed.begin(), reversed.end());  // Reverse the vector
    return reversed;
}

int main() {
    // Example usage
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> output = reverseVector(input);

    // Print the reversed vector
    for (int num : output) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
