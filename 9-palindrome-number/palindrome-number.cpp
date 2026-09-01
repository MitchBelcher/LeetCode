class Solution {
public:
    bool isPalindrome(int x) {

        // If we are given a negative number, it will never be a palindrome
        if (x < 0)
        {
            return false;
        }

        // Need to know how many digits are in the input value
        long input_magnitude = 1;
        while (x >= 10 * input_magnitude)
        {
            input_magnitude = input_magnitude * 10;
        }

        // Continue until we check all digits
        while (x != 0)
        {
            int left_num = x / input_magnitude; // Find left-most number by dividing by current magnitude
            int right_num = x % 10;             // Find right-most number by mod'ing by 10

            // If these don't match at any point, the input has failed the test
            if (left_num != right_num)
            {
                return false;
            }

            x = (x % input_magnitude) / 10;             // Gotta reevaluate our new "input" stripped of the left and right-most numbers each loop
            input_magnitude = input_magnitude / 100;    // Gotta reevaluate the new magnitude of the new "input" each loop
        }

        return true;

        /* -- ORIGINAL SOLUTION
        string forward_string = to_string(x);   // Turn int into string directly
        string reverse_string = "";             // Placeholder for reverse of input

        // Iterate backwards through the input (as a string), appending to our reversal of the input
        //  Uses rbegin() and rend(), which are built-in reversal methods for C++
        //  So we are starting at the "beginning" from the end of the string
        for (auto it = forward_string.rbegin(); it != forward_string.rend(); it++) {
            reverse_string += *it;
        }

        // Straight forward compare operation on the input and reversed strings to determine if they match
        if (forward_string == reverse_string)
        {
            return true;
        }
        else {
            return false;
        }
        */
    }
};