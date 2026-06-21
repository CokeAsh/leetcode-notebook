import java.util.*;

class lengthOfLongestSubstring {

    public int lengthOfLongestSubstringFunc(String s) {
        if (s.length() == 0) {
            return 0;
        }
        if (s.length() == 1) {
            return 1;
        }

        int left = 0;
        int maxLen = 0;

        Map<Character, Integer> lastIndex = new HashMap<>();

        for (int right = 0; right < s.length(); right++) {
            Character c = s.charAt(right);

            if (lastIndex.containsKey(c) && lastIndex.get(c) >= left) {
                left = lastIndex.get(c) + 1;
            }

            lastIndex.put(c, right);

            maxLen = Math.max(maxLen, right - left + 1);
        }

        return maxLen;
    }

}
