#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        // Create a vector of strings to store the final output
        vector<string> result;
        
        // Loop from 1 to n (inclusive)
        for (int i = 1; i <= n; i++) {
            
            // Condition 1: Divisible by both 3 and 5
            if (i % 3 == 0 && i % 5 == 0) {
                result.push_back("FizzBuzz");
            }
            // Condition 2: Divisible by 3 only
            else if (i % 3 == 0) {
                result.push_back("Fizz");
            }
            // Condition 3: Divisible by 5 only
            else if (i % 5 == 0) {
                result.push_back("Buzz");
            }
            // Condition 4: Not divisible by 3 or 5, convert number to string
            else {
                result.push_back(to_string(i));
            }
        }
        
        return result;
    }
};
