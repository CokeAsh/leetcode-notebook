class trap {
    public int trapFunc(int[] height) {
        int sum = 0;
        int length = height.length;

        int left = 0;
        int right = length - 1;

        int leftMax = 0;
        int rightMax = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                leftMax = Math.max(leftMax, height[left]);
                sum += leftMax - height[left];
                left++;
            } else {
                rightMax = Math.max(rightMax, height[right]);
                sum += rightMax - height[right];
                right--;
            }
        }

        return sum;
    }
}
