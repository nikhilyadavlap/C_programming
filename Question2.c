/*
Q2. Shuffle the Array
Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
Return the array in the form [x1,y1,x2,y2,...,xn,yn].

Example 1:
Input: nums = [2,5,1,3,4,7], n = 3
Output: [2,3,5,4,1,7] 
Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].

Example 2:
Input: nums = [1,2,3,4,4,3,2,1], n = 4
Output: [1,4,2,3,3,2,4,1]

Example 3:
Input: nums = [1,1,2,2], n = 2
Output: [1,2,1,2]
 

Constraints:
1 <= n <= 500
nums.length == 2n
1 <= nums[i] <= 10^3
*/

#include <stdio.h>

int main() {

    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int nums[2 * n];
    int result[2 * n];

    printf("Enter %d elements: \n", 2 * n);

    for(int i = 0; i < 2 * n; i++) {

        scanf("%d", &nums[i]);
    }

    //Shuffle: [x1,x2,...,xn,y1,y2,...,yn]
    //        --> [x1,y1,x2,y2,...,xn,yn]

    for(int i = 0; i < n; i++) {

        result[2 * i] = nums[i];
        result[2 * i + 1] = nums[n + i];
    }

    printf("Output: [");

    for(int i = 0; i < 2 * n; i++) {

        printf("%d", result[i]);

            if (i < 2 * n - 1) {
                printf(" , ");
            }
    }

    printf("]\n");

    return 0;

}