import java.util.*;

class groupAnagrams {

    public List<List<String>> groupAnagram(String[] strs) {
        Map<String, List<String>> anagramMap = new HashMap<>();

        for (int i = 0; i < strs.length; i++) {
            char[] word = strs[i].toCharArray();
            Arrays.sort(word);
            String stringWord = new String(word);
            List<String> list = anagramMap.get(stringWord);
            if (list == null) {
                list = new ArrayList<>();
                anagramMap.put(stringWord, list);
            }
            list.add(strs[i]);
        }
        return new ArrayList<>(anagramMap.values());
    }
}
