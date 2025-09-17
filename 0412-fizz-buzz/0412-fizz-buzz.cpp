class Solution {
public:
    /**
     * @brief Generates the FizzBuzz sequence up to n.
     * @param n The upper bound of the sequence (inclusive).
     * @return A vector of strings representing the FizzBuzz sequence.
     */
    std::vector<std::string> fizzBuzz(int n) {
        // Initialize a vector to store the results.
        std::vector<std::string> answer;
        
        // Loop from 1 to n (inclusive).
        for (int i = 1; i <= n; ++i) {
            // Check for divisibility by both 3 and 5 first.
            if (i % 15 == 0) {
                answer.push_back("FizzBuzz");
            } 
            // Check for divisibility by 3.
            else if (i % 3 == 0) {
                answer.push_back("Fizz");
            } 
            // Check for divisibility by 5.
            else if (i % 5 == 0) {
                answer.push_back("Buzz");
            } 
            // If none of the above, add the number itself as a string.
            else {
                answer.push_back(std::to_string(i));
            }
        }
        
        return answer;
    }
};
