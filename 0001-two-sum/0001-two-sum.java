class Solution {

    public int[] twoSum(int[] nums, int target) {

        int[] a = new int[2];

        for (int left = 0; left < nums.length; left++) {

            for (int right = left + 1; right < nums.length; right++) {

                if (nums[left] + nums[right] == target) {

                    a[0] = left;
                    a[1] = right;

                    return a;
                }
            }
        }

        return a;
    }
}