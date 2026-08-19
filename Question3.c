/*Q3. Longest Substring Without Repeating Characters
Given a string s, find the length of the longest substring without duplicate characters.

Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.

Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 
Constraints:
0 <= s.length <= 105
s consists of English letters, digits, symbols and spaces.*/

//Code:

int lengthOfLongestSubstring(char* s) {
    
    int lastSeen[256];

    for(int i = 0; i < 256; i++) {

        lastSeen[i] = -1;

    }

    int left = 0;

    int maxLength = 0;

    for (int right = 0; s[right] != '\0'; right++) {

        unsigned char current = s[right];

        if(lastSeen[current] >= left) {
            
            left = lastSeen[current] + 1;
        }

        lastSeen[current] = right;

        int length = right - left + 1;

        if(length > maxLength) {

            maxLength = length;
        }
    }

    return maxLength;
}