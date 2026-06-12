import java.util.HashSet;
import java.util.Set;

public class longestConsecutive {

    public int longestConsecutiveQ(int[] nums) {
        Set<Integer> numSet = new HashSet<>();
        for (var num : nums) {
            numSet.add(num);
        }

        int MaxLen = 0;

        for (var num : numSet) {
            if (!numSet.contains(num - 1)) {
                int currentNum = num;
                int count = 1;

                while (numSet.contains(currentNum + 1)) {
                    currentNum++;
                    count++;
                }

                if (count > MaxLen) {
                    MaxLen = count;
                }
            }
        }
        return 0;
    }
}
