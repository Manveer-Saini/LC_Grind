/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function (height) {
    let max = 0;
    let left = 0;
    let right = height.length - 1;
    let length = 0;

    while (left < right) {
        length = Math.min(height[left], height[right]);
        max = Math.max(max, length * (right - left));

        if (height[left] < height[right]) {
            left++;
        }
        else {
            right--;
        }
    }

    return max;
};