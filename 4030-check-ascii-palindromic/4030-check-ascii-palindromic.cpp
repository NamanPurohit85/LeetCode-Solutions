class Solution {
public:
    bool palindrome(string binaryString) {
        int left = 0;
        int right = binaryString.size() - 1;
        while (left < right) {
            if (binaryString[left] != binaryString[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
    bool isPalindromic(string s) {
        string binaryString = "";
        int number;
        for (int i = 0; i < s.size(); i++) {
            number = s[i];
            bitset<8> binaryResult(number);
            string binString = binaryResult.to_string();
            binaryString += binString;
        }
        return palindrome(binaryString);
    }
};