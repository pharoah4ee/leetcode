#include <iostream>

class Solution {
public:
    /**
     * @brief Calculates the number of distinct ways to climb n stairs.
     * * @param n The total number of stairs.
     * @return int The number of distinct ways to climb.
     */
    int climbStairs(int n) {
        // Base cases: If there are 1 or 2 stairs, the number of ways is just n.
        if (n <= 2) {
            return n;
        }

        // Initialize variables for the ways to climb to the previous two steps.
        // Corresponds to ways(i-2) and ways(i-1) respectively.
        int two_steps_before = 1; // Ways to reach step 1
        int one_step_before = 2;  // Ways to reach step 2

        // Iterate from the 3rd step up to n.
        for (int i = 3; i <= n; ++i) {
            // The number of ways to reach the current step is the sum of the
            // ways to reach the previous two steps.
            int current_ways = one_step_before + two_steps_before;
            
            // Update the variables for the next iteration.
            two_steps_before = one_step_before;
            one_step_before = current_ways;
        }

        return one_step_before;
    }
};
