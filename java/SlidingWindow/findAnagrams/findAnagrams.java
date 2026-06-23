import java.util.List;
import java.util.ArrayList;

class findAnagrams {
    public List<Integer> findAnagramsFunc(String s, String p) {

        int sLen = s.length();
        int pLen = p.length();

        if (sLen < pLen) {
            return new ArrayList<>();
        }

        List<Integer> res = new ArrayList<>();
        int[] pCount = new int[26];
        int[] windowCount = new int[26];

        for (int i = 0; i < pLen; i++) {
            pCount[p.charAt(i) - 'a']++;
            windowCount[s.charAt(i) - 'a']++;
        }

        if (pCount == windowCount) {
            res.add(0);
        }

        for (int right = pLen; right < sLen; right++) {
            int left = right - pLen;
            windowCount[s.charAt(left) - 'a']--;
            windowCount[s.charAt(right) - 'a']++;

            if (pCount == windowCount) {
                res.add(left + 1);
            }
        }
        return res;
    }
}
