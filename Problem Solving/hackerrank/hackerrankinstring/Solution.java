package hackerrank.hackerrankinstring;

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class Result {

    /*
     * Complete the 'hackerrankInString' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING s as parameter.
     */

    private static final String HACKERRANK = "hackerrank";
    public static String hackerrankInString(String s) {

        // Write your code here
        if (s == null || s.length() == 0) {
            return "NO";
        }
        boolean letterFound = false;
        int innerIndex = 0;
        for (int i = 0; i < HACKERRANK.length(); i++) {
            char c = HACKERRANK.charAt(i);
            for (int j = innerIndex; j < s.length(); j++) {
                final char c1 = s.charAt(j);
                if (c == c1) {
                    innerIndex = j + 1;
                    letterFound = true;
                    break;
                }
            }
            if (!letterFound) {
                return "NO";
            }
            letterFound = false;
        }

        return "YES";
    }

}
/*NO
YES
NO
NO
YES
NO
YES
YES
NO
YES*/

/*NO
YES
NO
NO
NO
NO
YES
YES
NO
NO*/


public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
//        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));

        int q = Integer.parseInt(bufferedReader.readLine().trim());

        for (int qItr = 0; qItr < q; qItr++) {
            String s = bufferedReader.readLine();

            String result = Result.hackerrankInString(s);

            bufferedWriter.write(result);
            bufferedWriter.newLine();
        }

        bufferedReader.close();
        bufferedWriter.close();
    }
}
