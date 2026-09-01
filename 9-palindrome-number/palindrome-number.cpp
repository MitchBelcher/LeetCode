class Solution {
public:
    bool isPalindrome(int x) {
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
    }
};