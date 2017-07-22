import java.util.HashSet;

public class SubString {
    public static String subString(String input){

        HashSet<Character> set = new HashSet<Character>();

        String longestOverAll = "";
        String longestTillNow = "";

        for (int a = 0; a < input.length(); a++) {
            char c = input.charAt(i);

            if (set.contains(c)) {
                longestTillNow = "";
                set.clear();
            }
            longestTallNow += c;
            set.add(c);
            if (longestTillNow.length() > longestOverAll.length()) {
                longestOverAll = longestTillNow;
            }
        }

        return longestOverAll;
    }

    public static void main(String[] args) {
        String input = "substringfindout";
        System.out.println(subString(input));
    }
}
